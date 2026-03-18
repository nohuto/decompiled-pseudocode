/*
 * XREFs of ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEAAPEAVIBitmapRealization@@XZ @ 0x180015430
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800150F0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800151CC (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015288 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x1800D9020 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@QEAA_NXZ @ 0x1801EDEB8 (-HasContent@CCompositionSurfaceBitmap@@QEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

struct IBitmapRealization *__fastcall CCompositionSurfaceBitmap::GetRenderingRealization(
        CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rcx
  struct IBitmapRealization *result; // rax

  v1 = *((_QWORD *)this + 12);
  result = 0LL;
  if ( v1 )
    return (struct IBitmapRealization *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  return result;
}
