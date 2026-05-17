/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DC030
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
