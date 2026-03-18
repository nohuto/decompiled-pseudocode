/*
 * XREFs of DxgkUnpinFrameBufferForSaveCB @ 0x1C0054CD0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C00151D0 (DpiGetDxgAdapter.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C02BE84C (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 */

__int64 __fastcall DxgkUnpinFrameBufferForSaveCB(__int64 a1, unsigned int *a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::UnpinFrameBufferForSave(DxgAdapter, *a2);
}
