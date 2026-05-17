/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800DC5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlWow64SetThreadContext()
{
  return NtSetInformationThread();
}
