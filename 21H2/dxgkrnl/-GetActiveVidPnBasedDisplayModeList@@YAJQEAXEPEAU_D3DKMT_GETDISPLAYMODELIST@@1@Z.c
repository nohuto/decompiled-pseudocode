/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01D31C8
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01D2F7C (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C00194CC (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0019520 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x1C0019560 (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryDmmInterface @ 0x1C01BEC10 (DxgkQueryDmmInterface.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01D2410 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01D35DC (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02F50F4 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C02F8944 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C0347FB0 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C039A6D8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        char a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  union _LARGE_INTEGER *Global; // rax
  __int64 VidPnSourceId; // rdi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r14
  struct _DXGDMM_INTERFACE *v11; // rbx
  struct D3DKMDT_HVIDPN__ *v12; // r12
  __int64 (__fastcall *v13)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v14; // eax
  int v15; // eax
  ADAPTER_DISPLAY *v16; // rcx
  unsigned __int64 v17; // rbx
  struct SESSION_VIEW *SessionViewOwner; // rax
  SESSION_VIEW *v19; // r13
  int v20; // eax
  int v21; // ebx
  bool v22; // zf
  void **p_pModeList; // r9
  unsigned int *p_ModeCount; // rax
  UINT *v25; // r13
  int v26; // r13d
  int v27; // r12d
  int v28; // r15d
  int v29; // r14d
  unsigned int v30; // esi
  int v31; // edi
  __int64 v32; // rbx
  struct DXGGLOBAL *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  const wchar_t *v38; // r9
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  char v40; // r12
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rbx
  unsigned int v44; // r14d
  __int64 v45; // rcx
  __int64 v46; // r15
  __int64 v47; // r12
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v48; // [rsp+20h] [rbp-E0h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v49; // [rsp+28h] [rbp-D8h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v50; // [rsp+28h] [rbp-D8h]
  unsigned int v51[2]; // [rsp+30h] [rbp-D0h]
  __int64 v52; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v53[8]; // [rsp+38h] [rbp-C8h]
  __int64 v54; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v55[8]; // [rsp+40h] [rbp-C0h]
  struct _DXGDMM_VIDPN_INTERFACE *v56; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v57[8]; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v58; // [rsp+50h] [rbp-B0h]
  unsigned int *v59; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v60; // [rsp+60h] [rbp-A0h]
  char v62; // [rsp+70h] [rbp-90h]
  char v63[3]; // [rsp+71h] [rbp-8Fh] BYREF
  int v64; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v66; // [rsp+80h] [rbp-80h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v67; // [rsp+88h] [rbp-78h]
  struct _DXGDMM_INTERFACE *v68; // [rsp+90h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v69; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v70; // [rsp+A0h] [rbp-60h] BYREF
  void *v71; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST *v73; // [rsp+B8h] [rbp-48h]
  char v74[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct D3DKMDT_HVIDPN__ *v75; // [rsp+C8h] [rbp-38h]
  void (__fastcall *v76)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  int v78; // [rsp+E0h] [rbp-20h]
  DXGADAPTER *v79; // [rsp+F0h] [rbp-10h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  char v82; // [rsp+100h] [rbp+0h]
  void *v83[2]; // [rsp+108h] [rbp+8h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  int v85; // [rsp+120h] [rbp+20h]
  char v86; // [rsp+124h] [rbp+24h]
  void *v87; // [rsp+128h] [rbp+28h]
  _QWORD v88[5]; // [rsp+130h] [rbp+30h] BYREF
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v89; // [rsp+158h] [rbp+58h]
  bool v90; // [rsp+15Ch] [rbp+5Ch]
  char v91; // [rsp+15Dh] [rbp+5Dh]
  int v92; // [rsp+160h] [rbp+60h]
  int v93; // [rsp+164h] [rbp+64h]
  char v94; // [rsp+168h] [rbp+68h]
  void *v95[2]; // [rsp+170h] [rbp+70h]
  __int64 v96; // [rsp+180h] [rbp+80h]
  int v97; // [rsp+188h] [rbp+88h]
  char v98; // [rsp+18Ch] [rbp+8Ch]
  void *v99[2]; // [rsp+190h] [rbp+90h]
  void *v100[2]; // [rsp+1A0h] [rbp+A0h]
  int v101; // [rsp+1B0h] [rbp+B0h]
  char v102; // [rsp+1B4h] [rbp+B4h]
  void *v103; // [rsp+1B8h] [rbp+B8h]
  _BYTE v104[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v105[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v106[16]; // [rsp+210h] [rbp+110h] BYREF

  v67 = a4;
  v73 = a3;
  Global = (union _LARGE_INTEGER *)DXGGLOBAL_GetGlobal();
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v104, Global + 17);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v104);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL_GetGlobal() + 20);
  VidPnSourceId = a3->VidPnSourceId;
  v68 = 0LL;
  v9 = DxgkQueryDmmInterface(a1, v8, &v68);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry4(2LL, v9, a3->hAdapter, a1, VidPnSourceId);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x QueryDxgDmmInterface failed hAdapter=0x%I64x pAdapter=0x%I64x VidPnSourceId=0x%I64x",
      v10,
      a3->hAdapter,
      (__int64)a1,
      VidPnSourceId,
      0LL);
    return (unsigned int)v10;
  }
  v11 = v68;
  v66 = 0LL;
  v72 = 0LL;
  v12 = 0LL;
  v75 = 0LL;
  v13 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v68 + 6);
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0;
  v74[0] = 0;
  v14 = v13(a1, &v72, &v66);
  v10 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(2LL, a1, v14);
    v56 = 0LL;
    v38 = L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)";
    v54 = 0LL;
    v52 = 0LL;
    v50 = (struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)v10;
    v48 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)a1;
    goto LABEL_45;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v74,
    v72,
    *((_QWORD *)v11 + 8),
    (__int64)a1);
  v12 = v75;
  v69 = 0LL;
  v70 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v66)(
          v75,
          &v69,
          &v70);
  v10 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry5(2LL, v15, v12, a1, VidPnSourceId, v66);
    v38 = L"Status=0x%I64x pfnGetTopology failed hVidPn=0x%I64x pAdapter=0x%I64x VidPnSrcId=%0x%I64x pDmmVidPnInterface=0x%I64x";
    v56 = v66;
    v54 = VidPnSourceId;
    v52 = (__int64)a1;
    v50 = (struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *)v12;
    v48 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)v10;
    goto LABEL_45;
  }
  v16 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 349);
  v17 = 0LL;
  v65 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v16, VidPnSourceId);
  v19 = SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView(SessionViewOwner)
    || a2
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v19),
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)(*(_QWORD *)(*((_QWORD *)a1 + 349) + 128LL)
                                                        + 4000 * VidPnSourceId)) )
  {
LABEL_6:
    *(__m128i *)v105 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v105[4] = *(_OWORD *)v105;
    *(_OWORD *)&v105[8] = *(_OWORD *)v105;
    *(_OWORD *)&v105[12] = *(_OWORD *)v105;
    v20 = PrepareUnpinnedPathsFromSource(
            v68,
            a1,
            v12,
            v66,
            v69,
            v70,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v65,
            (unsigned int (*)[16])v105,
            0LL);
    v10 = v20;
    v21 = -1071774925;
    if ( v20 == -1071774925 || (v21 = -1071774886, v20 == -1071774886) )
    {
      WdLogSingleEntry2(7LL, VidPnSourceId, a1);
      LODWORD(v10) = v21;
      goto LABEL_17;
    }
    v62 = 0;
    if ( v20 >= 0 )
    {
      v17 = v65;
      goto LABEL_10;
    }
    WdLogSingleEntry3(2LL, VidPnSourceId, a1, v20);
    v56 = 0LL;
    v38 = L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)";
    v54 = 0LL;
    v52 = v10;
