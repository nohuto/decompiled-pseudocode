/*
 * XREFs of ?MxHasEnoughRemainingThreadStack@Mx@@SAEXZ @ 0x1C001AC40
 * Callers:
 *     ?PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001A2D8 (-PnpQueryCapabilities@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Mx::MxHasEnoughRemainingThreadStack()
{
  unsigned __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  IoGetStackLimits(&v2, &v1);
  return (unsigned __int64)&v1 - v2 >= 0x3000;
}
