/*
 * XREFs of _ZwSetContextThread@8 @ 0x4B2F4230
 * Callers:
 *     _RtlRemoteCall@28 @ 0x4B366400 (_RtlRemoteCall@28.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  return Wow64SystemServiceCall();
}