LABEL_44:
    v50 = a1;
    v48 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)VidPnSourceId;
LABEL_45:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v38, (__int64)v48, (__int64)v50, v52, v54, (__int64)v56);
    goto LABEL_17;
  }
  v40 = 0;
  do
  {
    v41 = *((_QWORD *)PrimaryDisplaySource + 1);
    v63[0] = 0;
    if ( *(DXGADAPTER **)(v41 + 16) != a1 )
    {
      WdLogSingleEntry1(1LL, 5046LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplaySource->GetAdapter() == pAdapter",
        5046LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (__int64)a1,
                *((_DWORD *)PrimaryDisplaySource + 272),
                0LL,
                0LL,
                0LL,
                v63,
                0LL,
                0LL,
                0LL,
                0LL) < 0 )
    {
      WdLogSingleEntry1(1LL, 5061LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status)", 5061LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( v17 )
    {
      if ( v40 != v63[0] )
        goto LABEL_38;
      if ( v17 >= *(unsigned int *)(*((_QWORD *)a1 + 349) + 96LL) )
      {
        WdLogSingleEntry1(1LL, 5072LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NumPathsFromSource < pAdapter->GetDisplayCore()->GetNumVidPnSources()",
          5072LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v105[v17++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v17 = 1LL;
      v40 = v63[0];
      v106[0] = *((_DWORD *)PrimaryDisplaySource + 272);
      v105[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v65 = v17;
LABEL_38:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v19, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  v12 = v75;
  if ( v17 <= 1 )
    goto LABEL_6;
  v62 = 1;
  v42 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v105, v17, v75, v106);
  if ( v42 < 0 )
  {
    v43 = v42;
    LODWORD(v10) = -1071775483;
    WdLogSingleEntry4(2LL, VidPnSourceId, a1, v42, -1071775483LL);
    v56 = 0LL;
    v38 = L"Failed to convert DWM clone to hardware clone from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x), retur"
           "ning 0x%I64x to rety the cross adapter clone way.";
    v54 = -1071775483LL;
    v52 = v43;
    goto LABEL_44;
  }
LABEL_10:
  v22 = *((_QWORD *)a1 + 350) == 0LL;
  v88[2] = v66;
  v88[3] = v69;
  v88[4] = v70;
  v89 = v73->VidPnSourceId;
  v96 = 0LL;
  v88[0] = a1;
  v88[1] = v12;
  v90 = v22;
  v91 = 1;
  v92 = -1;
  v93 = 0;
  v94 = 0;
  v97 = 0;
  v98 = 1;
  v101 = 0;
  v102 = 1;
  v103 = 0LL;
  *(_OWORD *)v95 = 0LL;
  *(_OWORD *)v99 = 0LL;
  *(_OWORD *)v100 = 0LL;
  if ( v67 )
  {
    p_pModeList = (void **)&v67->pModeList;
    p_ModeCount = &v67->ModeCount;
  }
  else
  {
    p_pModeList = 0LL;
    p_ModeCount = 0LL;
  }
  v25 = &v73->ModeCount;
  v67 = (struct _D3DKMT_GETDISPLAYMODELIST *)&v73->pModeList;
  v10 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (OBTAIN_MODES_ON_SOURCE *)v88,
               &v73->pModeList,
               &v73->ModeCount,
               p_pModeList,
               p_ModeCount);
  operator delete[](v100[0]);
  operator delete[](v103);
  operator delete[](v95[1]);
  operator delete[](v99[0]);
  if ( (int)v10 < 0 )
  {
    WdLogSingleEntry5(3LL, v10, v12, a1, VidPnSourceId, v17);
  }
  else
  {
    if ( v62 )
    {
      v44 = 0;
      if ( v17 )
      {
        v45 = 0LL;
        do
        {
          v46 = v106[v45];
          v71 = 0LL;
          v64 = 0;
          v79 = a1;
          v80 = v73->VidPnSourceId;
          v85 = 0;
          v87 = 0LL;
          v84 = 0LL;
          v81 = v46;
          v82 = 1;
          *(_OWORD *)v83 = 0LL;
          v86 = 1;
          v47 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v79, &v71, &v64);
          operator delete[](v83[1]);
          operator delete[](v87);
          if ( (int)v47 < 0
            || v71
            && (v47 = (int)CombineModeList((_DWORD)v25, (_DWORD)v67, v64, (_DWORD)v71, 0),
                operator delete[](v71),
                (int)v47 < 0) )
          {
            WdLogSingleEntry4(3LL, VidPnSourceId, v46, a1, v47);
          }
          v45 = ++v44;
        }
        while ( v44 < v17 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL_GetGlobal() + 8, *v25);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v67 = (struct _D3DKMT_GETDISPLAYMODELIST *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 17);
      v64 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 33);
      LODWORD(v65) = *((_DWORD *)DXGGLOBAL_GetGlobal() + 32);
      v26 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 29);
      v27 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 28);
      v28 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 25);
      v29 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 24);
      v30 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 23);
      v31 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 20);
      v32 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 9);
      v33 = DXGGLOBAL_GetGlobal();
      LODWORD(v60) = v64;
      LODWORD(v59) = v65;
      LODWORD(v58) = v26;
      *(_DWORD *)v57 = v27;
      *(_DWORD *)v55 = v28;
      *(_DWORD *)v53 = v29;
      v51[0] = v30;
      LODWORD(v49) = v31;
      McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
        v35,
        v34,
        v36,
        *((_QWORD *)v33 + 8),
        v32,
        v49,
        *(_QWORD *)v51,
        *(_QWORD *)v53,
        *(_QWORD *)v55,
        *(_QWORD *)v57,
        v58,
        v59,
        v60,
        v67);
    }
    v12 = v75;
    LODWORD(v10) = 0;
  }
LABEL_17:
  if ( v74[0] )
    v76(v77, v12);
  return (unsigned int)v10;
}
