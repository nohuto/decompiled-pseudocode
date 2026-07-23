/*
 * XREFs of _ZwOpenProcess@16 @ 0x4B2F2BE0
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2 (_RtlpChangeQueryDebugBufferTarget@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwOpenProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  return Wow64SystemServiceCall();
}
