/*
 * XREFs of _EditionUpdateRemoteLights@0 @ 0xECA5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall EditionUpdateRemoteLights()
{
  NTSTATUS result; // eax

  result = _gfRemotingConsole;
  if ( _gfRemotingConsole )
    return ZwDeviceIoControlFile(ghConsoleShadowKeyboardChannel, 0, 0, 0, _giosbKbdControl, 0xB0008u, _gklp, 4u, 0, 0);
  return result;
}
