/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CBEE0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
