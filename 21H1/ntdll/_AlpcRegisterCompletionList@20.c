/*
 * XREFs of _AlpcRegisterCompletionList@20 @ 0x4B33EC90
 * Callers:
 *     <none>
 * Callees:
 *     _NtAlpcSetInformation@16 @ 0x4B2F3250 (_NtAlpcSetInformation@16.c)
 */

NTSTATUS __cdecl AlpcRegisterCompletionList(
        HANDLE PortHandle,
        PALPC_COMPLETION_LIST_HEADER Buffer,
        ULONG Size,
        ULONG ConcurrencyCount,
        ULONG AttributeFlags)
{
  NTSTATUS result; // eax
  _DWORD PortInformation[4]; // [esp+4h] [ebp-10h] BYREF

  PortInformation[1] = Size;
  PortInformation[2] = ConcurrencyCount;
  PortInformation[3] = AttributeFlags;
  PortInformation[0] = Buffer;
  result = NtAlpcSetInformation(PortHandle, AlpcRegisterCompletionListInformation, PortInformation, 0x10u);
  if ( result >= 0 )
  {
    *(&Buffer->PostCount + 16) = 0;
    return 0;
  }
  return result;
}
