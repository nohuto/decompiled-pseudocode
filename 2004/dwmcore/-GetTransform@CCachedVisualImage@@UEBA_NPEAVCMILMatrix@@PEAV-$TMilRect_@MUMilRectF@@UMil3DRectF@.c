/*
 * XREFs of ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CD010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180046730 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CCachedVisualImage::GetTransform(CCachedVisualImage *a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  float v5; // xmm1_4
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_WORD *)(a2 + 64) = 32085;
  if ( a3 )
  {
    CCachedVisualImage::GetSize(a1, (__int64)&v7);
    v4 = v7;
    *(_QWORD *)a3 = 0LL;
    v5 = (float)v8;
    *(float *)(a3 + 8) = (float)v4;
    *(float *)(a3 + 12) = v5;
  }
  return 0;
}
