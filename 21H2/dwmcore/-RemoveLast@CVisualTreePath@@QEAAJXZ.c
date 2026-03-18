/*
 * XREFs of ?RemoveLast@CVisualTreePath@@QEAAJXZ @ 0x1801B5F90
 * Callers:
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004ADE0 (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180064698 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 */

__int64 __fastcall CVisualTreePath::RemoveLast(CVisualTreePath *this)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( ((*((_QWORD *)this + 1) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  else
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this,
      (*((_QWORD *)this + 1) - 16LL - *(_QWORD *)this) >> 4,
      1LL);
    return 0LL;
  }
}
