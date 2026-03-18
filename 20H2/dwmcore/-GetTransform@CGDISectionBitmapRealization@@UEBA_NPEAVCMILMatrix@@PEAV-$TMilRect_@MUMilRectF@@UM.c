/*
 * XREFs of ?GetTransform@CGDISectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800199BC
 * Callers:
 *     ?GetTransform@CGDISectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F2980 (-GetTransform@CGDISectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18004EAEC (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGDISectionBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int *v3; // rbx
  char v6; // bp
  float v7; // xmm2_4
  float v8; // xmm1_4
  int v9; // ecx
  float v10; // xmm3_4
  int v12; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+34h] [rbp+Ch]

  v3 = (int *)(a1 - 72);
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v6 = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_WORD *)(a2 + 64) = 32085;
  if ( *(_DWORD *)(a1 - 80) || *v3 )
  {
    CMILMatrix::Translate(
      (CMILMatrix *)a2,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)(a1 - 80)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v3) ^ _xmm));
    v6 = 1;
  }
  if ( a3 )
  {
    (**(void (__fastcall ***)(__int64, int *))(a1 - 168))(a1 - 168, &v12);
    v7 = (float)*(int *)(a1 - 80);
    v8 = (float)v12;
    v9 = v13;
    *a3 = v7;
    v10 = (float)*v3;
    a3[1] = v10;
    a3[2] = fmaxf(v7, v8 - (float)*(int *)(a1 - 76));
    a3[3] = fmaxf(v10, (float)v9 - (float)*(int *)(a1 - 68));
  }
  return v6;
}
