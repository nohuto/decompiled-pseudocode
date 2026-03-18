/*
 * XREFs of ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x1800B0158
 * Callers:
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004A9C (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18005BA94 (-FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntr.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18008E754 (-clear@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0BA@$00Vliberal_expansion_polic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBuilder::Reset(CDrawListEntryBuilder *this)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rbp

  v1 = (_QWORD *)*((_QWORD *)this + 5);
  v3 = (_QWORD *)*((_QWORD *)this + 6);
  while ( v1 != v3 )
  {
    if ( *v1 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      *v1 = 0LL;
    }
    ++v1;
  }
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 5);
  *((_BYTE *)this + 4424) = 0;
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 32);
}
