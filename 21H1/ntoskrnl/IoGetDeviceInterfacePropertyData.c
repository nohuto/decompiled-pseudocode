/*
 * XREFs of IoGetDeviceInterfacePropertyData @ 0x140899F90
 * Callers:
 *     <none>
 * Callees:
 *     PnpGetDeviceInterfacePropertyData @ 0x14089E540 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoGetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PnpGetDeviceInterfacePropertyData(a1, a2, a3, a4);
}
