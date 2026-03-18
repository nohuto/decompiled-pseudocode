/*
 * XREFs of PnpIrpDeviceEnumerated @ 0x1402D2524
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpDeviceEnumerated(int a1)
{
  _WORD v3[36]; // [rsp+30h] [rbp-58h] BYREF

  memset(v3, 0, sizeof(v3));
  v3[0] = 6427;
  return IopSynchronousCall(a1, (unsigned int)v3, -1073741637, 0, 0LL);
}
