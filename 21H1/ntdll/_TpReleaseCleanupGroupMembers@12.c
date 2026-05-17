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

_PEB_LDR_DATA *__stdcall TpReleaseCleanupGroupMembers(_DWORD *a1, int a2, int a3)
{
  _PEB_LDR_DATA *result; // eax
  _DWORD *v4; // ebx
  _DWORD *i; // eax
  _DWORD *v6; // esi
  _DWORD *j; // eax
  _DWORD *v8; // eax
  signed __int32 *v9; // esi
  signed __int32 v10; // eax
  _DWORD *v11; // ecx
  int v12; // edx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _DWORD *v15; // edx
  int v16; // edx
  _DWORD *v17; // eax
  signed __int32 v18; // edx
  signed __int32 v19; // esi
  _DWORD *v20; // edx
  _DWORD *v21; // ebx
  void (__thiscall *v22)(_DWORD, _DWORD *, int); // eax
  void (__thiscall *v23)(_DWORD, _DWORD *); // eax
  _DWORD *v24; // ebx
  int v25; // ecx
  _DWORD *v26; // edx
  _DWORD *v27; // ecx
  int v28; // eax
  _DWORD *v29; // [esp+10h] [ebp-28h]
  _DWORD *v30; // [esp+18h] [ebp-20h]
  _DWORD *v31; // [esp+18h] [ebp-20h]
  _DWORD *v32; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v33; // [esp+1Ch] [ebp-1Ch]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+4h]

  if ( !a1 )
    TppRaiseInvalidParameter();
  result = NtCurrentPeb()->Ldr;
  if ( !result->ShutdownInProgress )
  {
    RtlAcquireSRWLockExclusive(a1 + 10);
    RtlAcquireSRWLockExclusive(a1 + 2);
    v4 = a1 + 3;
    for ( i = (_DWORD *)a1[3]; i != v4; i = v31 )
    {
      v9 = i - 5;
      v32 = i - 5;
      v31 = (_DWORD *)*i;
      v10 = _InterlockedOr(i + 21, 0x20000u);
      v11 = v9 + 5;
      v4 = a1 + 3;
      if ( (v10 & 0x30000) != 0 )
      {
        v16 = *v11;
        v17 = (_DWORD *)v9[6];
        if ( *(_DWORD **)(*v11 + 4) != v11 || (_DWORD *)*v17 != v11 )
LABEL_30:
          __fastfail(3u);
        *v17 = v16;
        *(_DWORD *)(v16 + 4) = v17;
        v18 = *v9;
        while ( v18 )
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange(v32, v18 + 1, v18);
          v4 = a1 + 3;
          if ( v18 == v19 )
            goto LABEL_25;
        }
        v19 = 0;
LABEL_25:
        if ( v19 )
        {
          v20 = (_DWORD *)a1[12];
          if ( (_DWORD *)*v20 != a1 + 11 )
            goto LABEL_30;
          *v11 = a1 + 11;
          v11[1] = v20;
          *v20 = v11;
          a1[12] = v11;
        }
        else
        {
          v11[1] = v11;
          *v11 = v11;
        }
      }
      else
      {
        v32[28] = retaddr;
        v12 = *v11;
        v13 = (_DWORD *)v9[6];
        if ( *(_DWORD **)(*v11 + 4) != v11 )
          goto LABEL_30;
        if ( (_DWORD *)*v13 != v11 )
          goto LABEL_30;
        *v13 = v12;
        *(_DWORD *)(v12 + 4) = v13;
        v14 = v32 + 5;
        v15 = (_DWORD *)a1[12];
        if ( (_DWORD *)*v15 != a1 + 11 )
          goto LABEL_30;
        *v14 = a1 + 11;
        v32[6] = v15;
        *v15 = v14;
        a1[12] = v14;
      }
    }
    RtlReleaseSRWLockExclusive(a1 + 2);
    v6 = a1 + 11;
    for ( j = (_DWORD *)a1[11]; j != v6; j = v29 )
    {
      v21 = j - 5;
      v29 = (_DWORD *)*j;
      v22 = *(void (__thiscall **)(_DWORD, _DWORD *, int))(*(j - 4) + 8);
      if ( v22 )
        v22(v22, v21, a2);
      if ( a2 )
      {
        v23 = *(void (__thiscall **)(_DWORD, _DWORD *))(v21[1] + 12);
        if ( v23 )
          v23(v23, v21);
      }
    }
    v30 = (_DWORD *)*v6;
    do
    {
      v8 = v30;
      if ( v30 == v6 )
      {
        RtlReleaseSRWLockExclusive(a1 + 10);
        return (_PEB_LDR_DATA *)TppBarrierAdjust(1);
      }
      v24 = v30 - 5;
      v33 = v30 - 5;
      v25 = *v30;
      v30 = (_DWORD *)v25;
      v26 = (_DWORD *)v8[1];
      if ( *(_DWORD **)(v25 + 4) != v8 || (_DWORD *)*v26 != v8 )
        goto LABEL_30;
      *v26 = v25;
      *(_DWORD *)(v25 + 4) = v26;
      v8[1] = v8;
      *v8 = v8;
      TppBarrierAdjust(1);
      v27 = v24 + 3;
      if ( v24[3] )
      {
        v28 = v24[26];
        v24 = v33;
        if ( (v28 & 0x10000) == 0 )
        {
          ((void (__thiscall *)(_DWORD, _DWORD, int))*v27)(*v27, v33[13], a3);
          v6 = a1 + 11;
        }
      }
    }
    while ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) );
    return (_PEB_LDR_DATA *)(*(int (__thiscall **)(_DWORD, _DWORD *, int))v24[1])(*(_DWORD *)v24[1], v24, 1261490462);
  }
  return result;
}
