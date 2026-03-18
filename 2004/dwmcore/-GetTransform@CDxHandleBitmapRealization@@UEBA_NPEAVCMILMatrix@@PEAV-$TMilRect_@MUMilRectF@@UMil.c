/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015670
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3120 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMi.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F33D0 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3590 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 * Callees:
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800157C8 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x18001587C (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18006F780 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int *v6; // rax
  int *v7; // rsi
  int *v8; // r14
  int v9; // ecx
  int v10; // edx
  UINT32 v11; // eax
  _BYTE v13[64]; // [rsp+20h] [rbp-68h] BYREF
  int v14; // [rsp+60h] [rbp-28h]
  D2D_SIZE_U v15; // [rsp+90h] [rbp+8h] BYREF

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
  if ( *(_QWORD *)(a1 - 88) )
  {
    v6 = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 104) + 40LL))(a1 - 104);
    v7 = v6;
    v8 = v6 + 1;
    if ( *v6 || (v9 = *v8, v10 = 0, *v8) )
    {
      CMILMatrix::Translate(
        (CMILMatrix *)a2,
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v6) ^ _xmm),
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v8) ^ _xmm));
      v10 = *v7;
      v9 = v7[1];
    }
    v15.width = v7[2] - v10;
    v11 = v7[3] - v9;
    v14 = 0;
    v15.height = v11;
    if ( CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 432), &v15, (struct CMILMatrix *)v13) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v13);
    if ( CBitmapRealization::CalcImageTransform((CBitmapRealization *)(a1 - 432), (struct CMILMatrix *)v13) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v13);
    if ( a3 )
    {
      *a3 = (float)*v7;
      a3[1] = (float)*v8;
      a3[2] = (float)v7[2];
      a3[3] = (float)v7[3];
    }
  }
  else if ( a3 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
