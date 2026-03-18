/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0041A50
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C0038764 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v2 = a2;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2);
  DXGADAPTER::SetPowerComponentIdleCBInternal(DxgAdapter, v2, 2u);
}
