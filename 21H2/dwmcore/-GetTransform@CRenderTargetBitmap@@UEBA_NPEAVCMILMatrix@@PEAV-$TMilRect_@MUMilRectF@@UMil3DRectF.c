/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802A2E2C
 * Callers:
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010BD90 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010CA30 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010CF30 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010D270 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al
  void (__fastcall ***v5)(_QWORD, int *); // rcx
  int v6; // eax
  float v7; // xmm1_4
  int v9; // [rsp+38h] [rbp+10h] BYREF
  int v10; // [rsp+3Ch] [rbp+14h]

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
  v4 = *(_BYTE *)(a2 + 65) & 0xD7;
  *(_BYTE *)(a2 + 64) = 85;
  *(_BYTE *)(a2 + 65) = v4 | 0x17;
  if ( a3 )
  {
    v5 = (void (__fastcall ***)(_QWORD, int *))(a1 - 224 + *(int *)(*(_QWORD *)(a1 - 224) + 20LL));
    (**v5)(v5, &v9);
    v6 = v9;
    *(_QWORD *)a3 = 0LL;
    v7 = (float)v10;
    *(float *)(a3 + 8) = (float)v6;
    *(float *)(a3 + 12) = v7;
  }
  return 0;
}
