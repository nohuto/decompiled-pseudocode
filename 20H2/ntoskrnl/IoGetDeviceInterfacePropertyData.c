/*
 * XREFs of IoGetDeviceInterfacePropertyData @ 0x1408A0DE0
 * Callers:
 *     <none>
 * Callees:
 *     PnpGetDeviceInterfacePropertyData @ 0x1408A5390 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoGetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PnpGetDeviceInterfacePropertyData(a1, a2, a3, a4);
}
