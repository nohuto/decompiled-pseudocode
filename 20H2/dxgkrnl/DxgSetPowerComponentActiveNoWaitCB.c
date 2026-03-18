/*
 * XREFs of DxgSetPowerComponentActiveNoWaitCB @ 0x1C00418A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00380E8 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 */

void __fastcall DxgSetPowerComponentActiveNoWaitCB(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  DXGADAPTER *DxgAdapter; // rax

  v2 = a2;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2);
  DXGADAPTER::SetPowerComponentActiveCBInternal(DxgAdapter, v2, 0, 0);
}
