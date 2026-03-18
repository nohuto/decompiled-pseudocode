/*
 * XREFs of InitRotationManager @ 0x1C012A110
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C006165C (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 InitRotationManager()
{
  _DWORD *PoolWithTag; // rax
  int v2; // [rsp+30h] [rbp-18h]

  wil_details_FeatureReporting_ReportUsageToService(
    (int)&Feature_BrokeredDisplays_RotMgr__private_reporting,
    0x7BE415u,
    0,
    0,
    (__int64)&Feature_AtomicCheckFailure_logged_traits,
    0,
    v2);
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
