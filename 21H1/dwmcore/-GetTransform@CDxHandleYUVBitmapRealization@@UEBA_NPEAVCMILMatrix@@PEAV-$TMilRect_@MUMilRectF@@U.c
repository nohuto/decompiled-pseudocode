/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180266C80
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0840 (-GetTransform@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@M.c)
 *     ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x180266D00 (-GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18001664C (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransform(__int64 a1, struct CMILMatrix *a2, __int64 a3)
{
  char result; // al
  struct D2D_SIZE_U v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(struct D2D_SIZE_U *)(a1 - 244);
  result = CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 432), &v6, a2);
  if ( a3 )
  {
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    *(float *)(a3 + 8) = (float)*(int *)(a1 - 244);
    *(float *)(a3 + 12) = (float)*(int *)(a1 - 240);
  }
  return result;
}
