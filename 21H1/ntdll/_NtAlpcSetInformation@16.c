/*
 * XREFs of _NtAlpcSetInformation@16 @ 0x4B2F3250
 * Callers:
 *     _TppFastAlpcAdjustConcurrencyCount@4 @ 0x4B2B7189 (_TppFastAlpcAdjustConcurrencyCount@4.c)
 *     _TppAllocAlpcCompletion@24 @ 0x4B2E9A8F (_TppAllocAlpcCompletion@24.c)
 *     _AlpcAdjustCompletionListConcurrencyCount@8 @ 0x4B33E980 (_AlpcAdjustCompletionListConcurrencyCount@8.c)
 *     _AlpcRegisterCompletionList@20 @ 0x4B33EC90 (_AlpcRegisterCompletionList@20.c)
 *     _AlpcRundownCompletionList@4 @ 0x4B33ED50 (_AlpcRundownCompletionList@4.c)
 *     _AlpcUnregisterCompletionList@4 @ 0x4B33ED70 (_AlpcUnregisterCompletionList@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  return Wow64SystemServiceCall();
}
