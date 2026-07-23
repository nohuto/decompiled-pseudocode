/*
 * XREFs of _RtlCreateRegistryKey@8 @ 0x4B351130
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

NTSTATUS __cdecl RtlCreateRegistryKey(ULONG RelativeTo, PWSTR Path)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [esp+0h] [ebp-4h] BYREF

  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &Handle);
  if ( result >= 0 )
  {
    if ( (RelativeTo & 0x40000000) == 0 )
      NtClose(Handle);
    return 0;
  }
  return result;
}
