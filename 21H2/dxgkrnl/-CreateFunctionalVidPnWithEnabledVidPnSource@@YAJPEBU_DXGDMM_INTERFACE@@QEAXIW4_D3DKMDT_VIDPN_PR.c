/*
 * XREFs of ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1C02F6FB8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01D35DC (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C02F765C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        unsigned int a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a4,
        unsigned __int8 a5,
        struct _D3DDDI_RATIONAL *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        const struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  __int64 v10; // r15
  struct _D3DDDI_RATIONAL *v11; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING Numerator; // edx
  int v13; // eax
  UINT Denominator; // ecx
  __int64 (__fastcall *v16)(void *const, unsigned __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  struct D3DKMDT_HVIDPN__ *v17; // r14
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // r8
  unsigned int v27; // eax
  unsigned __int8 v28[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v29; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v31; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v32; // [rsp+90h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPN__ *v33; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_INTERFACE *v34; // [rsp+A0h] [rbp-60h]
  struct D3DKMDT_HVIDPN__ **v35; // [rsp+A8h] [rbp-58h]
  const struct _DXGDMM_VIDPN_INTERFACE **v36; // [rsp+B0h] [rbp-50h]
  _BYTE v37[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct D3DKMDT_HVIDPN__ *v38; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v39)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+C8h] [rbp-38h]
  __int64 v40; // [rsp+D0h] [rbp-30h]
  int v41; // [rsp+D8h] [rbp-28h]
  unsigned int v42[16]; // [rsp+E0h] [rbp-20h] BYREF

  v35 = a7;
  v36 = a8;
  v10 = a3;
  v34 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 4730LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 4730LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4731LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 4731LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (_DWORD)v10 == -1 )
  {
    WdLogSingleEntry1(1LL, 4732LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4732LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 4733LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pDisplayModeInfo != NULL", 4733LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry1(1LL, 4734LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_phVidPn != NULL", 4734LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a8 )
  {
    WdLogSingleEntry1(1LL, 4735LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppDmmVidPnInterface != NULL", 4735LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  v11 = a6 + 2;
  *a8 = 0LL;
  Numerator = a6[3].Numerator;
  v28[0] = 0;
  v13 = DmmMapVSyncFromRationalToInteger(a6 + 2, Numerator, v28);
  Denominator = a6[1].Denominator;
  if ( Denominator == v13 || v28[0] && Denominator == v13 + 1 )
  {
    v16 = (__int64 (__fastcall *)(void *const, unsigned __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)a1 + 6);
    v29 = 0LL;
    v38 = 0LL;
    v17 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0;
    v37[0] = 0;
    v30 = 0LL;
    v18 = v16(a2, &v30, &v29);
    v19 = v18;
    if ( v18 >= 0 )
    {
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)v37,
        v30,
        *((_QWORD *)a1 + 8),
        (__int64)a2);
      v32 = 0LL;
      v31 = 0LL;
      v17 = v38;
      v20 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v29)(
              v38,
              &v32,
              &v31);
      v19 = v20;
      if ( v20 >= 0 )
      {
        v28[0] = 0;
        v30 = 0LL;
        *(__m128i *)v42 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        *(_OWORD *)&v42[4] = *(_OWORD *)v42;
        *(_OWORD *)&v42[8] = *(_OWORD *)v42;
        *(_OWORD *)&v42[12] = *(_OWORD *)v42;
        v21 = PrepareUnpinnedPathsFromSource(a1, a2, v17, v29, v32, v31, v10, 0, 0, 0, &v30, (__m128i *)v42, v28);
        v22 = v21;
        LODWORD(v19) = -1071774925;
        if ( v21 == -1071774925 || (LODWORD(v19) = -1071774886, v21 == -1071774886) )
        {
          WdLogSingleEntry2(7LL, v10, a2);
        }
        else if ( v21 >= 0 )
        {
          v33 = 0LL;
          v23 = PinPresentPathModalityFromMode(
                  v34,
                  a2,
                  v17,
                  v29,
                  v32,
                  v31,
                  v10,
                  v30,
                  (struct _DXGK_DISPLAYMODE_INFO *)a6,
                  D3DKMDT_VPPS_UNINITIALIZED,
                  0,
                  1u,
                  &v33);
          LODWORD(v19) = v23;
          if ( v23 >= 0 )
          {
            LODWORD(v19) = 0;
            *v35 = v33;
            *v36 = v29;
          }
          else if ( v23 == -1071774970 )
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
            v26[3] = a6->Numerator;
            v26[4] = a6->Denominator;
            v26[5] = (int)a6[1].Numerator;
            v27 = a6[2].Numerator / a6[2].Denominator;
            v26[7] = v10;
            v26[6] = v27;
          }
          else
          {
            WdLogSingleEntry5(
              2LL,
              v10,
              a6->Numerator,
              a6->Denominator,
              (int)a6[1].Numerator,
              a6[2].Numerator / a6[2].Denominator);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to pin source/target modes on VidPN present (multi)path from source 0x%I64x matching speci"
                        "fied display mode (%I64d x %I64d x 0x%I64x @ %I64d[Hz])",
              v10,
              a6->Numerator,
              a6->Denominator,
              (int)a6[1].Numerator,
              v11->Numerator / a6[2].Denominator);
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, v10, a2, v21);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
            v10,
            (__int64)a2,
            v22,
            0LL,
            0LL);
          LODWORD(v19) = v22;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, v17, v20);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire topology of the VidPN 0x%I64x (status = 0x%I64x)",
          (__int64)v17,
          v19,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v19,
        0LL,
        0LL,
        0LL);
    }
    if ( v37[0] )
      v39(v40, v17);
    return (unsigned int)v19;
  }
  else
  {
    WdLogSingleEntry3(2LL, a6[1].Denominator, v11->Numerator, a6[2].Denominator);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Integer refresh rate in display mode (%i64d)Hz does not match rational refresh rate (%i64d/%I64d)hz.",
      a6[1].Denominator,
      v11->Numerator,
      a6[2].Denominator,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
