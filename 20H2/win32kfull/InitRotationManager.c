/*
 * XREFs of InitRotationManager @ 0x1C012C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C015AB04 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 */

__int64 InitRotationManager()
{
  _DWORD *PoolWithTag; // rax

  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_BrokeredDisplays_RotMgr__private_reporting,
    8119317LL,
    0LL,
    0LL,
    &Feature_AtomicCheckFailure_logged_traits,
    0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6D747255u);
  if ( PoolWithTag )
  {
    PoolWithTag[3] = 0;
    PoolWithTag[2] = 0;
    *(_QWORD *)PoolWithTag = &CLegacyRotationMgr::`vftable';
  }
  P = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000017 : 0;
}
