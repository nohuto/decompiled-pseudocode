/*
 * XREFs of ?EnsureDestRectAndTransform@CCursorState@@AEAAX_N@Z @ 0x180269A54
 * Callers:
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802698F4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?ProcessStateChanges@CCursorState@@QEAAX_K_N@Z @ 0x180269F68 (-ProcessStateChanges@CCursorState@@QEAAX_K_N@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D17D8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x180260E04 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 */

void __fastcall CCursorState::EnsureDestRectAndTransform(CCursorState *this, char a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int *v5; // rax
  int v6; // ecx
  int v7; // edx
  float v8; // xmm1_4
  float v9; // xmm2_4
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v14; // r8
  const char *v15; // r9
  unsigned __int64 v16; // xmm1_8
  int v17; // [rsp+20h] [rbp-89h] BYREF
  int v18; // [rsp+24h] [rbp-85h] BYREF
  _DWORD v19[6]; // [rsp+28h] [rbp-81h] BYREF
  __int128 v20; // [rsp+40h] [rbp-69h] BYREF
  __int128 v21; // [rsp+50h] [rbp-59h]
  __int128 v22; // [rsp+60h] [rbp-49h]
  unsigned int v23; // [rsp+70h] [rbp-39h]
  unsigned int v24; // [rsp+74h] [rbp-35h]
  int v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ch] [rbp-2Dh]
  int v27; // [rsp+80h] [rbp-29h]
  _BYTE v28[64]; // [rsp+90h] [rbp-19h] BYREF
  int v29; // [rsp+D0h] [rbp+27h]
  __int128 v30; // [rsp+E0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  if ( !*((_BYTE *)this + 106) || a2 )
  {
    v3 = *((_QWORD *)this + 23);
    if ( v3 )
    {
      v27 = 0;
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *, int *))(**(_QWORD **)(v3 + 24) + 24LL))(
             *(_QWORD *)(v3 + 24),
             &v17,
             &v18);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          351LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          (const char *)(unsigned int)v4,
          v17);
      *(_QWORD *)&v30 = 0LL;
      *((float *)&v30 + 2) = (float)v17;
      *((float *)&v30 + 3) = (float)v18;
      if ( *((_BYTE *)this + 105) )
      {
        *((float *)&v30 + 2) = (float)v17 + 6.0;
        *((float *)&v30 + 3) = (float)v18 + 4.0;
      }
      v5 = (int *)*((_QWORD *)this + 23);
      v6 = *v5;
      v7 = v5[1];
      v25 = 0;
      v21 = _xmm;
      v20 = _xmm;
      v26 = 1065353216;
      LOBYTE(v27) = 84;
      BYTE1(v27) = BYTE1(v27) & 0xC0 | 0x17;
      v22 = _xmm;
      v23 = COERCE_UNSIGNED_INT((float)v6) ^ _xmm;
      v8 = 1.0 / *((float *)this + 44);
      v24 = COERCE_UNSIGNED_INT((float)v7) ^ _xmm;
      CMILMatrix::Scale((CMILMatrix *)&v20, v8, v8, 1.0);
      v9 = *((float *)this + 50);
      if ( COERCE_FLOAT(LODWORD(v9) & _xmm) >= 0.0000011920929 )
      {
        v19[0] = 0;
        v19[1] = 0;
        v29 = 0;
        v19[2] = 1065353216;
        CMILMatrix::SetRotation((CMILMatrix *)v28, (const struct Windows::Foundation::Numerics::float3 *)v19, v9);
        CMILMatrix::Multiply((CMILMatrix *)&v20, (const struct CMILMatrix *)v28, v10, v11);
      }
      CMILMatrix::Translate((CMILMatrix *)&v20, *((float *)this + 51), *((float *)this + 52));
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v20, (__int64)&v30, (float *)this + 34, v12);
      if ( !CMILMatrix::Invert((CMILMatrix *)&v20, v13, v14) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          389LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursorstate.cpp",
          v15);
      *(_QWORD *)&v30 = v20;
      *((_QWORD *)&v30 + 1) = v21;
      v16 = _mm_unpacklo_ps((__m128)v23, (__m128)v24).m128_u64[0];
      *(_OWORD *)((char *)this + 152) = v30;
      *((_QWORD *)this + 21) = v16;
    }
    else
    {
      *((_QWORD *)this + 18) = 0LL;
      *((_QWORD *)this + 17) = 0LL;
      *((_QWORD *)this + 19) = 1065353216LL;
      *((_DWORD *)this + 40) = 0;
      *(_QWORD *)((char *)this + 164) = 1065353216LL;
      *((_DWORD *)this + 43) = 0;
    }
    *((_BYTE *)this + 106) = 1;
  }
}
