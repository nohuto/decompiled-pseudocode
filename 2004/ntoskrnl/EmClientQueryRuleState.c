/*
 * XREFs of EmClientQueryRuleState @ 0x14098C2E0
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1403C6578 (HalpInterruptIsMsiSupported.c)
 *     PopFilterCapabilities @ 0x1406A528C (PopFilterCapabilities.c)
 *     PoInitHiberServices @ 0x140783B18 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x1407B9590 (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopDirectedDripsQueryEmSettings @ 0x1408E0120 (PopDirectedDripsQueryEmSettings.c)
 *     KeInitializeClock @ 0x140A428AC (KeInitializeClock.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140A70B74 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopReadErrataDisablePrimaryDeviceFastResume @ 0x140A70F20 (PopReadErrataDisablePrimaryDeviceFastResume.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140A71258 (PopReadErrataForIncorrectLidNotification.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140A71278 (PopEvaluateInputSuppressionRequired.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EmpSearchRuleDatabase @ 0x1402DCC2C (EmpSearchRuleDatabase.c)
 *     EmpSearchTargetRuleList @ 0x1402DCC64 (EmpSearchTargetRuleList.c)
 *     EmpUpdateRuleState @ 0x1402DCC8C (EmpUpdateRuleState.c)
 *     EmpReleasePagingReference @ 0x14098C3C8 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x14098C444 (EmpAcquirePagingReference.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbp

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v5 = EmpSearchRuleDatabase(a1);
      v6 = v5;
      if ( v5 && (v7 = (volatile signed __int32 *)EmpSearchTargetRuleList((__int64)v5), (v9 = v7) != 0LL) )
      {
        _InterlockedIncrement(v7);
        EmpUpdateRuleState(v8, 0LL);
        _InterlockedAdd(v9, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v6 + 4);
      }
      else
      {
        v2 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
      KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
      EmpReleasePagingReference();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
