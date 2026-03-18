/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801AD730
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A8E00 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x1800AA1FC (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

bool __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // r10
  bool result; // al

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  result = 0;
  if ( BspPolygonList )
    return *(_DWORD *)(BspPolygonList + 24) != 0;
  return result;
}
