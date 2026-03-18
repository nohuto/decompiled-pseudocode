/*
 * XREFs of ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800FD3BC
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D920 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18005DA84 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@M.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1800F44D0 (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 */

__int64 __fastcall CVisualSurface::GetExplicitRealizationSizeCVI(
        CVisualSurface *this,
        struct D2D_VECTOR_2F *a2,
        struct CCachedVisualImage **a3)
{
  struct CCachedVisualImage *v6; // rsi
  int v7; // eax
  unsigned int v8; // edi
  struct D2D_VECTOR_2F v9; // xmm0_8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCachedVisualImage *v12; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 200) )
  {
    wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
      &v12,
      **((_QWORD **)this + 14));
    v6 = v12;
    if ( *((_BYTE *)this + 201)
      || (v7 = CCachedVisualImage::UpdateFromVisualSurface(
                 (__int64 *)v12,
                 *((_QWORD *)this + 9),
                 (float *)this + 20,
                 (float *)this + 22,
                 (float *)this + 24,
                 *((_DWORD *)this + 26)),
          v8 = v7,
          v7 >= 0) )
    {
      v9 = (struct D2D_VECTOR_2F)*((_QWORD *)this + 12);
      v12 = 0LL;
      *a2 = v9;
      v8 = 0;
      *a3 = v6;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x163,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v12);
    return v8;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
