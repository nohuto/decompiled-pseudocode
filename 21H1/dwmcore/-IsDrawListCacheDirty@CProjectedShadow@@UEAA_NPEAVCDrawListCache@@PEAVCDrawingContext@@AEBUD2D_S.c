/*
 * XREFs of ?IsDrawListCacheDirty@CProjectedShadow@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1801E7B30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x180045F60 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?IsDrawListCachDirtyFromShadowAsset@@YA_NAEBV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x1801E7A84 (-IsDrawListCachDirtyFromShadowAsset@@YA_NAEBV-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_p.c)
 */

char __fastcall CProjectedShadow::IsDrawListCacheDirty(
        CProjectedShadow *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        const struct D2D_SIZE_F *a4,
        const struct CMILMatrix *a5)
{
  int v5; // eax
  char v6; // bl
  unsigned __int64 v7; // rdi
  struct IRenderTargetBitmap **v12; // rcx
  __int64 *v13; // rcx

  v5 = *((_DWORD *)this + 80);
  v6 = 0;
  v7 = *((_QWORD *)a2 + 3);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v13 = (__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate;
    }
    else
    {
      if ( v5 == 2 )
      {
        if ( IsDrawListCachDirtyFromShadowAsset((__int64 *)&CProjectedShadow::s_cpHalfBlurAsset, v7) )
          return 1;
        v12 = &CProjectedShadow::s_cp1xBlurAsset;
      }
      else
      {
        if ( v5 == 3 )
        {
          if ( IsDrawListCachDirtyFromShadowAsset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset, v7) )
            return 1;
        }
        else if ( (unsigned int)(v5 - 4) > 1 )
        {
          goto LABEL_10;
        }
        v12 = &CProjectedShadow::s_cp2xBlurAsset;
      }
      if ( IsDrawListCachDirtyFromShadowAsset((__int64 *)v12, v7) )
        return 1;
      v13 = &CProjectedShadow::s_cpMaskForBlur;
    }
  }
  else
  {
    v13 = (__int64 *)((char *)this + 360);
  }
  if ( IsDrawListCachDirtyFromShadowAsset(v13, v7) )
    return 1;
LABEL_10:
  if ( CContent::IsDrawListCacheDirty(this, a2, a3, a4, a5) )
    return 1;
  return v6;
}
