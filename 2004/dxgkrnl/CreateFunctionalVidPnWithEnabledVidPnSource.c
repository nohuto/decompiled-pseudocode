/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C025E268
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149E64 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B848 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011D6E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C0158EB8 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C025D030 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        struct _DXGDMM_INTERFACE *a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        struct _D3DKMT_DISPLAYMODE *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  struct D3DKMDT_HVIDPN__ *v8; // r12
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 ScanLineOrdering; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v22; // rax
  __int64 (__fastcall *v24)(void *, unsigned __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // r8
  UINT v45; // eax
  _QWORD *v46; // rax
  struct _DXGDMM_VIDPN_INTERFACE **v47; // rcx
  unsigned int v48; // [rsp+50h] [rbp-B0h]
  unsigned int v49; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v50[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v51; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v53; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v54; // [rsp+90h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPN__ *v55; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_INTERFACE *v56; // [rsp+A0h] [rbp-60h]
  struct _DXGDMM_VIDPN_INTERFACE **v57; // [rsp+A8h] [rbp-58h]
  char v58[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMDT_HVIDPN__ *v59; // [rsp+B8h] [rbp-48h]
  void (__fastcall *v60)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+C0h] [rbp-40h]
  __int64 v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+D0h] [rbp-30h]
  unsigned int v63[16]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0LL;
  v11 = a3;
  v56 = a1;
  v57 = a8;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v12 + 24) = 4590LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = 4591LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v11 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = 4592LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v15 + 24) = 4593LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 4594LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a8 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = 4595LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  ScanLineOrdering = (unsigned int)a6->ScanLineOrdering;
  v50[0] = 0;
  v19 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, v50);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v19 && (!v50[0] || (_DWORD)IntegerRefreshRate != v19 + 1) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate, v20);
    v22[3] = a6->IntegerRefreshRate;
    v22[4] = a6->RefreshRate.Numerator;
    v22[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v51 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0;
  v58[0] = 0;
  v52 = 0LL;
  v24 = (__int64 (__fastcall *)(void *, unsigned __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)a1 + 6);
  v59 = 0LL;
  v25 = v24(a2, &v52, &v51);
  v28 = v25;
  if ( v25 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v27, v26);
    *(_QWORD *)(v29 + 24) = a2;
LABEL_21:
    *(_QWORD *)(v29 + 32) = v28;
    v32 = (_QWORD *)v29;
LABEL_31:
    WdLogEvent5_WdError(v32);
    goto LABEL_33;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v58,
    v52,
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v54 = 0LL;
  v53 = 0LL;
  v8 = v59;
  v30 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v51)(
          v59,
          &v54,
          &v53);
  v28 = v30;
  if ( v30 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(0LL, v31);
    *(_QWORD *)(v29 + 24) = v8;
    goto LABEL_21;
  }
  v50[0] = 0;
  v52 = 0LL;
  *(__m128i *)v63 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(_OWORD *)&v63[4] = *(_OWORD *)v63;
  *(_OWORD *)&v63[8] = *(_OWORD *)v63;
  *(_OWORD *)&v63[12] = *(_OWORD *)v63;
  v33 = PrepareUnpinnedPathsFromSource(a1, a2, v8, v51, v54, v53, v11, 0, 0, 0, &v52, (__m128i *)v63, v50);
  v36 = v33;
  LODWORD(v28) = -1071774925;
  if ( v33 == -1071774925 || (LODWORD(v28) = -1071774886, v33 == -1071774886) )
  {
    v37 = WdLogNewEntry5_WdDmmEvent(v35, v34);
    *(_QWORD *)(v37 + 24) = v11;
    *(_QWORD *)(v37 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v37);
  }
  else if ( v33 >= 0 )
  {
    v55 = 0LL;
    LOBYTE(v49) = 1;
    LOBYTE(v48) = 0;
    v39 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v56,
            (char *)a2,
            v8,
            v51,
            v54,
            v53,
            v11,
            v52,
            a6,
            D3DKMDT_VPPS_UNINITIALIZED,
            v48,
            v49,
            &v55);
    LODWORD(v28) = v39;
    if ( v39 >= 0 )
    {
      LODWORD(v28) = 0;
      v47 = v57;
      *a7 = v55;
      *v47 = v51;
      goto LABEL_33;
    }
    if ( v39 != -1071774970 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v46[3] = v11;
      v46[4] = a6->Width;
      v46[5] = a6->Height;
      v46[6] = a6->Format;
      v46[7] = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
      v32 = v46;
      goto LABEL_31;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
    v44[3] = a6->Width;
    v44[4] = a6->Height;
    v44[5] = a6->Format;
    v45 = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
    v44[7] = v11;
    v44[6] = v45;
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
    v38[3] = v11;
    v38[4] = a2;
    v38[5] = v36;
    WdLogEvent5_WdError(v38);
    LODWORD(v28) = v36;
  }
LABEL_33:
  if ( v58[0] )
    v60(v61, v8);
  return (unsigned int)v28;
}
