/*
 * XREFs of _RtlUnlockBootStatusData@4 @ 0x4B350D40
 * Callers:
 *     <none>
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

NTSTATUS __cdecl RtlUnlockBootStatusData(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  _DWORD InputBuffer[4]; // [esp+0h] [ebp-10h] BYREF

  if ( !FileHandle )
  {
    InputBuffer[0] = 38;
    memset(&InputBuffer[1], 0, 12);
    return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x10u, 0, 0);
  }
  return result;
}
