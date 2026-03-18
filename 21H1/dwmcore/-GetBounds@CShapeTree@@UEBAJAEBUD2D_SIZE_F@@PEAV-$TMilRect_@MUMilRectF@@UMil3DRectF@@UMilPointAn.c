/*
 * XREFs of ?GetBounds@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020E2DC
 * Callers:
 *     ?GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE020 (-GetBounds@CShapeTree@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18020E40C (-HitTest@CShapeTree@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x1802618AC (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 */

__int64 __fastcall CShapeTree::GetBounds(__int64 a1, float *a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // xmm0_8
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  _BYTE v15[4]; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+34h] [rbp-4Ch]
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+4Ch] [rbp-34h]
  __int64 v20; // [rsp+54h] [rbp-2Ch]
  void *lpMem; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]

  v6 = 0;
  if ( *(_BYTE *)(a1 - 56) )
  {
    v7 = *(_QWORD *)a2;
    v20 = 0LL;
    lpMem = 0LL;
    v22 = 0;
    v19 = 1LL;
    v16 = 0;
    v17 = 0LL;
    v18 = 0LL;
    v23 = v7;
    v8 = CShapeTreeIterator::Walk<CShapeBoundingContext>(v15, a1 - 144, v15);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2Fu, 0LL);
      operator delete(lpMem);
      return v6;
    }
    operator delete(lpMem);
  }
  if ( a3 )
    *(_OWORD *)a3 = *(_OWORD *)(a1 - 72);
  if ( !*(_BYTE *)(a1 - 55) )
    goto LABEL_17;
  v10 = *a2;
  v11 = a2[1];
  if ( *(float *)a3 < 0.0 )
    *(_DWORD *)a3 = 0;
  if ( *(float *)(a3 + 4) < 0.0 )
    *(_DWORD *)(a3 + 4) = 0;
  v12 = *(float *)(a3 + 8);
  if ( v12 > v10 )
  {
    *(float *)(a3 + 8) = v10;
    v12 = v10;
  }
  v13 = *(float *)(a3 + 12);
  if ( v13 > v11 )
  {
    *(float *)(a3 + 12) = v11;
    v13 = v11;
    v12 = *(float *)(a3 + 8);
  }
  if ( v12 <= *(float *)a3 || v13 <= *(float *)(a3 + 4) )
  {
LABEL_17:
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  return v6;
}
