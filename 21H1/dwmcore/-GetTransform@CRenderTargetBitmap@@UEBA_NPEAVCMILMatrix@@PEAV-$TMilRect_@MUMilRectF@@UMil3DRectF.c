/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019F590
 * Callers:
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800ED570 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F09D0 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F0B10 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::GetTransform(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  int v5; // eax
  float v6; // xmm1_4
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

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
    v4 = (void (__fastcall ***)(_QWORD, int *))(a1 - 224 + *(int *)(*(_QWORD *)(a1 - 224) + 20LL));
    (**v4)(v4, &v8);
    v5 = v8;
    *(_QWORD *)a3 = 0LL;
    v6 = (float)v9;
    *(float *)(a3 + 8) = (float)v5;
    *(float *)(a3 + 12) = v6;
  }
  return 0;
}
