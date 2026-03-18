/*
 * XREFs of ?GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A234
 * Callers:
 *     ?GetTransform@CGDIBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F3130 (-GetTransform@CGDIBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003A358 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int v3; // eax
  char v6; // bp
  int *v7; // rbx
  __int64 v8; // rcx
  int v9; // ecx
  float v10; // xmm1_4
  float v11; // xmm2_4
  int v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+34h] [rbp+Ch]

  v3 = 0;
  *(_QWORD *)a2 = 1065353216LL;
  v6 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v7 = (int *)(a1 - 72);
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_WORD *)(a2 + 64) = 32085;
  if ( *(_DWORD *)(a1 - 80) || *v7 )
  {
    CMILMatrix::Translate(
      (CMILMatrix *)a2,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)(a1 - 80)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v7) ^ _xmm));
    v6 = 1;
  }
  if ( a3 )
  {
    v8 = *(_QWORD *)(a1 - 120);
    if ( v8 )
    {
      (**(void (__fastcall ***)(__int64, int *))(v8 + 96))(v8 + 96, &v13);
      v3 = v14;
      v9 = v13;
    }
    else
    {
      v9 = v3;
    }
    v10 = (float)*(int *)(a1 - 80);
    *a3 = v10;
    v11 = (float)*v7;
    a3[1] = v11;
    a3[2] = fmaxf(v10, (float)(v9 - *(_DWORD *)(a1 - 76)));
    a3[3] = fmaxf(v11, (float)(v3 - *(_DWORD *)(a1 - 68)));
  }
  return v6;
}
