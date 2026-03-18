/*
 * XREFs of ??_GCEmptyRegionDrawListBrush@@UEAAPEAXI@Z @ 0x1800086E0
 * Callers:
 *     ?Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@PEAPEAV1@@Z @ 0x180008608 (-Create@CEmptyRegionDrawListBrush@@SAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@$$QEAV-$unique_ptr@VC.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180045CD0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z @ 0x180008760 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCEmptyRegionDrawListBrush@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CEmptyRegionDrawListBrush *__fastcall CEmptyRegionDrawListBrush::`scalar deleting destructor'(
        CEmptyRegionDrawListBrush *this,
        char a2)
{
  struct CEmptyRegionDrawListBrush *v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rdx
  struct CObjectCache *ObjectCache; // rax

  FastRegion::CRegion::FreeMemory((CEmptyRegionDrawListBrush *)((char *)this + 88));
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
    std::default_delete<CShape>::operator()(v4, v6);
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
    std::default_delete<CShape>::operator()(v4, v7);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xA0, v5);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
