/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1406236A4
 * Callers:
 *     NtDeleteWnfStateName @ 0x1406211F0 (NtDeleteWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140621E1C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x1406227CC (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140622CE4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140623070 (NtQueryWnfStateData.c)
 *     NtCreateWnfStateName @ 0x140626360 (NtCreateWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1406F6990 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407BACBC (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     HalSystemVectorDispatchEntry @ 0x14026BA30 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402743C0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140623E4C (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x140625AE0 (ExpWnfFindScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1406F83F4 (ExpWnfCreateProcessContext.c)
 *     ExpWnfFreeScopeInstance @ 0x14070D1B0 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeInstance @ 0x14070DAFC (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x1407BD16C (ExpWnfAllocateScopeMap.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(
        struct _EX_RUNDOWN_REF **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *Sid)
{
  __int64 v5; // r13
  char *CurrentServerSiloGlobals; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  ULONG v12; // edx
  volatile signed __int64 *v13; // r15
  struct _EX_RUNDOWN_REF *v14; // rsi
  bool v15; // zf
  int CurrentScopeInstance; // ebx
  __int64 *v18; // r12
  PVOID PoolWithTag; // rax
  __int64 v20; // r12
  unsigned __int64 *v21; // rdi
  __int64 v22; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  struct _EX_RUNDOWN_REF *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rax
  _QWORD *v31; // rbx
  int v32; // [rsp+30h] [rbp-40h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID v34; // [rsp+40h] [rbp-30h] BYREF
  __int64 v35; // [rsp+48h] [rbp-28h] BYREF
  __int64 v36; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h]
  int v39; // [rsp+B8h] [rbp+48h]
  int v40; // [rsp+C0h] [rbp+50h]

  v40 = a3;
  v39 = a2;
  v5 = a4;
  v36 = 0LL;
  v34 = 0LL;
  P = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && (unsigned int)(a4 - 4) > 1 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v25 = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = (char *)PsGetServerSiloGlobals(v25);
  }
  v9 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 912);
  if ( !*((_QWORD *)CurrentServerSiloGlobals + 114) )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v34);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v34, 0LL) )
      ExFreePoolWithTag(v34, 0x20666E57u);
  }
  v35 = *(_QWORD *)(a2 + 2152);
  v10 = v35;
  if ( !v35 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v35);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v10 = v35;
  }
  if ( Sid || (v11 = 1, a3) )
    v11 = 0;
  v32 = v11;
  v12 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      v13 = (volatile signed __int64 *)(*v9 + 16);
    }
    else
    {
      if ( (_DWORD)v5 != 5 )
      {
        v13 = (volatile signed __int64 *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
        goto LABEL_12;
      }
      v13 = (volatile signed __int64 *)(*v9 + 24);
    }
  }
  else
  {
    v13 = (volatile signed __int64 *)(*v9 + 8);
  }
  v32 = 1;
LABEL_12:
  v14 = (struct _EX_RUNDOWN_REF *)*v13;
  *(_QWORD *)&NumberOfBytes[1] = *v13;
  if ( v32 && v14 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v12 = 4;
          goto LABEL_48;
        case 2:
          v12 = RtlLengthSid(Sid);
          goto LABEL_48;
        case 3:
LABEL_48:
          NumberOfBytes[0] = v12;
          v32 = 0;
          goto LABEL_30;
      }
    }
    v12 = 0;
    goto LABEL_48;
  }
  NumberOfBytes[0] = 8;
  v18 = &v36;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                           v39,
                           v40,
                           v5,
                           (unsigned int)&v36,
                           (__int64)NumberOfBytes,
                           (__int64)&v32);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v18 = (__int64 *)PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             v39,
                             v40,
                             v5,
                             (_DWORD)PoolWithTag,
                             (__int64)NumberOfBytes,
                             (__int64)&v32);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_17;
  if ( NumberOfBytes[0] )
    Sid = v18;
LABEL_30:
  if ( v32 && v14 )
  {
LABEL_14:
    v15 = ExAcquireRundownProtection_0(v14 + 1) == 0;
    goto LABEL_15;
  }
  v20 = *v9 + 8 * (2 * v5 + v5 + 5);
  v21 = (unsigned __int64 *)(*v9 + 8 * (v5 + 2 * v5 + 4));
  v22 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v21, v22, (ULONG_PTR)v21);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v20, Sid, NumberOfBytes[0]);
  v14 = ScopeInstance;
  if ( ScopeInstance )
  {
    v24 = ExAcquireRundownProtection_0(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v21);
    KeAbPostRelease((ULONG_PTR)v21);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v21);
    KeAbPostRelease((ULONG_PTR)v21);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&NumberOfBytes[1], (unsigned int)v5, Sid, NumberOfBytes[0]);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_17;
    v26 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0);
    v27 = v26;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
      ExfAcquirePushLockExclusiveEx(v21, v26, (ULONG_PTR)v21);
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    v28 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v20, Sid, NumberOfBytes[0]);
    v14 = v28;
    if ( !v28 )
    {
      v29 = *(_QWORD *)&NumberOfBytes[1];
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v30 = *(_QWORD *)v20;
      v31 = (_QWORD *)(v29 + 32);
      if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
        __fastfail(3u);
      *v31 = v30;
      v31[1] = v20;
      *(_QWORD *)(v30 + 8) = v31;
      *(_QWORD *)v20 = v31;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21);
      KeAbPostRelease((ULONG_PTR)v21);
      if ( v32 )
        _InterlockedCompareExchange64(v13, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v14 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_16;
    }
    v24 = ExAcquireRundownProtection_0(v28 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v21);
    KeAbPostRelease((ULONG_PTR)v21);
    ExpWnfFreeScopeInstance(*(PVOID *)&NumberOfBytes[1]);
  }
  v15 = v24 == 0;
LABEL_15:
  if ( !v15 )
  {
LABEL_16:
    CurrentScopeInstance = 0;
    *a1 = v14;
    goto LABEL_17;
  }
  CurrentScopeInstance = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
