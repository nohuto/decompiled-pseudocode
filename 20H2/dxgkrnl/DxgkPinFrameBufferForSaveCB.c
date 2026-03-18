/*
 * XREFs of DxgkPinFrameBufferForSaveCB @ 0x1C0042220
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z @ 0x1C020CFD0 (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KPEAPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DxgkPinFrameBufferForSaveCB(__int64 a1, __int64 a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1, a2);
  return DXGADAPTER::PinFrameBufferForSave(DxgAdapter, *(_DWORD *)a2, *(_QWORD *)(a2 + 8), (struct _MDL **)(a2 + 16));
}
