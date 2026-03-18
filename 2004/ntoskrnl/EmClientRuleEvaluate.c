/*
 * XREFs of EmClientRuleEvaluate @ 0x14098D350
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x14056F95C (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140711A90 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A70A28 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EmpSearchRuleDatabase @ 0x1402DCC2C (EmpSearchRuleDatabase.c)
 *     EmpSearchTargetRuleList @ 0x1402DCC64 (EmpSearchTargetRuleList.c)
 *     EmpEvaluateTargetRule @ 0x140371DF4 (EmpEvaluateTargetRule.c)
 *     EmpReleasePagingReference @ 0x14098C3C8 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x14098C444 (EmpAcquirePagingReference.c)
 */

__int64 __fastcall EmClientRuleEvaluate(_QWORD *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx

  v4 = 0;
  if ( a1 && a2 && a4 && a3 )
  {
    *a4 = 1;
    if ( EmpAcquirePagingReference() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
      v9 = EmpSearchRuleDatabase(a1);
      if ( v9 && (v10 = EmpSearchTargetRuleList((__int64)v9)) != 0LL )
      {
        if ( a3 == *(_DWORD *)(v11 + 48) )
          *a4 = EmpEvaluateTargetRule((__int64)v10, a2, a3);
        else
          v4 = -1073741811;
      }
      else
      {
        v4 = -1073741275;
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
  return v4;
}
