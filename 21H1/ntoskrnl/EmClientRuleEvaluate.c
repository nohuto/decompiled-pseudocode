/*
 * XREFs of EmClientRuleEvaluate @ 0x14098C350
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x14056F30C (PopPepInitializeVetoMasks.c)
 *     PoRegisterPowerSettingCallback @ 0x140711220 (PoRegisterPowerSettingCallback.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140A6FDD0 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EmpSearchRuleDatabase @ 0x14035D494 (EmpSearchRuleDatabase.c)
 *     EmpSearchTargetRuleList @ 0x14035D4CC (EmpSearchTargetRuleList.c)
 *     EmpEvaluateTargetRule @ 0x140370FE8 (EmpEvaluateTargetRule.c)
 *     EmpReleasePagingReference @ 0x14098C1D8 (EmpReleasePagingReference.c)
 *     EmpAcquirePagingReference @ 0x14098C254 (EmpAcquirePagingReference.c)
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
  return v4;
}
