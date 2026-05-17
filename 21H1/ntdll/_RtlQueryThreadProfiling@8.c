/*
 * XREFs of _RtlQueryThreadProfiling@8 @ 0x4B32CD00
 * Callers:
 *     <none>
 * Callees:
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 */

NTSTATUS __stdcall RtlQueryThreadProfiling(HANDLE ThreadHandle, PVOID ThreadInformation)
{
  return NtQueryInformationThread(ThreadHandle, (THREADINFOCLASS)32, ThreadInformation, 1u, 0);
}
