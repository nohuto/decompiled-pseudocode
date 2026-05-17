/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DC180
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009DAE0 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
