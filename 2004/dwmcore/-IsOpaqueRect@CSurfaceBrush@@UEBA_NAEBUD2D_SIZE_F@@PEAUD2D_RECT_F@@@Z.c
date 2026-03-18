/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001CC60
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNonVisualSurfaceBitmapResource@CSurfaceBrush@@AEBAJPEAPEAVIBitmapResource@@@Z @ 0x180057D74 (-GetNonVisualSurfaceBitmapResource@CSurfaceBrush@@AEBAJPEAPEAVIBitmapResource@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180072E20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008034C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  char v6; // bl
  struct CShape *v8; // rcx
  bool v9; // di
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  CShape *v11; // rdx
  CShape *v12; // [rsp+20h] [rbp-39h] BYREF
  struct IBitmapResource *v13; // [rsp+28h] [rbp-31h] BYREF
  struct CShape *v14[2]; // [rsp+30h] [rbp-29h] BYREF
  char v15; // [rsp+40h] [rbp-19h]
  _BYTE v16[40]; // [rsp+48h] [rbp-11h] BYREF
  struct D2D_RECT_F v17; // [rsp+70h] [rbp+17h] BYREF

  v13 = 0LL;
  if ( (int)CSurfaceBrush::GetNonVisualSurfaceBitmapResource(this, &v13) < 0
    || !(*(unsigned __int8 (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)v13 + 8LL))(v13)
    || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 208LL))(this) )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v12 = 0LL;
  v14[1] = 0LL;
  v6 = 1;
  v14[0] = (struct CShape *)&v12;
  v15 = 1;
  v9 = (int)CSurfaceBrush::ComputeLayout(this, a2, (struct CContent::LayoutData *)v16, &v14[1]) >= 0;
  if ( v15 )
  {
    v8 = v14[0];
    v10 = *(__int64 (__fastcall ****)(_QWORD, __int64))v14[0];
    *(_QWORD *)v14[0] = v14[1];
    if ( v10 )
      std::default_delete<CShape>::operator()((__int64)v8, v10);
  }
  if ( !v9
    || !CShape::IsAxisAlignedRectangle(v12)
    || (v17 = 0LL,
        (*(int (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, &v17, 0LL) < 0) )
  {
    if ( v12 )
      std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
    goto LABEL_3;
  }
  v11 = v12;
  *(struct D2D_RECT_F *)v14 = v17;
  *a3 = v17;
  if ( v11 )
    std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v11);
LABEL_4:
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(&v13);
  return v6;
}
