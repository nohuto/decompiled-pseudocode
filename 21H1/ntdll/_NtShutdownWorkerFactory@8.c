/*
 * XREFs of _NtShutdownWorkerFactory@8 @ 0x4B2F44D0
 * Callers:
 *     _TpReleasePool@4 @ 0x4B2AAE00 (_TpReleasePool@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtShutdownWorkerFactory(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
