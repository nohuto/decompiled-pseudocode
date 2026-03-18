/*
 * XREFs of ?UpdateBrushTransform@CCompositionGlyphRun@@AEAAXXZ @ 0x18020CB50
 * Callers:
 *     ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18020CB10 (-NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionGlyphRun::UpdateBrushTransform(CCompositionGlyphRun *this)
{
  __int64 v2; // rcx
  char v3; // al
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  __int64 v12; // rax
  float v13[6]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+38h] [rbp-38h] BYREF
  float v15; // [rsp+48h] [rbp-28h]
  float v16; // [rsp+4Ch] [rbp-24h]
  _BYTE v17[24]; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 105LL);
    v4 = (_QWORD *)*((_QWORD *)this + 10);
    if ( v3 )
    {
      v5 = v4[11];
      if ( !v5 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 56LL))(v5, 180LL) )
        return;
      v6 = v4[11];
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*v4 + 56LL))(*((_QWORD *)this + 10), 180LL) )
        return;
      v6 = *((_QWORD *)this + 10);
    }
    if ( v6 )
    {
      if ( *(_QWORD *)(v6 + 120) )
      {
        LODWORD(v7) = *((_DWORD *)this + 23) ^ _xmm;
        LODWORD(v8) = *((_DWORD *)this + 22) ^ _xmm;
        v13[1] = 0.0;
        v13[2] = 0.0;
        v16 = v7;
        v15 = v8;
        v9 = 1.0 / *((float *)this + 25);
        v13[0] = 1.0 / *((float *)this + 24);
        v14 = *(_OWORD *)&_xmm;
        v13[3] = v9;
        v13[4] = 0.0 - (float)(v13[0] * 0.0);
        v13[5] = 0.0 - (float)(v9 * 0.0);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v17,
          (const struct D2D1::Matrix3x2F *)&v14,
          (const struct D2D1::Matrix3x2F *)v13);
        v10 = *((float *)this + 18) + *((float *)this + 16);
        v11 = *((float *)this + 19) + *((float *)this + 17);
        v14 = *(_OWORD *)&_xmm;
        v15 = v10;
        v16 = v11;
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)v13,
          (const struct D2D1::Matrix3x2F *)v17,
          (const struct D2D1::Matrix3x2F *)&v14);
        ((void (__fastcall *)(_QWORD, void *, float *))xmmword_1803D0018)(
          *(_QWORD *)(v12 + 120) + SDWORD2(xmmword_1803D0018),
          &CComponentTransform2D::sc_TransformMatrix,
          v13);
      }
    }
  }
}
