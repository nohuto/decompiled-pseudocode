/*
 * XREFs of PpIrpQueryCapabilities @ 0x14072C1A0
 * Callers:
 *     IoGetDeviceProperty @ 0x1405DCC50 (IoGetDeviceProperty.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x14072C13C (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PiControlGetDevicePowerData @ 0x1408B0394 (PiControlGetDevicePowerData.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     IopSynchronousCall @ 0x14063A00C (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryCapabilities(struct _DEVICE_OBJECT *a1, _DWORD *a2)
{
  _QWORD v5[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  memset(v5, 0, 0x48uLL);
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  return IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, 0LL);
}
