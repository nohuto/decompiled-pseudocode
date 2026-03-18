/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180004C88
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004A9C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18008A630 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AF4F4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800AF97C (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(CDrawListEntryBuilder *this, struct CDrawingContext *a2)
{
  CDrawListCache **v2; // rdi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // ecx

  v2 = (CDrawListCache **)((char *)this + 4416);
  if ( *((_QWORD *)this + 552) || (*v2 = 0LL, v9 = CDrawListCache::Create(v2), v7 = v9, v9 >= 0) )
  {
    CDrawListCache::Update(*v2, a2, this);
    v5 = CDrawingContext::EmitDrawListCache(a2, *v2);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x49Cu, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x498u, 0LL);
  }
  if ( *v2 )
    CDrawListCache::Invalidate(*v2);
  return v7;
}
