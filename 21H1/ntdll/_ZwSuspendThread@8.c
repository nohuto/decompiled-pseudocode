/*
 * XREFs of _ZwSuspendThread@8 @ 0x4B2F4540
 * Callers:
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 *     _RtlRemoteCall@28 @ 0x4B366400 (_RtlRemoteCall@28.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  return Wow64SystemServiceCall();
}
