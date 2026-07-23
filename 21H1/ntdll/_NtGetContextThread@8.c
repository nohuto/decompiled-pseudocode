/*
 * XREFs of _NtGetContextThread@8 @ 0x4B2F38A0
 * Callers:
 *     _RtlRemoteCall@28 @ 0x4B366400 (_RtlRemoteCall@28.c)
 *     PsspDumpThread @ 0x4B38883C (PsspDumpThread.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  return Wow64SystemServiceCall();
}
