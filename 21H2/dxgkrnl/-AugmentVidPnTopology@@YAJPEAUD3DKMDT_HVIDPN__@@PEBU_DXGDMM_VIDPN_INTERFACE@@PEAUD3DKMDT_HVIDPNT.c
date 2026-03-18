/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C02F6048
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01D35DC (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02F64C8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 */

__int64 __fastcall AugmentVidPnTopology(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        void *a5,
        const struct _DXGDMM_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int64 *const a9,
        __m128i *a10)
{
  __m128i si128; // xmm0
  int v14; // eax
  unsigned int v15; // esi
  int v17; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v18; // [rsp+28h] [rbp-81h]
  unsigned __int16 v19; // [rsp+30h] [rbp-79h]
  unsigned __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  struct D3DKMDT_HVIDPN__ *v21; // [rsp+58h] [rbp-51h]
  _OWORD Src[4]; // [rsp+60h] [rbp-49h] BYREF

  v21 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 3457LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ARGUMENT_PRESENT(i_hVidPn)", 3457LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3458LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnInterface)",
      3458LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 3459LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3459LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 3460LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3460LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 3461LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ARGUMENT_PRESENT(i_hDxgAdapter)", 3461LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 3462LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDxgDmmInterface)",
      3462LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry1(1LL, 3463LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3463LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a9 )
  {
    WdLogSingleEntry1(1LL, 3464LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(o_pNumVidPnPresentPathsFromSource)",
      3464LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a9 = 0LL;
  if ( a10 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *a10 = si128;
    a10[1] = si128;
    a10[2] = si128;
    a10[3] = si128;
  }
  v20 = 0LL;
  Src[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Src[1] = Src[0];
  Src[2] = Src[0];
  Src[3] = Src[0];
  v14 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v18, v19, a8, &v20, (unsigned int *const)Src);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( !v20 )
    {
      WdLogSingleEntry1(1LL, 3527LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"sztNumVidPnPresentPaths > 0", 3527LL, 0LL, 0LL, 0LL, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a4)(a3, a7, &v20);
    if ( v17 >= 0 )
    {
      WdLogSingleEntry2(3LL, a7, v17);
    }
    else if ( !v20 )
    {
      WdLogSingleEntry1(1LL, 3542LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"sztNumVidPnPresentPaths > 0", 3542LL, 0LL, 0LL, 0LL, 0LL);
    }
    *a9 = v20;
    if ( a10 )
      memmove(a10, Src, 0x40uLL);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry4(7LL, v21, a7, a5, v14);
    return v15;
  }
}
