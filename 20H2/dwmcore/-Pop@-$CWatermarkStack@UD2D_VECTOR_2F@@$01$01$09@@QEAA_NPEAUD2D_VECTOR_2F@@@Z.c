/*
 * XREFs of ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180177500
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800936C0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801990BC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18019917C (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(int *a1)
{
  int v1; // eax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = v1 - 1;
    LOBYTE(v1) = 1;
  }
  return v1;
}
