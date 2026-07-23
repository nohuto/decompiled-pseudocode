/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CC040
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009DAA0 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0LL);
}
