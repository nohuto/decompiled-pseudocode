/*
 * XREFs of ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0151658
 * Callers:
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C01514D0 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087D0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0xxqqqqqqqqx_EtwWriteTransfer @ 0x1C00193AC (McTemplateK0xxqqqqqqqqx_EtwWriteTransfer.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C00194C4 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0019518 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryDmmInterface @ 0x1C00DE2F0 (DxgkQueryDmmInterface.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E8A34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C0125580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C0151A7C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0159200 (DxgkQueryMonitorTypeLockHeld.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0257500 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C0259ADC (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C029A508 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02D7940 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 */

__int64 __fastcall GetActiveVidPnBasedDisplayModeList(
        DXGADAPTER *a1,
        __int64 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4)
{
  char v5; // r15
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 VidPnSourceId; // rsi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  struct _DXGDMM_INTERFACE *v16; // r13
  struct D3DKMDT_HVIDPN__ *v17; // r14
  __int64 (__fastcall *v18)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  ADAPTER_DISPLAY *v25; // rcx
  int **SessionViewOwner; // rax
  SESSION_VIEW *v27; // r12
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r15d
  char v32; // r15
  void **v33; // r9
  bool v34; // zf
  unsigned int *v35; // r13
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct DXGGLOBAL *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct DXGGLOBAL *v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct DXGGLOBAL *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DXGGLOBAL *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct DXGGLOBAL *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rcx
  struct DXGGLOBAL *v57; // r13
  __int64 v58; // rdx
  __int64 v59; // rcx
  struct DXGGLOBAL *v60; // r12
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  struct DXGGLOBAL *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r15
  __int64 v76; // rdx
  char v77; // r13
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  unsigned __int64 v83; // rcx
  __int64 v84; // rax
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r12
  _QWORD *v89; // rax
  __int64 v90; // rax
  _QWORD *v91; // rax
  unsigned int v92; // r14d
  __int64 v93; // r15
  __int64 v94; // r12
  __int64 v95; // rcx
  __int64 v96; // r8
  _QWORD *v97; // rax
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v98; // [rsp+20h] [rbp-E0h]
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v99; // [rsp+28h] [rbp-D8h]
  unsigned int v100[2]; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v101[8]; // [rsp+38h] [rbp-C8h]
  unsigned __int8 v102[8]; // [rsp+40h] [rbp-C0h]
  __int64 v103; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v104; // [rsp+50h] [rbp-B0h]
  unsigned int *v105; // [rsp+58h] [rbp-A8h]
  unsigned __int8 *v106; // [rsp+60h] [rbp-A0h]
  _BYTE v107[4]; // [rsp+70h] [rbp-90h] BYREF
  int v108; // [rsp+74h] [rbp-8Ch] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v109; // [rsp+78h] [rbp-88h] BYREF
  struct DXGGLOBAL *v110; // [rsp+80h] [rbp-80h]
  unsigned __int64 v111; // [rsp+88h] [rbp-78h] BYREF
  struct DXGGLOBAL *v112; // [rsp+90h] [rbp-70h]
  struct _DXGDMM_INTERFACE *v113; // [rsp+98h] [rbp-68h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v114; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v115; // [rsp+A8h] [rbp-58h] BYREF
  void *v116; // [rsp+B0h] [rbp-50h] BYREF
  struct DXGGLOBAL *v117; // [rsp+B8h] [rbp-48h]
  __int64 v118; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v119[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v120; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v121)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v122; // [rsp+E0h] [rbp-20h]
  int v123; // [rsp+E8h] [rbp-18h]
  DXGADAPTER *v124; // [rsp+F0h] [rbp-10h] BYREF
  int v125; // [rsp+F8h] [rbp-8h]
  int v126; // [rsp+FCh] [rbp-4h]
  char v127; // [rsp+100h] [rbp+0h]
  void *v128[2]; // [rsp+108h] [rbp+8h]
  __int64 v129; // [rsp+118h] [rbp+18h]
  int v130; // [rsp+120h] [rbp+20h]
  char v131; // [rsp+124h] [rbp+24h]
  void *v132; // [rsp+128h] [rbp+28h]
  _QWORD v133[5]; // [rsp+130h] [rbp+30h] BYREF
  int v134; // [rsp+158h] [rbp+58h]
  bool v135; // [rsp+15Ch] [rbp+5Ch]
  char v136; // [rsp+15Dh] [rbp+5Dh]
  int v137; // [rsp+160h] [rbp+60h]
  int v138; // [rsp+164h] [rbp+64h]
  char v139; // [rsp+168h] [rbp+68h]
  void *v140[2]; // [rsp+170h] [rbp+70h]
  __int64 v141; // [rsp+180h] [rbp+80h]
  int v142; // [rsp+188h] [rbp+88h]
  char v143; // [rsp+18Ch] [rbp+8Ch]
  void *v144[2]; // [rsp+190h] [rbp+90h]
  void *v145[2]; // [rsp+1A0h] [rbp+A0h]
  int v146; // [rsp+1B0h] [rbp+B0h]
  char v147; // [rsp+1B4h] [rbp+B4h]
  void *v148; // [rsp+1B8h] [rbp+B8h]
  _BYTE v149[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v150[16]; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int v151[16]; // [rsp+210h] [rbp+110h] BYREF

  v110 = (struct DXGGLOBAL *)a4;
  v112 = (struct DXGGLOBAL *)a3;
  v5 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v149,
    (union _LARGE_INTEGER *)Global + 10);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v149);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9, v8) + 6);
  VidPnSourceId = a3->VidPnSourceId;
  v113 = 0LL;
  v12 = DxgkQueryDmmInterface(a1, v11, &v113);
  v15 = v12;
  if ( v12 < 0 )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v73[3] = v15;
    v73[4] = a3->hAdapter;
    v73[5] = a1;
    v73[6] = VidPnSourceId;
    WdLogEvent5_WdError(v73);
    return (unsigned int)v15;
  }
  v16 = v113;
  v109 = 0LL;
  v118 = 0LL;
  v17 = 0LL;
  v120 = 0LL;
  v18 = (__int64 (__fastcall *)(DXGADAPTER *, __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)v113 + 6);
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0;
  v119[0] = 0;
  v19 = v18(a1, &v118, &v109);
  v15 = v19;
  if ( v19 < 0 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v74[3] = a1;
    v74[4] = v15;
    goto LABEL_43;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v119,
    v118,
    *((_QWORD *)v16 + 8),
    (__int64)a1);
  v17 = v120;
  v114 = 0LL;
  v115 = 0LL;
  v22 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v109)(
          v120,
          &v114,
          &v115);
  v15 = v22;
  if ( v22 < 0 )
  {
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v74[3] = v15;
    v74[4] = v17;
    v74[5] = a1;
    v74[6] = VidPnSourceId;
    v74[7] = v109;
    goto LABEL_43;
  }
  v25 = (ADAPTER_DISPLAY *)*((_QWORD *)a1 + 334);
  v15 = 0LL;
  v111 = 0LL;
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v25, (unsigned int)VidPnSourceId);
  v27 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner)
    || v5
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v27),
        v76 = *(_QWORD *)(*((_QWORD *)a1 + 334) + 112LL) + 3968 * VidPnSourceId,
        PrimaryDisplaySource != (struct DISPLAY_SOURCE *)v76) )
  {
LABEL_6:
    *(__m128i *)v150 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *(_OWORD *)&v150[4] = *(_OWORD *)v150;
    *(_OWORD *)&v150[8] = *(_OWORD *)v150;
    *(_OWORD *)&v150[12] = *(_OWORD *)v150;
    v28 = PrepareUnpinnedPathsFromSource(
            v16,
            a1,
            v17,
            v109,
            v114,
            v115,
            VidPnSourceId,
            1u,
            1u,
            1u,
            &v111,
            (unsigned int (*)[16])v150,
            0LL);
    v15 = v28;
    v31 = -1071774925;
    if ( v28 == -1071774925 || (v31 = -1071774886, v28 == -1071774886) )
    {
      v90 = WdLogNewEntry5_WdDmmEvent(v30);
      *(_QWORD *)(v90 + 24) = VidPnSourceId;
      *(_QWORD *)(v90 + 32) = a1;
      WdLogEvent5_WdDmmEvent(v90);
      LODWORD(v15) = v31;
      goto LABEL_15;
    }
    v32 = 0;
    if ( v28 >= 0 )
    {
      v15 = v111;
      goto LABEL_10;
    }
    v74 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v74[3] = VidPnSourceId;
    v74[4] = a1;
    v74[5] = v15;
LABEL_43:
    WdLogEvent5_WdError(v74);
    goto LABEL_15;
  }
  v77 = 0;
  do
  {
    v78 = *((_QWORD *)PrimaryDisplaySource + 1);
    v107[0] = 0;
    if ( *(DXGADAPTER **)(v78 + 16) != a1 )
    {
      v79 = WdLogNewEntry5_WdAssertion(v78, v76);
      *(_QWORD *)(v79 + 24) = 4904LL;
      WdLogEvent5_WdAssertion(v79);
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                (_DWORD)a1,
                *((_DWORD *)PrimaryDisplaySource + 267),
                0,
                0,
                0LL,
                (__int64)v107,
                0LL,
                0LL,
                0LL) < 0 )
    {
      v82 = WdLogNewEntry5_WdAssertion(v81, v80);
      *(_QWORD *)(v82 + 24) = 4918LL;
      WdLogEvent5_WdAssertion(v82);
    }
    if ( v15 )
    {
      if ( v77 != v107[0] )
        goto LABEL_36;
      v83 = *(unsigned int *)(*((_QWORD *)a1 + 334) + 80LL);
      if ( v15 >= v83 )
      {
        v84 = WdLogNewEntry5_WdAssertion(v83, v80);
        *(_QWORD *)(v84 + 24) = 4929LL;
        WdLogEvent5_WdAssertion(v84);
      }
      v150[v15++] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    else
    {
      v15 = 1LL;
      v77 = v107[0];
      v151[0] = *((_DWORD *)PrimaryDisplaySource + 267);
      v150[0] = *((_DWORD *)PrimaryDisplaySource + 4);
    }
    v111 = v15;
LABEL_36:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v27, PrimaryDisplaySource);
  }
  while ( PrimaryDisplaySource );
  if ( v15 <= 1 )
  {
    v16 = v113;
    goto LABEL_6;
  }
  v32 = 1;
  v85 = DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(a1, v150, v15, v17, v151);
  v88 = v85;
  if ( v85 < 0 )
  {
    v89 = (_QWORD *)WdLogNewEntry5_WdError(v87, v86);
    LODWORD(v15) = -1071775483;
    v89[3] = VidPnSourceId;
    v89[4] = a1;
    v89[5] = v88;
    v89[6] = -1071775483LL;
    WdLogEvent5_WdError(v89);
    goto LABEL_15;
  }
