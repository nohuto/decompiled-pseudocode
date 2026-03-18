/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x180240320
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180063700 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800ABBF0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  struct CShape *v8; // rcx
  bool v9; // di
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  CShape *v11; // rdx
  CShape *v13; // [rsp+20h] [rbp-29h] BYREF
  struct CShape *v14[2]; // [rsp+28h] [rbp-21h] BYREF
  char v15; // [rsp+38h] [rbp-11h]
  _BYTE v16[40]; // [rsp+40h] [rbp-9h] BYREF
  struct D2D_RECT_F v17; // [rsp+68h] [rbp+1Fh] BYREF
  _BYTE v18[12]; // [rsp+78h] [rbp+2Fh] BYREF
  float v19; // [rsp+84h] [rbp+3Bh]

  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *))(**((_QWORD **)this + 14) + 8LL))(
          *((_QWORD *)this + 14),
          this) )
  {
    return 0;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, CSurfaceBrush *, _BYTE *))(**((_QWORD **)this + 14) + 24LL))(
         *((_QWORD *)this + 14),
         this,
         v18)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(v19 - 1.0) & _xmm) < 0.0000011920929 )
  {
    width = a2->width;
    height = a2->height;
    a3->left = 0.0;
    a3->top = 0.0;
    a3->right = width;
    a3->bottom = height;
    return 0;
  }
  v13 = 0LL;
  v14[1] = 0LL;
  v14[0] = (struct CShape *)&v13;
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
    || !CShape::IsAxisAlignedRectangle(v13)
    || (v17 = 0LL,
        (*(int (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, &v17, 0LL) < 0) )
  {
    if ( v13 )
      std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v13);
    return 0;
  }
  v11 = v13;
  *(struct D2D_RECT_F *)v14 = v17;
  *a3 = v17;
  if ( v11 )
    std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v11);
  return 1;
}
