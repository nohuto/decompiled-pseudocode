/*
 * XREFs of VfHalVerifierInitialize @ 0x1409C96E8
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C3E50 (VfInitVerifierComponents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ViHalApplySettings @ 0x1409CBACC (ViHalApplySettings.c)
 */

__int64 VfHalVerifierInitialize()
{
  __int16 v1; // [rsp+30h] [rbp-28h]

  qword_140D47088 = 0LL;
  qword_140D47370 = 0LL;
  v1 = 16;
  ViAdapterList.Blink = &ViAdapterList;
  ViAdapterList.Flink = &ViAdapterList;
  qword_140D47368 = (__int64)&ViDomainCommonBufferList;
  ViDomainCommonBufferList = (__int64)&ViDomainCommonBufferList;
  pXdvExInitializeNPagedLookasideList(
    (int)&ViHalWaitBlockLookaside,
    0,
    (int)VfUtilFreePoolCheckIRQL,
    512,
    152LL,
    1449943368,
    v1,
    VfInitializedWithoutReboot,
    (__int64)ExInitializeNPagedLookasideListInternal);
  return ViHalApplySettings();
}
