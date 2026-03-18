/*
 * XREFs of PfInitializeSuperfetch @ 0x140A6D32C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExRundownCompleted @ 0x14023D900 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402D5F70 (ExWaitForRundownProtectionRelease.c)
 *     ExInitializePushLock @ 0x1402D6A50 (ExInitializePushLock.c)
 *     ZwNotifyChangeKey @ 0x1403FA4B0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1407BA93C (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1407BB9CC (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1407BBC3C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A6D424 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A6D5C0 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A6D864 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C501D8);
  PfpScenCtxInitialize((__int64)&qword_140C50160);
  PfpScenCtxStart((__int64)&qword_140C50160);
  ExInitializePushLock(&RunRef);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&RunRef);
  ExRundownCompleted((PEX_RUNDOWN_REF)&RunRef);
  qword_140C50288 = 0LL;
  qword_140C50290 = 0LL;
  dword_140C502A8 |= 1u;
  qword_140C502A0 = (__int64)&qword_140C50298;
  qword_140C50298 = (__int64)&qword_140C50298;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C4FF80, 4u, 1u);
  return 0LL;
}
