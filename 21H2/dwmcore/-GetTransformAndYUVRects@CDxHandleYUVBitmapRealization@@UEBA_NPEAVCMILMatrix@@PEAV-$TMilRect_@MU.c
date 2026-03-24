/*
 * XREFs of ?GetTransformAndYUVRects@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x180266160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransformAndYUVRects(
        __int64 a1,
        struct CMILMatrix *a2,
        float *a3,
        __int64 a4,
        float *a5)
{
  *a3 = (float)*(int *)(a1 - 184);
  a3[1] = (float)*(int *)(a1 - 180);
  a3[2] = (float)*(int *)(a1 - 176);
  a3[3] = (float)*(int *)(a1 - 172);
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(float *)(a4 + 8) = (float)*(int *)(a1 - 140);
  *(float *)(a4 + 12) = (float)*(int *)(a1 - 136);
  *a5 = (float)*(int *)(a1 - 132);
  a5[1] = (float)*(int *)(a1 - 128);
  a5[2] = (float)*(int *)(a1 - 124);
  a5[3] = (float)*(int *)(a1 - 120);
  return CDxHandleYUVBitmapRealization::GetTransform(a1 + 104, a2, 0LL);
}
