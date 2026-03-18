/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000923C
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010B930 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMi.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010C010 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010C2B0 (-GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUM.c)
 * Callees:
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800093A4 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z @ 0x180009460 (-CalcRotationTransform@CBitmapRealization@@QEBA_NAEBUD2D_SIZE_U@@PEAVCMILMatrix@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  char v6; // al
  int *v7; // rax
  int *v8; // rsi
  int *v9; // r14
  int v10; // ecx
  int v11; // edx
  UINT32 v12; // eax
  _BYTE v14[64]; // [rsp+20h] [rbp-68h] BYREF
  int v15; // [rsp+60h] [rbp-28h]
  struct D2D_SIZE_U v16; // [rsp+90h] [rbp+8h] BYREF

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
  if ( *(_QWORD *)(a1 - 88) )
  {
    v7 = (int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 104) + 48LL))(a1 - 104);
    v8 = v7;
    v9 = v7 + 1;
    if ( *v7 || (v10 = *v9, v11 = 0, *v9) )
    {
      CMILMatrix::Translate(
        (CMILMatrix *)a2,
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v7) ^ _xmm),
        COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v9) ^ _xmm));
      v11 = *v8;
      v10 = v8[1];
    }
    v16.width = v8[2] - v11;
    v12 = v8[3] - v10;
    v15 = 0;
    v16.height = v12;
    if ( CBitmapRealization::CalcRotationTransform((CBitmapRealization *)(a1 - 464), &v16, (struct CMILMatrix *)v14) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v14);
    if ( CBitmapRealization::CalcImageTransform((CBitmapRealization *)(a1 - 464), (struct CMILMatrix *)v14) )
      CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v14);
    if ( a3 )
    {
      *a3 = (float)*v8;
      a3[1] = (float)*v9;
      a3[2] = (float)v8[2];
      a3[3] = (float)v8[3];
    }
  }
  else if ( a3 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *(_QWORD *)a3 = 0LL;
  }
  return (unsigned __int8)CMILMatrix::IsIdentity<0>(a2) == 0;
}
