/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180073F68
 * Callers:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180073DB8 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800C2EE8 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x180073B98 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007705C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C502C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  bool IsAxisAlignedRectangle; // al
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(CShape *, __int128 *, _QWORD); // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  BOOL v17; // [rsp+30h] [rbp-20h]
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF

  v17 = 0;
  IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(this);
  v7 = *(_QWORD *)this;
  if ( IsAxisAlignedRectangle )
  {
    v8 = *(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v7 + 32);
    v18 = 0LL;
    v9 = v8(this, &v18, 0LL);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7Bu, 0LL);
    else
      v17 = IsPointInRect(a2, (const struct MilRectF *)&v18);
  }
  else
  {
    *(_QWORD *)&v18 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v18);
    v13 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int128 *))(v7 + 24))(this, 0LL, &v18);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x82u, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v18 + 56LL))(
              v18,
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
              0LL);
      v11 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x84u, 0LL);
    }
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v18);
  }
  *a3 = v17;
  return v11;
}
