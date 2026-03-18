/*
 * XREFs of PfInitializeSuperfetch @ 0x140A6605C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x1403F58E0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1407AC9FC (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1407ADA8C (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1407ADCFC (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A66154 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A662F0 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A66594 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C50158);
  PfpScenCtxInitialize((__int64)&qword_140C500E0);
  PfpScenCtxStart((__int64)&qword_140C500E0);
  ExInitializePushLock(&stru_140C50200);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50200);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50200);
  qword_140C50208 = 0LL;
  qword_140C50210 = 0LL;
  dword_140C50228 |= 1u;
  qword_140C50220 = (__int64)&qword_140C50218;
  qword_140C50218 = (__int64)&qword_140C50218;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C4FF00, 4u, 1u);
  return 0LL;
}
