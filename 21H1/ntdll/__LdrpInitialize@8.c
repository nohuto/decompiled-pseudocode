/*
 * XREFs of __LdrpInitialize@8 @ 0x4B2E6327
 * Callers:
 *     _LdrpInitialize@8 @ 0x4B2E62EF (_LdrpInitialize@8.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpProcessInitializationComplete@0 @ 0x4B2E645A (_LdrpProcessInitializationComplete@0.c)
 *     _RtlInitializeHeapGC@4 @ 0x4B2E648E (_RtlInitializeHeapGC@4.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _NtTestAlert@0 @ 0x4B2F4580 (_NtTestAlert@0.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpForkProcess@0 @ 0x4B331A83 (_LdrpForkProcess@0.c)
 *     _LdrpInitializationFailure@4 @ 0x4B331C4E (_LdrpInitializationFailure@4.c)
 *     _LdrpInitializeProcessWrapperFilter@8 @ 0x4B332F56 (_LdrpInitializeProcessWrapperFilter@8.c)
 *     _LdrpTouchThreadStack@4 @ 0x4B333A93 (_LdrpTouchThreadStack@4.c)
 *     _LdrInitializeMrdata@0 @ 0x4B334E89 (_LdrInitializeMrdata@0.c)
 */

NTSTATUS __fastcall _LdrpInitialize(_DWORD *a1, int a2)
{
  struct _TEB *v2; // ebx
  NTSTATUS v3; // esi
  NTSTATUS result; // eax
  _PEB *ProcessEnvironmentBlock; // edi
  NTSTATUS v6; // ecx
  char v7; // al
  NTSTATUS v8; // eax
  char v9; // cl
  LARGE_INTEGER DelayInterval; // [esp+10h] [ebp-40h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [esp+18h] [ebp-38h]
  $D863D27743E5E2ED943C6432D815D276 *v12; // [esp+1Ch] [ebp-34h]
  struct _TEB *v13; // [esp+20h] [ebp-30h]
  int v14; // [esp+28h] [ebp-28h]
  int v15; // [esp+2Ch] [ebp-24h]
  _DWORD *v16; // [esp+30h] [ebp-20h]
  NTSTATUS v17; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v14 = a2;
  v16 = a1;
  v2 = NtCurrentTeb();
  v13 = v2;
  v3 = 0;
  v15 = 0;
LABEL_2:
  result = _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 0);
  if ( result == 1 && (v2->SameTebFlags & 0x2000) == 0 )
    goto LABEL_34;
  while ( 1 )
  {
    ProcessEnvironmentBlock = v2->ProcessEnvironmentBlock;
    if ( !result )
      break;
    v17 = 0;
    if ( LdrpDelegatedNtdllBase )
      return result;
    if ( !ProcessEnvironmentBlock->InheritedAddressSpace )
      goto LABEL_7;
    v3 = 0;
    LdrpInitCompleteEvent = 0;
    if ( _InterlockedCompareExchange(&LdrpProcessInitialized, 1, 2) == 2 )
    {
      if ( ProcessEnvironmentBlock->InheritedAddressSpace )
      {
        result = LdrpForkProcess();
        v3 = result;
        if ( result < 0 )
        {
LABEL_7:
          if ( (v2->SameTebFlags & 0x40) == 0 )
          {
            if ( LdrpForkInProgress )
            {
              RtlAcquireSRWLockShared(&LdrpForkActiveLock);
              while ( LdrpForkInProgress )
                RtlSleepConditionVariableSRW(&LdrpForkConditionVariable, &LdrpForkActiveLock, 0, 1u);
              RtlReleaseSRWLockShared(&LdrpForkActiveLock);
            }
            result = LdrpInitializeThread(v16);
          }
          goto LABEL_10;
        }
      }
      else
      {
        v3 = v17;
      }
      result = LdrpProcessInitializationComplete();
      goto LABEL_7;
    }
LABEL_34:
    if ( !LdrpInitCompleteEvent )
      goto LABEL_41;
    v6 = ZwWaitForSingleObject(LdrpInitCompleteEvent, 0, 0);
    if ( v6 < 0 )
    {
      v7 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          1540,
          "_LdrpInitialize",
          1,
          "NtWaitForSingleObject failed with status 0x%08lx, fallback to delay loop\n",
          v6);
        v7 = ShowSnaps;
      }
      if ( (v7 & 0x40) != 0 )
        __debugbreak();
