/*
 * XREFs of _RtlQueryThreadProfiling@8 @ 0x4B32CD00
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return NtQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0);
}
