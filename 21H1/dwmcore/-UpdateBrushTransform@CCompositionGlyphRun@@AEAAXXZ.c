/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x1801BDED0
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801BDE90 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800367A8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v2; // rcx
  char v3; // al
  __int64 v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  __int64 v11; // rax
  _DWORD v12[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+38h] [rbp-38h] BYREF
  float v14; // [rsp+48h] [rbp-28h]
  float v15; // [rsp+4Ch] [rbp-24h]
  _BYTE v16[24]; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 105LL);
    v4 = *((_QWORD *)this + 10);
    if ( v3 )
      v4 = *(_QWORD *)(v4 + 80);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 104) )
      {
        LODWORD(v5) = *((_DWORD *)this + 22) ^ _xmm;
        v6 = 1.0 / *((float *)this + 24);
        v12[1] = 0;
        v12[2] = 0;
        v7 = 1.0 / *((float *)this + 25);
        v13 = _xmm;
        LODWORD(v8) = *((_DWORD *)this + 23) ^ _xmm;
        v14 = v5;
        v15 = v8;
        *(float *)v12 = v6;
        *(float *)&v12[3] = v7;
        *(float *)&v12[4] = 0.0 - (float)(v6 * 0.0);
        *(float *)&v12[5] = 0.0 - (float)(v7 * 0.0);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v16,
          (const struct D2D1::Matrix3x2F *)&v13,
          (const struct D2D1::Matrix3x2F *)v12);
        v9 = *((float *)this + 18) + *((float *)this + 16);
        v13 = _xmm;
        v10 = *((float *)this + 19) + *((float *)this + 17);
        v14 = v9;
        v15 = v10;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v12,
          (const struct D2D1::Matrix3x2F *)v16,
          (const struct D2D1::Matrix3x2F *)&v13);
        ((void (__fastcall *)(__int64, void *, _DWORD *))xmmword_1803461D8)(
          v11 + SDWORD2(xmmword_1803461D8),
          &CComponentTransform2D::sc_TransformMatrix,
          v12);
      }
    }
  }
}
