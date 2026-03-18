/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180052A08
 * Callers:
 *     ?GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EE060 (-GetBounds@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800549E0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(__int64 a1, const struct D2D_SIZE_F *a2, _DWORD *a3)
{
  char v3; // di
  unsigned int v4; // r14d
  CSurfaceBrush *v7; // r15
  bool v8; // si
  struct CShape *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  struct CShape **v13; // [rsp+30h] [rbp-40h]
  struct CShape *v14; // [rsp+38h] [rbp-38h] BYREF
  char v15; // [rsp+40h] [rbp-30h]
  char v16[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0;
  v4 = 0;
  v17 = 0LL;
  v8 = 0;
  if ( a2->width > 0.0 && a2->height > 0.0 )
  {
    v7 = (CSurfaceBrush *)(a1 - 184);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 184) + 208LL))(a1 - 184) )
    {
      v14 = 0LL;
      v13 = (struct CShape **)&v17;
      v15 = 1;
      v3 = 1;
      if ( (int)CSurfaceBrush::ComputeLayout(v7, a2, (struct CContent::LayoutData *)v16, &v14) >= 0 )
        v8 = 1;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    if ( v15 )
    {
      v9 = *v13;
      *v13 = v14;
      if ( v9 )
        std::default_delete<CShape>::operator()((__int64)v13, (__int64 (__fastcall ***)(_QWORD, __int64))v9);
    }
  }
  if ( v8 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, a3, 0LL);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x160u, 0LL);
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  if ( v17 )
    (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1LL);
  return v4;
}