LABEL_41:
      DelayInterval.QuadPart = -300000LL;
      while ( LdrpProcessInitialized == 1 )
      {
        v8 = ZwDelayExecution(0, &DelayInterval);
        if ( v8 < 0 )
        {
          v9 = ShowSnaps;
          if ( (ShowSnaps & 3) != 0 )
          {
            LdrpLogDbgPrint(
              "minkernel\\ntdll\\ldrinit.c",
              1557,
              "_LdrpInitialize",
              1,
              "Delaying execution failed with status 0x%08lx\n",
              v8);
            v9 = ShowSnaps;
          }
          if ( (v9 & 0x40) != 0 )
            __debugbreak();
        }
      }
      goto LABEL_2;
    }
    result = LdrpProcessInitialized;
  }
  NtCreateEvent(&LdrpInitCompleteEvent, 0x1F0003u, 0, NotificationEvent, 0);
  v2->SameTebFlags |= 0x20u;
  ProcessEnvironmentBlock->LoaderLock = &LdrpLoaderLock;
  LdrInitState = 0;
  v12 = &ProcessEnvironmentBlock->40;
  _interlockedbittestandset((volatile signed __int32 *)&ProcessEnvironmentBlock->40, 1u);
  v3 = LdrInitializeMrdata();
  if ( v3 >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    ProcessParameters = ProcessEnvironmentBlock->ProcessParameters;
    if ( (ProcessParameters->Flags & 0x80000000) != 0 )
    {
      LdrpIsSecureProcess = 1;
      LdrpDetourExist = 1;
    }
    result = LdrpInitializeProcess(v16, v14);
    v3 = result;
    v17 = result;
    if ( result < 0 )
    {
      result = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          1656,
          "_LdrpInitialize",
          0,
          "Process initialization failed with status 0x%08lx\n",
          v3);
        result = ShowSnaps;
      }
      if ( (result & 0x10) != 0 )
        __debugbreak();
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      if ( LdrpDelegatedNtdllBase )
      {
        ms_exc.registration.TryLevel = -2;
        return result;
      }
      LdrpLogDllState(*(_DWORD *)(LdrpImageEntry + 24), LdrpImageEntry + 36, 5294);
      if ( ProcessEnvironmentBlock->MinimumStackCommit )
      {
        v3 = LdrpTouchThreadStack();
        v17 = v3;
      }
      ms_exc.registration.TryLevel = -2;
      LdrInitState = 3;
      _interlockedbittestandreset((volatile signed __int32 *)v12, 1u);
      RtlInitializeHeapGC(LdrpThreadPool);
      if ( v3 < 0 )
        goto LABEL_57;
      result = LdrpProcessInitializationComplete();
    }
  }
  else
  {
    result = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        1632,
        "_LdrpInitialize",
        0,
        "LDR:MRDATA: Process initialization failed with status 0x%08lx\n",
        v3);
      result = ShowSnaps;
    }
    if ( (result & 0x10) != 0 )
      __debugbreak();
  }
LABEL_10:
  if ( v3 >= 0 )
  {
    if ( (v2->SameTebFlags & 0x2000) == 0 )
      return NtTestAlert();
    return result;
  }
LABEL_57:
  LdrpInitializationFailure(v3);
  result = ZwTerminateProcess((HANDLE)0xFFFFFFFF, v3);
  if ( !v15 )
    RtlRaiseStatus(v3);
  return result;
}
