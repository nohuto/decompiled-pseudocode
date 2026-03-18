/*
 * XREFs of ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1802A5A90
 * Callers:
 *     ?GetMPORects@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18010C570 (-GetMPORects@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 * Callees:
 *     ?GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18000CFD4 (-GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetMPORects(__int64 a1, __int64 a2, float *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r9

  if ( (*(_DWORD *)(a1 - 280) & 0x4000) != 0 )
    return CBitmapRealization::GetMPORects((CBitmapRealization *)(a1 - 512), a2, a3, (_OWORD *)a4, (_OWORD *)a5);
  *a3 = (float)*(int *)(a1 - 364);
  a3[1] = (float)*(int *)(a1 - 360);
  a3[2] = (float)*(int *)(a1 - 356);
  a3[3] = (float)*(int *)(a1 - 352);
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(float *)(a4 + 8) = (float)*(int *)(a1 - 304);
  *(float *)(a4 + 12) = (float)*(int *)(a1 - 300);
  *(float *)a5 = (float)*(int *)(a1 - 296);
  *(float *)(a5 + 4) = (float)*(int *)(a1 - 292);
  *(float *)(a5 + 8) = (float)*(int *)(a1 - 288);
  *(float *)(a5 + 12) = (float)*(int *)(a1 - 284);
  CMILMatrix::Transform2DBoundsHelper<0>(a2, a4, (float *)a4, a4);
  return CMILMatrix::Transform2DBoundsHelper<0>(a2, a5, (float *)a5, v7);
}
