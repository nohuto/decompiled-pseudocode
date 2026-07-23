/*
 * XREFs of _AlpcRundownCompletionList@4 @ 0x4B33ED50
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

NTSTATUS __cdecl AlpcRundownCompletionList(HANDLE PortHandle)
{
  return NtAlpcSetInformation(PortHandle, AlpcCompletionListRundownInformation, 0, 0);
}
