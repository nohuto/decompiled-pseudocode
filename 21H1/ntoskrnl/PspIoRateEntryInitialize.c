/*
 * XREFs of PspIoRateEntryInitialize @ 0x14065BBF8
 * Callers:
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     PspSetJobIoRateControlForVolume @ 0x140904D74 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402C0830 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x1402D44C0 (ExRundownCompleted.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403560A0 (ExWaitForRundownProtectionRelease.c)
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
