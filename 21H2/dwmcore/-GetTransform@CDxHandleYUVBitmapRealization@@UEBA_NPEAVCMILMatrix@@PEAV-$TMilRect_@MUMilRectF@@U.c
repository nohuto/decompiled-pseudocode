/*
 * XREFs of ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A5C4C
 * Callers:
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010C6F0 (-GetTransform@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@M.c)
 * Callees:
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800093A4 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x180009460 (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18000D0C4 (-CalcSourceRect@CBitmapRealization@@QEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180116354 (-GetSize@CDxHandleYUVBitmapRealization@@UEBA-AUD2D_SIZE_U@@XZ.c)
 */

char __fastcall CDxHandleYUVBitmapRealization::GetTransform(CDxHandleYUVBitmapRealization *a1, __int64 a2, __int64 a3)
{
  char v6; // al
  int *v7; // rax
  float v8; // xmm3_4
  float v9; // xmm2_4
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char result; // al
  const struct D2D_SIZE_U *Size; // rax
  _BYTE v16[64]; // [rsp+20h] [rbp-78h] BYREF
  int v17; // [rsp+60h] [rbp-38h]
  __int128 v18; // [rsp+70h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 - 58) & 0x4000) != 0 )
  {
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
    v6 = *(_BYTE *)(a2 + 65) & 0xD7;
    *(_BYTE *)(a2 + 64) = 85;
    *(_BYTE *)(a2 + 65) = v6 | 0x17;
    v7 = CBitmapRealization::CalcSourceRect((__int64)a1 - 464);
    v8 = (float)*v7;
    v9 = (float)v7[1];
    v10 = v7[2];
    LODWORD(v7) = v7[3];
    *((float *)&v18 + 2) = (float)v10;
    *(_QWORD *)&v18 = __PAIR64__(LODWORD(v9), LODWORD(v8));
    *((float *)&v18 + 3) = (float)(int)v7;
    if ( COERCE_FLOAT(LODWORD(v8) & _xmm) >= 0.0000011920929 || COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
      CMILMatrix::Translate((CMILMatrix *)a2, COERCE_FLOAT(LODWORD(v8) ^ _xmm), COERCE_FLOAT(LODWORD(v9) ^ _xmm));
    v17 = 0;
    if ( CBitmapRealization::CalcImageTransform(
           (CDxHandleYUVBitmapRealization *)((char *)a1 - 464),
           (struct CMILMatrix *)v16) )
    {
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v16, v12, v13);
    }
    result = CMILMatrix::IsIdentity<0>(a2, v11, v12, v13) == 0;
    if ( a3 )
      *(_OWORD *)a3 = v18;
  }
  else
  {
    Size = (const struct D2D_SIZE_U *)CDxHandleYUVBitmapRealization::GetSize(a1, &v18);
    result = CBitmapRealization::CalcRotationTransform(
               (CDxHandleYUVBitmapRealization *)((char *)a1 - 464),
               Size,
               (struct CMILMatrix *)a2);
    if ( a3 )
    {
      *(_QWORD *)a3 = 0LL;
      *(float *)(a3 + 8) = (float)*((int *)a1 - 64);
      *(float *)(a3 + 12) = (float)*((int *)a1 - 63);
    }
  }
  return result;
}
