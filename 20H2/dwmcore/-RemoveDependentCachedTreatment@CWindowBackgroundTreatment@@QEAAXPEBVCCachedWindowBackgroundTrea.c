/*
 * XREFs of ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x1800133E0
 * Callers:
 *     ??1CCachedWindowBackgroundTreatment@@UEAA@XZ @ 0x180011ABC (--1CCachedWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180012FA0 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealiz.c)
 * Callees:
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

void __fastcall CWindowBackgroundTreatment::RemoveDependentCachedTreatment(
        CWindowBackgroundTreatment *this,
        const struct CCachedWindowBackgroundTreatment *a2)
{
  const struct CCachedWindowBackgroundTreatment **v2; // r8
  const struct CCachedWindowBackgroundTreatment **i; // rcx

  v2 = (const struct CCachedWindowBackgroundTreatment **)*((_QWORD *)this + 49);
  for ( i = (const struct CCachedWindowBackgroundTreatment **)*((_QWORD *)this + 48); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 49) -= 8LL;
  }
}
