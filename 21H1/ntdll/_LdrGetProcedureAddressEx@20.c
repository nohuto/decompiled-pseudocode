/*
 * XREFs of _LdrGetProcedureAddressEx@20 @ 0x4B2A6AE0
 * Callers:
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 * Callees:
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressEx(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags)
{
  PVOID *retaddr; // [esp+4h] [ebp+4h]

  return LdrGetProcedureAddressForCaller(DllHandle, ProcedureName, ProcedureNumber, ProcedureAddress, Flags, retaddr);
}
