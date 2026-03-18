/*
 * XREFs of DxgSetPowerComponentIdleForceAsyncCBInternal @ 0x1C0040B30
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x1C00379D4 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 */

void __fastcall DxgSetPowerComponentIdleForceAsyncCBInternal(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v2 = a2;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2);
  DXGADAPTER::SetPowerComponentIdleCBInternal(DxgAdapter, v2, 2u);
}
