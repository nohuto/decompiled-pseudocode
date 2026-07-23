/*
 * XREFs of _TpReleaseCleanupGroupMembers@12 @ 0x4B2ABC00
 * Callers:
 *     <none>
 * Callees:
 *     _TpReleaseCleanupGroupMembers@12 @ 0x4B2ABC00 (_TpReleaseCleanupGroupMembers@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  char *v3; // ebx
  char *i; // eax
  _DWORD *v5; // esi
  _DWORD *j; // eax
  _DWORD *v7; // eax
  signed __int32 *v8; // esi
  signed __int32 v9; // eax
  _TP_CLEANUP_GROUP *v10; // ecx
  _TP_CLEANUP_GROUP *v11; // edx
  _TP_CLEANUP_GROUP **v12; // eax
  _TP_CLEANUP_GROUP *v13; // eax
  PTP_CLEANUP_GROUP *v14; // edx
  _TP_CLEANUP_GROUP *v15; // edx
  _TP_CLEANUP_GROUP **v16; // eax
  signed __int32 v17; // edx
  signed __int32 v18; // esi
  PTP_CLEANUP_GROUP *v19; // edx
  _DWORD *v20; // ebx
  void (__thiscall *v21)(_DWORD, _DWORD *, LOGICAL); // eax
  void (__thiscall *v22)(_DWORD, _DWORD *); // eax
  _DWORD *v23; // ebx
  int v24; // ecx
  _DWORD *v25; // edx
  _DWORD *v26; // ecx
  int v27; // eax
  _DWORD *v28; // [esp+10h] [ebp-28h]
  _DWORD *v29; // [esp+18h] [ebp-20h]
  char *v30; // [esp+18h] [ebp-20h]
  volatile signed __int32 *v31; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v32; // [esp+1Ch] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+4h]

  if ( !CleanupGroup )
    TppRaiseInvalidParameter();
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 10);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 2);
    v3 = (char *)CleanupGroup + 12;
    for ( i = (char *)*((_DWORD *)CleanupGroup + 3); i != v3; i = v30 )
    {
      v8 = (signed __int32 *)(i - 20);
      v31 = (volatile signed __int32 *)(i - 20);
      v30 = *(char **)i;
      v9 = _InterlockedOr((volatile signed __int32 *)i + 21, 0x20000u);
      v10 = (_TP_CLEANUP_GROUP *)(v8 + 5);
      v3 = (char *)CleanupGroup + 12;
      if ( (v9 & 0x30000) != 0 )
      {
        v15 = *(_TP_CLEANUP_GROUP **)v10;
        v16 = (_TP_CLEANUP_GROUP **)v8[6];
        if ( *(_TP_CLEANUP_GROUP **)(*(_DWORD *)v10 + 4) != v10 || *v16 != v10 )
LABEL_30:
          __fastfail(3u);
        *v16 = v15;
        *((_DWORD *)v15 + 1) = v16;
        v17 = *v8;
        while ( v17 )
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(v31, v17 + 1, v17);
          v3 = (char *)CleanupGroup + 12;
          if ( v17 == v18 )
            goto LABEL_25;
        }
        v18 = 0;
LABEL_25:
        if ( v18 )
        {
          v19 = (PTP_CLEANUP_GROUP *)*((_DWORD *)CleanupGroup + 12);
          if ( *v19 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 44) )
            goto LABEL_30;
          *(_DWORD *)v10 = (char *)CleanupGroup + 44;
          *((_DWORD *)v10 + 1) = v19;
          *v19 = v10;
          *((_DWORD *)CleanupGroup + 12) = v10;
        }
        else
        {
          *((_DWORD *)v10 + 1) = v10;
          *(_DWORD *)v10 = v10;
        }
      }
      else
      {
        *((_DWORD *)v31 + 28) = retaddr;
        v11 = *(_TP_CLEANUP_GROUP **)v10;
        v12 = (_TP_CLEANUP_GROUP **)v8[6];
        if ( *(_TP_CLEANUP_GROUP **)(*(_DWORD *)v10 + 4) != v10 )
          goto LABEL_30;
        if ( *v12 != v10 )
          goto LABEL_30;
        *v12 = v11;
        *((_DWORD *)v11 + 1) = v12;
        v13 = (_TP_CLEANUP_GROUP *)(v31 + 5);
        v14 = (PTP_CLEANUP_GROUP *)*((_DWORD *)CleanupGroup + 12);
        if ( *v14 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 44) )
          goto LABEL_30;
        *(_DWORD *)v13 = (char *)CleanupGroup + 44;
        *((_DWORD *)v31 + 6) = v14;
        *v14 = v13;
        *((_DWORD *)CleanupGroup + 12) = v13;
      }
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 2);
    v5 = (_DWORD *)((char *)CleanupGroup + 44);
    for ( j = (_DWORD *)*((_DWORD *)CleanupGroup + 11); j != v5; j = v28 )
    {
      v20 = j - 5;
      v28 = (_DWORD *)*j;
      v21 = *(void (__thiscall **)(_DWORD, _DWORD *, LOGICAL))(*(j - 4) + 8);
      if ( v21 )
        v21(v21, v20, CancelPendingCallbacks);
      if ( CancelPendingCallbacks )
      {
        v22 = *(void (__thiscall **)(_DWORD, _DWORD *))(v20[1] + 12);
        if ( v22 )
          v22(v22, v20);
      }
    }
    v29 = (_DWORD *)*v5;
    do
    {
      v7 = v29;
      if ( v29 == v5 )
      {
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 10);
        TppBarrierAdjust(1);
        return;
      }
      v23 = v29 - 5;
      v32 = v29 - 5;
      v24 = *v29;
      v29 = (_DWORD *)v24;
      v25 = (_DWORD *)v7[1];
      if ( *(_DWORD **)(v24 + 4) != v7 || (_DWORD *)*v25 != v7 )
        goto LABEL_30;
      *v25 = v24;
      *(_DWORD *)(v24 + 4) = v25;
      v7[1] = v7;
      *v7 = v7;
      TppBarrierAdjust(1);
      v26 = v23 + 3;
      if ( v23[3] )
      {
        v27 = v23[26];
        v23 = v32;
        if ( (v27 & 0x10000) == 0 )
        {
          ((void (__thiscall *)(_DWORD, _DWORD, PVOID))*v26)(*v26, v32[13], CleanupParameter);
          v5 = (_DWORD *)((char *)CleanupGroup + 44);
        }
      }
    }
    while ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) );
    (*(void (__thiscall **)(_DWORD, _DWORD *, int))v23[1])(*(_DWORD *)v23[1], v23, 1261490462);
  }
}
