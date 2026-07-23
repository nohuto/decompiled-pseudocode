/*
 * XREFs of _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71
 * Callers:
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _TpAllocJobNotification@20 @ 0x4B383550 (_TpAllocJobNotification@20.c)
 * Callees:
 *     _TppPoolpFree@4 @ 0x4B2AB6C5 (_TppPoolpFree@4.c)
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _TppPoolpDereferenceGlobalPool@8 @ 0x4B2B26D2 (_TppPoolpDereferenceGlobalPool@8.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 *     _TppPoolpReferenceGlobalPool@12 @ 0x4B2B50CD (_TppPoolpReferenceGlobalPool@12.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall TppCleanupGroupMemberInitialize(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // eax
  _GUID *p_ActivityId; // esi
  int v8; // eax
  NTSTATUS v9; // esi
  volatile signed __int32 *v10; // eax
  _RTL_SRWLOCK *v11; // eax
  int *v12; // ecx
  int v13; // eax
  int **v14; // edx
  volatile signed __int32 *v15; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  ULONG_PTR *v20; // [esp+0h] [ebp-44h]
  int ActivationContextInformation; // [esp+10h] [ebp-34h] BYREF
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  int v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h]
  NTSTATUS v27; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]
  int savedregs; // [esp+44h] [ebp+0h]

  v26 = a1;
  ActivationContextInformation = 0;
  v22 = 0;
  v27 = 0;
  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 4) = a5;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  *(_DWORD *)(a1 + 104) = a4;
  if ( !a3 )
  {
    *(_DWORD *)(a1 + 92) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 88) = 0;
LABEL_3:
    v6 = 1;
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 92) = a3[1];
  *(_DWORD *)(a1 + 8) = a3[2];
  *(_DWORD *)(a1 + 12) = a3[3];
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 56) = a3[5];
  *(_DWORD *)(a1 + 88) = a3[4];
  if ( *a3 <= 1u )
    goto LABEL_3;
  v6 = a3[8];
  if ( v6 >= 3 )
    return -1073741811;
LABEL_4:
  *(_DWORD *)(a1 + 116) = v6;
  v25 = a4 & 2;
  if ( (a4 & 2) != 0 && *(_DWORD *)(a1 + 92) )
    return -1073741811;
  *(_DWORD *)(a1 + 60) = NtCurrentTeb()->SubProcessTag;
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  *(_DWORD *)(a1 + 64) = p_ActivityId->Data1;
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  *(_DWORD *)(a1 + 68) = p_ActivityId->Data1;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)&p_ActivityId->Data2;
  *(_DWORD *)(a1 + 24) = a1 + 20;
  *(_DWORD *)(a1 + 20) = a1 + 20;
  v8 = *(_DWORD *)(a1 + 56);
  if ( v8 )
  {
    if ( v8 != -1 )
      RtlAddRefActivationContext(*(PACTIVATION_CONTEXT *)(a1 + 56));
  }
  else
  {
    v9 = RtlQueryInformationActivationContext(
           1u,
           0,
           0,
           ActivationContextBasicInformation,
           &ActivationContextInformation,
           8uLL,
           v20);
    v27 = v9;
    if ( v9 < 0 )
      return v9;
    if ( (v22 & 1) != 0 )
    {
      RtlReleaseActivationContext((PACTIVATION_CONTEXT)ActivationContextInformation);
      ActivationContextInformation = -1;
    }
    *(_DWORD *)(a1 + 56) = ActivationContextInformation;
  }
  ms_exc.registration.TryLevel = 0;
  v23 = 1;
  v10 = *(volatile signed __int32 **)(a1 + 92);
  if ( v10 )
  {
    _InterlockedIncrement(v10);
LABEL_12:
    ms_exc.registration.TryLevel = 1;
    v24 = 1;
    v9 = 0;
    v27 = 0;
    v11 = *(_RTL_SRWLOCK **)(a1 + 92);
    if ( v11 )
    {
      RtlAcquireSRWLockExclusive(v11 + 11);
      ms_exc.registration.TryLevel = 2;
      v12 = (int *)(a1 + 96);
      v13 = *(_DWORD *)(a1 + 92) + 48;
      v14 = *(int ***)(*(_DWORD *)(a1 + 92) + 52);
      if ( *v14 == (int *)v13 )
      {
        *v12 = v13;
        *(_DWORD *)(a1 + 100) = v14;
        *v14 = v12;
        *(_DWORD *)(v13 + 4) = v12;
        ms_exc.registration.TryLevel = 1;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_DWORD *)(a1 + 92) + 44));
LABEL_15:
        v15 = *(volatile signed __int32 **)(a1 + 8);
        if ( v15 )
          _InterlockedIncrement(v15);
        ms_exc.registration.TryLevel = 0;
        v24 = 0;
        savedregs = 1261128670;
        goto LABEL_18;
      }
    }
    else
    {
      RtlAcquireSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
      ms_exc.registration.TryLevel = 3;
      v17 = (_DWORD *)(a1 + 96);
      v18 = off_4B3A37B0;
      if ( *off_4B3A37B0 == (_UNKNOWN *)&TppCleanupGroupMemberpNoPoolList )
      {
        *v17 = &TppCleanupGroupMemberpNoPoolList;
        *(_DWORD *)(a1 + 100) = v18;
        *v18 = v17;
        off_4B3A37B0 = (_UNKNOWN **)(a1 + 96);
        ms_exc.registration.TryLevel = 1;
        RtlReleaseSRWLockExclusive(&TppCleanupGroupMemberpNoPoolListLock);
        goto LABEL_15;
      }
    }
    __fastfail(3u);
  }
  v9 = TppPoolpReferenceGlobalPool(a1 + 92);
  v27 = v9;
  if ( v9 >= 0 )
    goto LABEL_12;
LABEL_18:
  ms_exc.registration.TryLevel = -2;
  v23 = 0;
  if ( v9 < 0 )
  {
    v19 = *(_DWORD *)(a1 + 56);
    if ( v19 )
    {
      if ( v19 != -1 )
        RtlReleaseActivationContext(*(PACTIVATION_CONTEXT *)(a1 + 56));
    }
  }
  return v9;
}
