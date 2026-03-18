/*
 * XREFs of DxgkUnpinFrameBufferForSaveCB @ 0x1C0041670
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0013B20 (DpiGetDxgAdapter.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C020BDE4 (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkUnpinFrameBufferForSaveCB(__int64 a1, unsigned int *a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, (__int64)a2);
  return DXGADAPTER::UnpinFrameBufferForSave(DxgAdapter, *a2);
}
