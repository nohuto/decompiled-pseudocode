/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18009DA34
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009F1E0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 * Callees:
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18005F08C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009D34C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18009DAA8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18009DE78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(struct CDrawListEntry ***this, struct CDrawingContext *a2)
{
  CDrawListCache **v2; // rdi
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v9; // eax
  __int64 v10; // rcx

  v2 = (CDrawListCache **)(this + 286);
  if ( this[286] || (*v2 = 0LL, v5 = CDrawListCache::Create(v2), v7 = v5, v5 >= 0) )
  {
    CDrawListCache::Update(*v2, a2, this);
    v9 = CDrawingContext::EmitDrawListCache(a2, *v2);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x527u, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x523u, 0LL);
  }
  if ( *v2 )
    CDrawListCache::Invalidate(*v2);
  return v7;
}
