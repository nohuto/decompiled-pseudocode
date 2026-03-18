/*
 * XREFs of ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800093A4
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000923C (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A5C4C (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802A6358 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800D9B88 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

bool __fastcall CBitmapRealization::CalcImageTransform(CBitmapRealization *this, struct CMILMatrix *a2)
{
  char v2; // di
  char v4; // al

  v2 = 0;
  *(_QWORD *)a2 = 1065353216LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
  *(_QWORD *)((char *)a2 + 28) = 0LL;
  *((_DWORD *)a2 + 9) = 0;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  v4 = *((_BYTE *)a2 + 65) & 0xD7;
  *((_BYTE *)a2 + 64) = 85;
  *((_BYTE *)a2 + 65) = v4 | 0x17;
  if ( *((_BYTE *)this + 313) )
  {
    CMILMatrix::Set2DAffineMatrix(
      a2,
      *((float *)this + 42),
      *((float *)this + 43),
      *((float *)this + 44),
      *((float *)this + 45),
      *((float *)this + 46),
      *((float *)this + 47));
    return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
  }
  return v2;
}
