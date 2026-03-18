/*
 * XREFs of CmpRecordRegistryLockAcquire @ 0x1402ACA70
 * Callers:
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     CmpThreadInfoLogStack @ 0x14053E958 (CmpThreadInfoLogStack.c)
 */

__int64 CmpRecordRegistryLockAcquire()
{
  __int64 result; // rax

  wil_details_FeatureReporting_ReportUsageToService(
    (unsigned int)&Feature_AccessRegistryLockAcquireCount__private_reporting,
    29919768,
    0,
    0,
    (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
    1);
  result = *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex;
  if ( !result )
    return CmpThreadInfoLogStack();
  ++*(_DWORD *)(result + 8);
  return result;
}
