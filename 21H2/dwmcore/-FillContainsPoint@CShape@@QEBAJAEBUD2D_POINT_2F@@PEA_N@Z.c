/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180062C04
 * Callers:
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800625C4 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180062BD0 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180062F54 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180063700 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  bool IsAxisAlignedRectangle; // al
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  BOOL v16; // [rsp+30h] [rbp-20h]
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF

  v16 = 0;
  IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(this);
  v7 = *(_QWORD *)this;
  if ( IsAxisAlignedRectangle )
  {
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v7 + 48))(this, &v17, 0LL);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x7Bu, 0LL);
    else
      v16 = IsPointInRect(a2, (const struct MilRectF *)&v17);
  }
  else
  {
    *(_QWORD *)&v17 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
    v12 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int128 *))(v7 + 24))(this, 0LL, &v17);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x82u, 0LL);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v17 + 56LL))(
              v17,
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
              0LL);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x84u, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v17);
  }
  *a3 = v16;
  return v10;
}
