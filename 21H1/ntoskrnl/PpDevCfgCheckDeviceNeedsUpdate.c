/*
 * XREFs of PpDevCfgCheckDeviceNeedsUpdate @ 0x1408A6458
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     PiDevCfgFreeDeviceContext @ 0x140735338 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1407368A4 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A0AFC (PiDevCfgCheckDeviceNeedsUpdate.c)
 */

__int64 __fastcall PpDevCfgCheckDeviceNeedsUpdate(__int64 a1, __int64 a2, unsigned int *a3)
{
  int inited; // ebx
  _DWORD v8[20]; // [rsp+20h] [rbp-58h] BYREF

  memset(v8, 0, 0x48uLL);
  inited = PiDevCfgInitDeviceContext(a1, a2, v8);
  if ( inited >= 0 )
    inited = PiDevCfgCheckDeviceNeedsUpdate((__int64)v8, a3);
  PiDevCfgFreeDeviceContext((__int64)v8);
  return (unsigned int)inited;
}
