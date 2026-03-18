/*
 * XREFs of EmClientQueryRuleState @ 0x140A47D40
 * Callers:
 *     HalpInterruptIsMsiSupported @ 0x1403D8A98 (HalpInterruptIsMsiSupported.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     PopDirectedDripsQueryEmPS4DisableSetting @ 0x14085894C (PopDirectedDripsQueryEmPS4DisableSetting.c)
 *     PopNotifyPolicyDevice @ 0x140858C40 (PopNotifyPolicyDevice.c)
 *     PopDirectedDripsQueryEmSettings @ 0x14098C234 (PopDirectedDripsQueryEmSettings.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     KeInitializeClock @ 0x140B27884 (KeInitializeClock.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140B30FEC (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopReadErrataDeviceAllowedForPowerButtonSuppression @ 0x140B5323C (PopReadErrataDeviceAllowedForPowerButtonSuppression.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     EmpSearchTargetRuleList @ 0x1402DCBD4 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1402DCBFC (EmpSearchRuleDatabase.c)
 *     EmpUpdateRuleState @ 0x1402DCC34 (EmpUpdateRuleState.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     EmpReleasePagingReference @ 0x140A47F30 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x140A47FAC (EmpAcquirePagingReference.c)
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
        ExfTryToWakePushLock(&EmpDatabaseLock);
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