LABEL_10:
  v133[0] = a1;
  v133[1] = v17;
  v136 = 1;
  v138 = 0;
  v139 = 0;
  v142 = 0;
  v98 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)(((unsigned __int64)v110 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v110 >> 64));
  v143 = 1;
  v146 = 0;
  v33 = (void **)(((unsigned __int64)v110 + 8) & -(__int64)(v110 != 0LL));
  v147 = 1;
  v34 = *((_QWORD *)a1 + 335) == 0LL;
  v35 = (unsigned int *)((char *)v112 + 16);
  v133[2] = v109;
  v137 = -1;
  v133[3] = v114;
  v133[4] = v115;
  v134 = *((_DWORD *)v112 + 1);
  v141 = 0LL;
  v135 = v34;
  v148 = 0LL;
  v110 = (struct DXGGLOBAL *)((char *)v112 + 8);
  *(_OWORD *)v140 = 0LL;
  *(_OWORD *)v144 = 0LL;
  *(_OWORD *)v145 = 0LL;
  v36 = (int)OBTAIN_MODES_ON_SOURCE::operator()(
               (__int64)v133,
               (struct _D3DKMT_DISPLAYMODE **)v112 + 1,
               (unsigned int *)v112 + 4,
               v33,
               (unsigned int *)v98);
  operator delete[](v145[0]);
  operator delete[](v148);
  operator delete[](v140[1]);
  operator delete[](v144[0]);
  if ( (int)v36 < 0 )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v39);
    v91[3] = v36;
    v91[4] = v17;
    v91[5] = a1;
    v91[6] = VidPnSourceId;
    v91[7] = v15;
    WdLogEvent5_WdWarning(v91);
    LODWORD(v15) = v36;
  }
  else
  {
    if ( v32 )
    {
      v92 = 0;
      if ( v15 )
      {
        v38 = 0LL;
        do
        {
          v93 = v151[v38];
          v116 = 0LL;
          v108 = 0;
          v124 = a1;
          v125 = *((_DWORD *)v112 + 1);
          v130 = 0;
          v132 = 0LL;
          v129 = 0LL;
          v126 = v93;
          v127 = 1;
          *(_OWORD *)v128 = 0LL;
          v131 = 1;
          v94 = (int)OBTAIN_PREFERRED_MODES_ON_PATH::operator()(&v124, &v116, &v108);
          operator delete[](v128[1]);
          operator delete[](v132);
          if ( (int)v94 < 0
            || v116
            && (v94 = (int)CombineModeList((_DWORD)v35, (_DWORD)v110, v108, (_DWORD)v116, 0),
                operator delete[](v116),
                (int)v94 < 0) )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdWarning(v95, v37, v96);
            v97[3] = VidPnSourceId;
            v97[4] = v93;
            v97[5] = a1;
            v97[6] = v94;
            WdLogEvent5_WdWarning(v97);
          }
          v38 = ++v92;
        }
        while ( v92 < v15 );
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v38, v37) + 1, *v35);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 8) != 0 )
    {
      v42 = DXGGLOBAL::GetGlobal(v41, v40);
      v45 = DXGGLOBAL::GetGlobal(v44, v43);
      v48 = DXGGLOBAL::GetGlobal(v47, v46);
      v51 = DXGGLOBAL::GetGlobal(v50, v49);
      v54 = DXGGLOBAL::GetGlobal(v53, v52);
      v57 = DXGGLOBAL::GetGlobal(v56, v55);
      v60 = DXGGLOBAL::GetGlobal(v59, v58);
      v110 = DXGGLOBAL::GetGlobal(v62, v61);
      v117 = DXGGLOBAL::GetGlobal(v64, v63);
      v112 = DXGGLOBAL::GetGlobal(v66, v65);
      v69 = DXGGLOBAL::GetGlobal(v68, v67);
      LODWORD(v106) = *((_DWORD *)v45 + 19);
      LODWORD(v105) = *((_DWORD *)v48 + 18);
      LODWORD(v104) = *((_DWORD *)v51 + 15);
      LODWORD(v103) = *((_DWORD *)v54 + 14);
      *(_DWORD *)v102 = *((_DWORD *)v57 + 11);
      *(_DWORD *)v101 = *((_DWORD *)v60 + 10);
      v100[0] = *((_DWORD *)v110 + 9);
      LODWORD(v99) = *((_DWORD *)v117 + 6);
      McTemplateK0xxqqqqqqqqx_EtwWriteTransfer(
        *(unsigned int *)v101,
        v70,
        v71,
        *((_QWORD *)v69 + 1),
        *((_QWORD *)v112 + 2),
        v99,
        *(_QWORD *)v100,
        *(_QWORD *)v101,
        *(_QWORD *)v102,
        v103,
        v104,
        v105,
        v106,
        *((_QWORD *)v42 + 10));
    }
    v17 = v120;
    LODWORD(v15) = 0;
  }
LABEL_15:
  if ( v119[0] )
    v121(v122, v17);
  return (unsigned int)v15;
}
