/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800625C4
 * Callers:
 *     ?HitTest@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180107B30 (-HitTest@CSurfaceBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180062C04 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  CSurfaceBrush *v5; // rsi
  bool v9; // di
  int v10; // eax
  unsigned int v11; // ecx
  struct CShape *v13; // [rsp+38h] [rbp-38h] BYREF
  char v14; // [rsp+40h] [rbp-30h]
  _BYTE v15[40]; // [rsp+48h] [rbp-28h] BYREF
  CShape *v16; // [rsp+90h] [rbp+20h]

  v4 = 0;
  v5 = (CSurfaceBrush *)((char *)this - 200);
  *a4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this - 11) + 16LL))(
         *((_QWORD *)this - 11),
         (char *)this - 200)
    && a2->width > 0.0
    && a2->height > 0.0
    && !(*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v5 + 192LL))(v5) )
  {
    v16 = 0LL;
    v13 = 0LL;
    v14 = 1;
    v9 = (int)CSurfaceBrush::ComputeLayout(v5, a2, (struct CContent::LayoutData *)v15, &v13) >= 0;
    if ( v14 )
      v16 = v13;
    if ( v9 )
    {
      v10 = CShape::FillContainsPoint(v16, a3, a4);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1ACu, 0LL);
    }
    if ( v16 )
      std::default_delete<CShape>::operator()();
  }
  return v4;
}
