/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x140798334
 * Callers:
 *     NtCreateWnfStateName @ 0x14066F980 (NtCreateWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x140791110 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateName @ 0x1407920F0 (NtDeleteWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1407931C0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140794AD0 (NtQueryWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 *     ExpNtDeleteWnfStateData @ 0x14085EB0C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x14066A68C (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1406C4AE4 (ExpWnfCreateProcessContext.c)
 *     ExpWnfFreeScopeInstance @ 0x1406E1C68 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeInstance @ 0x1406E4A40 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1407915C4 (ExpWnfFindScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x14085F8CC (ExpWnfAllocateScopeMap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(
        struct _EX_RUNDOWN_REF **a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *Sid)
{
  __int64 v5; // r15
  char *CurrentServerSiloGlobals; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  __int64 *v11; // r13
  BOOL v12; // eax
  ULONG v13; // edx
  volatile signed __int64 *v14; // r14
  struct _EX_RUNDOWN_REF *v15; // rsi
  bool v16; // zf
  int CurrentScopeInstance; // ebx
  __int64 v19; // rax
  __int64 *v20; // r12
  volatile signed __int64 v21; // rax
  signed __int64 *v22; // rdi
  _QWORD **v23; // r12
  __int64 v24; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v26; // ebx
  PVOID PoolWithTag; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  struct _EX_RUNDOWN_REF *v30; // rax
  __int64 v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rbx
  int v34; // [rsp+30h] [rbp-40h] BYREF
  ULONG NumberOfBytes[3]; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID v36; // [rsp+40h] [rbp-30h] BYREF
  __int64 v37; // [rsp+48h] [rbp-28h] BYREF
  __int64 v38; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h]

  v5 = a4;
  v38 = 0LL;
  v36 = 0LL;
  P = 0LL;
  if ( KeGetCurrentThread()->PreviousMode && (unsigned int)(a4 - 4) > 1 )
  {
    CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  else
  {
    v19 = HalSystemVectorDispatchEntry();
    CurrentServerSiloGlobals = (char *)PsGetServerSiloGlobals(v19);
  }
  v9 = (volatile signed __int64 *)(CurrentServerSiloGlobals + 912);
  if ( !*((_QWORD *)CurrentServerSiloGlobals + 114) )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v36);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v36, 0LL) )
      ExFreePoolWithTag(v36, 0x20666E57u);
  }
  v37 = *(_QWORD *)(a2 + 2152);
  v10 = v37;
  if ( !v37 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v37);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v10 = v37;
  }
  v11 = Sid;
  v12 = !Sid && !a3;
  v34 = v12;
  v13 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 4 )
    {
      v14 = (volatile signed __int64 *)(*v9 + 16);
    }
    else
    {
      if ( (_DWORD)v5 != 5 )
      {
        v14 = (volatile signed __int64 *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
        goto LABEL_12;
      }
      v14 = (volatile signed __int64 *)(*v9 + 24);
    }
  }
  else
  {
    v14 = (volatile signed __int64 *)(*v9 + 8);
  }
  v34 = 1;
LABEL_12:
  v15 = (struct _EX_RUNDOWN_REF *)*v14;
  *(_QWORD *)&NumberOfBytes[1] = *v14;
  if ( v34 && v15 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v13 = 4;
          goto LABEL_49;
        case 2:
          v13 = RtlLengthSid(Sid);
          goto LABEL_49;
        case 3:
LABEL_49:
          NumberOfBytes[0] = v13;
          v34 = 0;
          goto LABEL_31;
      }
    }
    v13 = 0;
    goto LABEL_49;
  }
  NumberOfBytes[0] = 8;
  v20 = &v38;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, a3, v5, &v38, NumberOfBytes, &v34);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v20 = (__int64 *)PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(a2, a3, v5, (__int64 *)PoolWithTag, NumberOfBytes, &v34);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_17;
  if ( NumberOfBytes[0] )
    v11 = v20;
LABEL_31:
  if ( v34 && v15 )
  {
LABEL_14:
    v16 = ExAcquireRundownProtection(v15 + 1) == 0;
    goto LABEL_15;
  }
  v21 = *v9;
  v22 = (signed __int64 *)(*v9 + 8 * (3 * v5 + 4));
  v23 = (_QWORD **)(v21 + 8 * (3 * v5 + 5));
  v24 = KeAbPreAcquire((__int64)v22, 0LL);
  if ( _InterlockedCompareExchange64(v22, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v22, 0, v24, (__int64)v22);
  if ( v24 )
    *(_BYTE *)(v24 + 18) = 1;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v23, v11, NumberOfBytes[0]);
  v15 = ScopeInstance;
  if ( ScopeInstance )
  {
    v26 = ExAcquireRundownProtection(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22);
    KeAbPostRelease((ULONG_PTR)v22);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v22, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&NumberOfBytes[1], v5, v11, NumberOfBytes[0]);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_17;
    v28 = KeAbPreAcquire((__int64)v22, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v22, v28, (__int64)v22);
    if ( v29 )
      *(_BYTE *)(v29 + 18) = 1;
    v30 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v23, v11, NumberOfBytes[0]);
    v15 = v30;
    if ( !v30 )
    {
      v31 = *(_QWORD *)&NumberOfBytes[1];
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v32 = *v23;
      v33 = (_QWORD *)(v31 + 32);
      if ( (_QWORD **)(*v23)[1] != v23 )
        __fastfail(3u);
      *v33 = v32;
      v33[1] = v23;
      v32[1] = v33;
      *v23 = v33;
      if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v22);
      KeAbPostRelease((ULONG_PTR)v22);
      if ( v34 )
        _InterlockedCompareExchange64(v14, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v15 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_16;
    }
    v26 = ExAcquireRundownProtection(v30 + 1);
    if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    ExpWnfFreeScopeInstance(*(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1], 0);
  }
  v16 = v26 == 0;
LABEL_15:
  if ( !v16 )
  {
LABEL_16:
    CurrentScopeInstance = 0;
    *a1 = v15;
    goto LABEL_17;
  }
  CurrentScopeInstance = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
