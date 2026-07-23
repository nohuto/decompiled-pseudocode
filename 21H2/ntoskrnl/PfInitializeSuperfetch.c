/*
 * XREFs of PfInitializeSuperfetch @ 0x140A6B76C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140267780 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1402F6750 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x1403FC8C0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1407C02EC (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1407C055C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x140A6B864 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x140A6BA00 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x140A6BCA4 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140C50398);
  PfpScenCtxInitialize((__int64)&qword_140C50320);
  PfpScenCtxStart((__int64)&qword_140C50320);
  ExInitializePushLock(&stru_140C50440);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_140C50440);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_140C50440);
  qword_140C50448 = 0LL;
  qword_140C50450 = 0LL;
  dword_140C50468 |= 1u;
  qword_140C50460 = (__int64)&qword_140C50458;
  qword_140C50458 = (__int64)&qword_140C50458;
  PfSnInitializePrefetcher();
  PfTInitialize(&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140C50140, 4u, 1u);
  return 0LL;
}
