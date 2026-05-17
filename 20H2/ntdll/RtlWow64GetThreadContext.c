/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800DC3D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
