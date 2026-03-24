/*
 * XREFs of ?IsDrawListCacheDirty@CCompositionSurfaceBitmap@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x1800137F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013BB8 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18006AC90 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

bool __fastcall CCompositionSurfaceBitmap::IsDrawListCacheDirty(
        CCompositionSurfaceBitmap *this,
        struct CDrawListCache *a2,
        struct CDrawingContext *a3,
        struct D2D_SIZE_F *a4)
{
  char v8; // al
  _BYTE v10[64]; // [rsp+30h] [rbp-88h] BYREF
  int v11; // [rsp+70h] [rbp-48h]
  __int128 v12; // [rsp+80h] [rbp-38h]

  v11 = 0;
  v12 = 0LL;
  v8 = CCompositionSurfaceBitmap::CalcImageTransform(this, a4, (CMILMatrix *)v10);
  return CContent::IsDrawListCacheDirty(
           this,
           a2,
           a3,
           a4,
           (const struct CMILMatrix *)((unsigned __int64)v10 & -(__int64)(v8 != 0)));
}
