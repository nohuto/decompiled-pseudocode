/*
 * XREFs of _AlpcUnregisterCompletionList@4 @ 0x4B33ED70
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

NTSTATUS __cdecl AlpcUnregisterCompletionList(HANDLE PortHandle)
{
  return NtAlpcSetInformation(PortHandle, AlpcUnregisterCompletionListInformation, 0, 0);
}
