/*
 * XREFs of IoSetDeviceInterfacePropertyData @ 0x14076B2C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSetDeviceInterfacePropertyData @ 0x14076B308 (PnpSetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoSetDeviceInterfacePropertyData(__int64 a1, __int64 a2, __int64 a3)
{
  return PnpSetDeviceInterfacePropertyData(a1, a2, a3);
}
