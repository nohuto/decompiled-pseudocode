/*
 * XREFs of ?GetTransform@CGDISectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012DFC
 * Callers:
 *     ?GetTransform@CGDISectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010B190 (-GetTransform@CGDISectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGDISectionBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int *v3; // rbx
  char v6; // si
  char v7; // al
  float v8; // xmm2_4
  float v9; // xmm1_4
  int v10; // ecx
  float v11; // xmm3_4
  int v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]

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
  v7 = *(_BYTE *)(a2 + 65) & 0xD7;
  *(_BYTE *)(a2 + 64) = 85;
  *(_BYTE *)(a2 + 65) = v7 | 0x17;
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
    (**(void (__fastcall ***)(__int64, int *))(a1 - 168))(a1 - 168, &v13);
    v8 = (float)*(int *)(a1 - 80);
    v9 = (float)v13;
    v10 = v14;
    *a3 = v8;
    v11 = (float)*v3;
    a3[1] = v11;
    a3[2] = fmaxf(v8, v9 - (float)*(int *)(a1 - 76));
    a3[3] = fmaxf(v11, (float)v10 - (float)*(int *)(a1 - 68));
  }
  return v6;
}
