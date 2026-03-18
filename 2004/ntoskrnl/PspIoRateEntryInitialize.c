/*
 * XREFs of PspIoRateEntryInitialize @ 0x140657408
 * Callers:
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140906054 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x140267800 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x14027BE20 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 */

void __fastcall PspIoRateEntryInitialize(__int64 a1)
{
  struct _EX_RUNDOWN_REF *v1; // rbx

  v1 = (struct _EX_RUNDOWN_REF *)(a1 + 32);
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 32));
  ExWaitForRundownProtectionRelease(v1);
  ExRundownCompleted(v1);
  *(_QWORD *)(a1 + 16) = -1LL;
}
