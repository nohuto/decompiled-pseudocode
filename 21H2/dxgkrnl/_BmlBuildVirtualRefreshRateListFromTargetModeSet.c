/*
 * XREFs of _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x1C03ABA68
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03AC0EC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00690EC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x1C01A965C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x1C01B5CB4 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x1C03AAED0 (_lambda_f7629139d0209e148fddfe9121e39862_--operator().c)
 */

__int64 __fastcall BmlBuildVirtualRefreshRateListFromTargetModeSet(
        DMMVIDPNSOURCEMODESET *this,
        unsigned __int64 *a2,
        void **a3,
        __int64 a4)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  _OWORD *v11; // rax
  UINT Numerator; // r14d
  DMMVIDPNSOURCEMODESET *v13; // rsi
  unsigned int Denominator; // r15d
  const struct DMMVIDPNSOURCEMODE *NextMode; // rsi
  struct _D3DDDI_RATIONAL v16; // rdi
  int v17; // ecx
  struct _D3DDDI_RATIONAL v18; // rbx
  __int64 v19; // rax
  unsigned __int64 *v20[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  struct _D3DDDI_RATIONAL v22; // [rsp+78h] [rbp+48h]
  struct _D3DDDI_RATIONAL v23; // [rsp+80h] [rbp+50h] BYREF
  struct _D3DDDI_RATIONAL v24; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v7 = *((_QWORD *)this + 8) + 7LL;
  v8 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x4B677844u, 256LL, a4);
  if ( (void *)v9 != *a3 )
    operator delete(*a3);
  *a3 = (void *)v9;
  if ( v9 )
  {
    if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)(*((_QWORD *)this + 14) + 96LL)
                                                                         + 80LL)) )
    {
      *a2 = 6LL;
      v11 = *a3;
      *v11 = xmmword_1C010A948;
      v11[1] = xmmword_1C010A958;
      v11[2] = xmmword_1C010A968;
    }
    Numerator = 0;
    v20[0] = a2;
    v21 = 0x100000000LL;
    v13 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
    v20[1] = (unsigned __int64 *)a3;
    Denominator = 1;
    if ( v13 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    {
      NextMode = (DMMVIDPNSOURCEMODESET *)((char *)v13 - 8);
      if ( NextMode )
      {
        v16 = (struct _D3DDDI_RATIONAL)v21;
        do
        {
          v17 = (*((_DWORD *)NextMode + 30) >> 3) & 0x3F;
          if ( v17 )
          {
            v19 = *(_QWORD *)((char *)NextMode + 92);
            v22.Numerator = v19;
            v22.Denominator = v17 * HIDWORD(v19);
            v18 = v22;
          }
          else
          {
            v18 = *(struct _D3DDDI_RATIONAL *)((char *)NextMode + 92);
          }
          v22 = v18;
          v24 = v18;
          if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode)
            && Denominator * (unsigned __int64)v18.Numerator > Numerator * (unsigned __int64)v22.Denominator )
          {
            v23.Numerator = v18.Numerator;
            v23.Denominator = 2 * v22.Denominator;
            if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate(NextMode, &v23, 2) )
              v16 = v18;
            v21 = (__int64)v16;
            Denominator = v16.Denominator;
            Numerator = v16.Numerator;
          }
          lambda_f7629139d0209e148fddfe9121e39862_::operator()(v20, &v24);
          NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
        }
        while ( NextMode );
      }
    }
    HIDWORD(v21) = 2 * Denominator;
    if ( 100 * (unsigned __int64)Numerator >= 5999 * (unsigned __int64)(2 * Denominator) )
      lambda_f7629139d0209e148fddfe9121e39862_::operator()(v20, (const struct _D3DDDI_RATIONAL *)&v21);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, v7);
    return 3221225626LL;
  }
}
