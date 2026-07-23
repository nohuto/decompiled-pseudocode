/*
 * XREFs of _ZwSetInformationProcess@16 @ 0x4B2F2B40
 * Callers:
 *     _LdrpHandleTlsData@4 @ 0x4B2D0CD1 (_LdrpHandleTlsData@4.c)
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _RtlCreateUserStack@24 @ 0x4B2F2050 (_RtlCreateUserStack@24.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _AVrfpEnableHandleVerifier@0 @ 0x4B338DD3 (_AVrfpEnableHandleVerifier@0.c)
 *     _WerpSetProcessFaultInformation@12 @ 0x4B33B2F4 (_WerpSetProcessFaultInformation@12.c)
 *     _RtlSetProcessIsCritical @ 0x4B362FD0 (_RtlSetProcessIsCritical.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  return Wow64SystemServiceCall();
}
