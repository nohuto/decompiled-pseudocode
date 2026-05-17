/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CC0C0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
