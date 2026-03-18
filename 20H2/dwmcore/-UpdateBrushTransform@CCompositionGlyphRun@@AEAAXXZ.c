/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x1801B9670
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801B9630 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800650B4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 v13; // rax
  _DWORD v14[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  float v16; // [rsp+48h] [rbp-28h]
  float v17; // [rsp+4Ch] [rbp-24h]
  _BYTE v18[24]; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 105LL);
    v4 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v3 )
    {
      v5 = v4[10];
      if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 180LL) )
        return;
      v6 = v4[10];
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*v4 + 56LL))(*((_QWORD *)this + 10), 180LL) )
        return;
      v6 = *((_QWORD *)this + 10);
    }
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 104) )
      {
        LODWORD(v7) = *((_DWORD *)this + 22) ^ _xmm;
        v8 = 1.0 / *((float *)this + 24);
        v14[1] = 0;
        v14[2] = 0;
        v9 = 1.0 / *((float *)this + 25);
        v15 = _xmm;
        LODWORD(v10) = *((_DWORD *)this + 23) ^ _xmm;
        v16 = v7;
        v17 = v10;
        *(float *)v14 = v8;
        *(float *)&v14[3] = v9;
        *(float *)&v14[4] = 0.0 - (float)(v8 * 0.0);
        *(float *)&v14[5] = 0.0 - (float)(v9 * 0.0);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v18,
          (const struct D2D1::Matrix3x2F *)&v15,
          (const struct D2D1::Matrix3x2F *)v14);
        v11 = *((float *)this + 18) + *((float *)this + 16);
        v15 = _xmm;
        v12 = *((float *)this + 19) + *((float *)this + 17);
        v16 = v11;
        v17 = v12;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v14,
          (const struct D2D1::Matrix3x2F *)v18,
          (const struct D2D1::Matrix3x2F *)&v15);
        ((void (__fastcall *)(_QWORD, void *, _DWORD *))xmmword_1803411D8)(
          *(_QWORD *)(v13 + 104) + SDWORD2(xmmword_1803411D8),
          &CComponentTransform2D::sc_TransformMatrix,
          v14);
      }
    }
  }
}
