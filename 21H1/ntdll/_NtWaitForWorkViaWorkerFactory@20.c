/*
 * XREFs of _NtWaitForWorkViaWorkerFactory@20 @ 0x4B2F46B0
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWaitForWorkViaWorkerFactory(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
