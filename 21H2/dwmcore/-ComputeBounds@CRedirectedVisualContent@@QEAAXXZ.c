/*
 * XREFs of ?ComputeBounds@CRedirectedVisualContent@@QEAAXXZ @ 0x1800DB524
 * Callers:
 *     ?GetContentBounds@CRedirectVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DB4C0 (-GetContentBounds@CRedirectVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRedirectedVisualContent::ComputeBounds(CRedirectedVisualContent *this)
{
  __int64 v2; // rax
  __int64 v3; // xmm1_8

  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 208LL))(*((_QWORD *)this + 9)) < 0 )
  {
    *((_OWORD *)this + 5) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v3 = qword_1803467E8;
  }
  else
  {
    v2 = *((_QWORD *)this + 9);
    *((_OWORD *)this + 5) = *(_OWORD *)(v2 + 64);
    v3 = *(_QWORD *)(v2 + 80);
  }
  *((_QWORD *)this + 12) = v3;
}
