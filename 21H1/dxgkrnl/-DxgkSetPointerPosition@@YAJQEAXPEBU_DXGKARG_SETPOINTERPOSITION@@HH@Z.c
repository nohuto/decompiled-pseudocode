/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C013627C
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C0136220 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C0279CE0 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0011F40 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C00387B4 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C00F05C8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0116074 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0117204 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C011C210 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C0136934 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0136B4C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0136CDC (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0150DA0 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C020ECC4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0278A10 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4)
{
  struct DXGADAPTER *v4; // r13
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 VidPnSourceId; // rdx
  int PairingAdapters; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  SESSION_VIEW *v14; // rdi
  struct _LUID v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGSESSIONMGR *v20; // rdi
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r14
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  SESSION_VIEW *v30; // r15
  __int64 v31; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // r13
  struct _FAST_MUTEX *v45; // rcx
  int MonitorInstance; // eax
  int v47; // ebx
  struct _LUID v48; // r15
  struct _DXGKARG_SETPOINTERSHAPE *SavedCursor; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v52; // r15
  UINT Width; // r11d
  int v54; // edx
  int v55; // r9d
  int v56; // r10d
  __int128 v57; // xmm0
  int v58; // r13d
  int v59; // ecx
  bool v60; // zf
  int v61; // r8d
  signed int v62; // ebx
  signed int v63; // r13d
  int v64; // r8d
  INT X; // eax
  int v66; // r9d
  int v67; // eax
  __int64 v68; // rdx
  int v69; // r10d
  INT v70; // r8d
  int v71; // r9d
  INT v72; // edx
  int v73; // r10d
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v81; // rax
  _QWORD *v82; // rcx
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rdi
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rcx
  _QWORD *v97; // rcx
  const void *pPixels; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  INT v105; // eax
  __int64 v106; // rax
  int v107; // r8d
  int v108; // edx
  __int64 v109; // rdx
  __int64 v110; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rbx
  __int64 v112; // r8
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rbx
  _QWORD *v117; // rax
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rbx
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rdx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v126; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v127; // [rsp+28h] [rbp-D8h]
  __int64 v128; // [rsp+30h] [rbp-D0h]
  __int64 v129; // [rsp+38h] [rbp-C8h]
  bool v130; // [rsp+40h] [rbp-C0h]
  bool v131; // [rsp+41h] [rbp-BFh]
  char v132; // [rsp+42h] [rbp-BEh] BYREF
  char IsVirtualModeSuportDisabled; // [rsp+43h] [rbp-BDh]
  int v134; // [rsp+44h] [rbp-BCh]
  int v135; // [rsp+48h] [rbp-B8h]
  int CurrentOrientation; // [rsp+4Ch] [rbp-B4h]
  struct _LUID v137; // [rsp+50h] [rbp-B0h] BYREF
  SESSION_VIEW *v138; // [rsp+58h] [rbp-A8h] BYREF
  int v139; // [rsp+60h] [rbp-A0h]
  __int64 v140; // [rsp+64h] [rbp-9Ch]
  char v141[8]; // [rsp+70h] [rbp-90h] BYREF
  char v142; // [rsp+78h] [rbp-88h]
  int v143; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v144; // [rsp+88h] [rbp-78h]
  int v145; // [rsp+90h] [rbp-70h] BYREF
  __int64 v146; // [rsp+98h] [rbp-68h]
  char v147; // [rsp+A0h] [rbp-60h]
  __int128 v148; // [rsp+A8h] [rbp-58h]
  __int128 v149; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v150; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_SETPOINTERPOSITION v151; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v152[144]; // [rsp+E0h] [rbp-20h] BYREF

  v145 = -1;
  v4 = a1;
  v144 = a1;
  v143 = a4;
  v5 = a3;
  v146 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v147 = 1;
    v145 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(2LL, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v147 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v145, 3011LL);
  v150 = 0LL;
  v151 = 0LL;
  v149 = 0LL;
  if ( !a2 )
  {
    LODWORD(v26) = -1073741811;
    goto LABEL_76;
  }
  if ( v5 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v8, v7);
    if ( RemoteOutputDuplMgr )
      OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
    goto LABEL_75;
  }
  VidPnSourceId = a2->VidPnSourceId;
  v138 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v4, VidPnSourceId, 0LL, 0LL, &v138, (unsigned __int64 *)&v137, 0);
  v13 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v84 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
    v84[3] = v4;
    v84[4] = a2->VidPnSourceId;
    v84[5] = v13;
    WdLogEvent5_WdEvent(v84);
    LODWORD(v26) = v13;
    goto LABEL_76;
  }
  v14 = v138;
  if ( !v138 )
  {
    v85 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v85 + 24) = 1790LL;
    WdLogEvent5_WdAssertion(v85);
  }
  if ( !*((_QWORD *)v14 + 334) )
  {
    v86 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v86 + 24) = 1791LL;
    WdLogEvent5_WdAssertion(v86);
  }
  v15 = *(struct _LUID *)((char *)v14 + 316);
  v137 = v15;
  DXGADAPTER::ReleaseReferenceNoTracking(v14);
  v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 88);
  if ( v20 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v20, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v87 = WdLogNewEntry5_WdError(v19, v18);
    LODWORD(v26) = -1073741811;
    *(_QWORD *)(v87 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v88);
    *(_QWORD *)(v87 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v87);
    goto LABEL_76;
  }
  v132 = 0;
  v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v132, 0);
  v26 = v23;
  if ( v23 < 0 )
  {
    v89 = WdLogNewEntry5_WdEvent(v25, v24);
    *(_QWORD *)(v89 + 24) = v26;
    WdLogEvent5_WdEvent(v89);
    goto LABEL_132;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v137,
                            a2->VidPnSourceId);
  v138 = (SESSION_VIEW *)SessionViewFromSource;
  v30 = (SESSION_VIEW *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v91 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v91[3] = a2->VidPnSourceId;
    v91[4] = v137.HighPart;
    v91[5] = v15.LowPart;
    LODWORD(v26) = -1073741811;
    v91[6] = (unsigned int)PsGetCurrentProcessSessionId(v92);
    v91[7] = -1073741811LL;
    WdLogEvent5_WdError(v91);
    goto LABEL_132;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
LABEL_73:
    if ( v132 )
      DxgkReleaseSessionModeChangeLock(v31, v7);
LABEL_75:
    LODWORD(v26) = 0;
    goto LABEL_76;
  }
  LODWORD(v26) = -1073741811;
  while ( 1 )
  {
    v33 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
    if ( !v33 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v93 + 24) = 1839LL;
      WdLogEvent5_WdAssertion(v93);
    }
    if ( !*(_QWORD *)(v33 + 2672) )
    {
      v94 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v94 + 24) = 1840LL;
      WdLogEvent5_WdAssertion(v94);
    }
    v151 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v152, (struct DXGADAPTER *const)v33, 0LL);
    v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v152, 0LL);
    v37 = v34;
    if ( v34 >= 0 )
      break;
    v95 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v95[3] = *(int *)(v33 + 320);
    v95[4] = *(unsigned int *)(v33 + 316);
    v95[5] = v37;
    WdLogEvent5_WdError(v95);
LABEL_72:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v152, v38);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
      goto LABEL_73;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v141, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v33 + 2672) + 400LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v141);
  if ( v143 )
  {
    v96 = *((unsigned int *)PrimaryDisplaySource + 937);
    if ( *(_QWORD *)((char *)PrimaryDisplaySource + 3748) == -1LL
      || (v96 = (unsigned int)(a2->X + v96), (int)v96 < *((_DWORD *)v30 + 6))
      || (int)v96 >= *((_DWORD *)v30 + 8)
      || (v38 = (unsigned int)(a2->Y + *((_DWORD *)PrimaryDisplaySource + 938)), (int)v38 < *((_DWORD *)v30 + 7))
      || (int)v38 >= *((_DWORD *)v30 + 9) )
    {
      v97 = (_QWORD *)WdLogNewEntry5_WdError(v96, v38);
      v97[3] = *(int *)(v33 + 320);
      v97[4] = *(unsigned int *)(v33 + 316);
      pPixels = (const void *)*((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_129;
    }
  }
  if ( (*(_DWORD *)(v33 + 348) & 0x100) == 0 && (**(_DWORD **)(v33 + 2576) & 8) != 0 )
  {
LABEL_70:
    if ( v142 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v141, v38);
    goto LABEL_72;
  }
  v151.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
          *(ADAPTER_DISPLAY **)(v33 + 2672),
          *((unsigned int *)PrimaryDisplaySource + 4)) )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    v82[3] = -1073741823LL;
    v82[4] = v151.VidPnSourceId;
    v83 = *(_BYTE *)&v151.Flags.0 & 1;
    v82[6] = v4;
    v82[5] = v83;
LABEL_68:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v33 + 2672),
      v151.VidPnSourceId,
      *(_BYTE *)&v151.Flags.0 & 1,
      v151.X,
      v151.Y,
      a2->X,
      a2->Y);
    if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v30) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v141, v38);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v152);
      v127 = (unsigned __int64 *)_lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_;
      HIDWORD(v126) = HIDWORD(a2);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        v33,
        v77,
        a2->VidPnSourceId);
    }
    goto LABEL_70;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v129) = v151.Flags.0;
    LODWORD(v128) = v151.Y;
    LODWORD(v127) = v151.X;
    LODWORD(v126) = v151.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v40, &EventSetPointerPosition, v41, v4, v126, v127, v128, v129);
  }
  v43 = *((unsigned int *)PrimaryDisplaySource + 267);
  v130 = 1;
  v131 = 1;
  if ( (_DWORD)v43 == -1 )
  {
    v47 = -1073741811;
    goto LABEL_41;
  }
  v44 = *(_QWORD *)(v33 + 2672);
  if ( v44 )
  {
    v45 = *(struct _FAST_MUTEX **)(v44 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v45 )
    {
      v101 = WdLogNewEntry5_WdError(0LL, v39);
      *(_QWORD *)(v101 + 24) = v33;
      WdLogEvent5_WdError(v101);
      v47 = -1073741811;
      goto LABEL_103;
    }
    v137 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v45, (unsigned int)v43, 1, (struct DXGMONITOR **)&v137);
    v47 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v81 = WdLogNewEntry5_WdDmmEvent(v40);
      *(_QWORD *)(v81 + 24) = v43;
      *(_QWORD *)(v81 + 32) = v33;
      WdLogEvent5_WdDmmEvent(v81);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v48 = v137;
        if ( !*(_QWORD *)&v137 || *(_DWORD *)(*(_QWORD *)&v137 + 432LL) != 1 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v103);
        }
        if ( !*(_QWORD *)&v48 )
        {
          v104 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v104);
        }
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite((PERESOURCE)(*(_QWORD *)&v48 + 296LL), 1u);
        IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(*(DXGMONITOR **)&v48);
        ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)&v48 + 296LL));
        KeLeaveCriticalRegion();
        v47 = 0;
        goto LABEL_39;
      }
      if ( MonitorInstance != -1073741632 )
        goto LABEL_82;
    }
    v47 = 0;
LABEL_82:
    if ( v47 >= 0 )
    {
LABEL_39:
      if ( IsVirtualModeSuportDisabled )
      {
        v131 = 1;
        v130 = 1;
      }
      else
      {
        v131 = *(_BYTE *)(v44 + 250) == 0;
        v130 = *(_BYTE *)(v44 + 249) == 0;
      }
LABEL_41:
      if ( v47 >= 0 )
        goto LABEL_42;
      goto LABEL_101;
    }
LABEL_103:
    v102 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v102 + 24) = v47;
    WdLogEvent5_WdAssertion(v102);
    goto LABEL_41;
  }
  v99 = WdLogNewEntry5_WdError(v40, v39);
  *(_QWORD *)(v99 + 24) = 9255LL;
  WdLogEvent5_WdError(v99);
  v47 = -1073741811;
LABEL_101:
  v100 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
  v100[3] = *((unsigned int *)PrimaryDisplaySource + 4);
  v100[4] = *(int *)(v33 + 320);
  v100[5] = *(unsigned int *)(v33 + 316);
  v100[6] = v47;
  WdLogEvent5_WdError(v100);
LABEL_42:
  if ( v130 && v131 || (*(_BYTE *)&v151.Flags.0 & 1) == 0 )
  {
LABEL_65:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v33 + 2672), &v151) < 0 )
    {
      v123 = WdLogNewEntry5_WdAssertion(v76, v75);
      *(_QWORD *)(v123 + 24) = 2018LL;
      WdLogEvent5_WdAssertion(v123);
    }
    v4 = v144;
    v30 = v138;
    goto LABEL_68;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                         *((_QWORD *)PrimaryDisplaySource + 1),
                         *((unsigned int *)PrimaryDisplaySource + 4),
                         v130);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource, 0);
  v52 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v33 + 1992) && SavedCursor->Height <= *(_DWORD *)(v33 + 1996) )
    {
      v54 = *((_DWORD *)PrimaryDisplaySource + 165) - *((_DWORD *)PrimaryDisplaySource + 163);
      v55 = *((_DWORD *)v138 + 8) - *((_DWORD *)v138 + 6);
      v56 = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
      v57 = *(_OWORD *)((char *)PrimaryDisplaySource + 652);
      v58 = *((_DWORD *)PrimaryDisplaySource + 169);
      v59 = *((_DWORD *)v138 + 9) - *((_DWORD *)v138 + 7);
      v60 = *((_BYTE *)PrimaryDisplaySource + 668) == 0;
      v61 = *((_QWORD *)PrimaryDisplaySource + 84);
      v140 = *((_QWORD *)PrimaryDisplaySource + 84);
      v137.LowPart = v130;
      v148 = v57;
      v134 = v54;
      v135 = v56;
      if ( v60 )
      {
        v62 = DWORD1(v148);
        v63 = v148;
        v140 = *((_QWORD *)&v148 + 1);
      }
      else
      {
        v56 = v58;
        v135 = v58;
        v63 = 0;
        v54 = v61;
        v62 = 0;
        v134 = v61;
      }
      v64 = CurrentOrientation;
      X = a2->X;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v66 = v56 * X / v55;
        v67 = v134 * a2->Y;
      }
      else
      {
        v66 = v54 * X / v55;
        v67 = v56 * a2->Y;
      }
      v68 = (unsigned int)(v67 >> 31);
      v139 = v66;
      v69 = v67 / v59;
      CurrentOrientation = v67 / v59;
      if ( v137.LowPart )
      {
        v151.X = v66 + v63;
        v105 = v69 + v62;
        goto LABEL_117;
      }
      switch ( v64 )
      {
        case 2:
          v70 = v69 + v63;
          v108 = v62 - v66;
          break;
        case 3:
          v70 = v134 + v63 - v66 - Width;
          v108 = v62 - v69;
          break;
        case 4:
          v72 = v66 + v62;
          v71 = v135;
          v107 = v63 - v69;
          v73 = v134;
          v70 = v134 + v107 - Width;
          v151.X = v70;
LABEL_59:
          v151.Y = v72;
          if ( (signed int)(v70 + v52->Width) >= v63
            && v70 <= (int)v140
            && (signed int)(v72 + v52->Height) >= v62
            && v72 <= SHIDWORD(v140) )
          {
LABEL_63:
            FillClipParams(v52, PrimaryDisplaySource, &v151, (struct CURSOR_CLIP_PARAMS *)&v149);
            if ( HIDWORD(v150) )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource, 0);
              if ( !ClippedCursor->pPixels
                || ClippedCursor->Width > *(_DWORD *)(v33 + 1992)
                || ClippedCursor->Height > *(_DWORD *)(v33 + 1996) )
              {
                v97 = (_QWORD *)WdLogNewEntry5_WdError(v110, v109);
                v97[3] = ClippedCursor->Width;
                v97[4] = ClippedCursor->Height;
                pPixels = ClippedCursor->pPixels;
                goto LABEL_129;
              }
              ClipCurrentCursor(v52, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v149);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v113 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v33 + 2672), ClippedCursor, v112);
              v116 = v113;
              if ( v113 < 0 )
              {
                v117 = (_QWORD *)WdLogNewEntry5_WdError(v115, v114);
                v117[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v117[4] = *(int *)(v33 + 320);
                v117[5] = *(unsigned int *)(v33 + 316);
                v117[6] = v116;
                WdLogEvent5_WdError(v117);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 726) )
            {
              v118 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v33 + 2672), v52, v74);
              v121 = v118;
              if ( v118 < 0 )
              {
                v122 = (_QWORD *)WdLogNewEntry5_WdError(v120, v119);
                v122[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v122[4] = *(int *)(v33 + 320);
                v122[5] = *(unsigned int *)(v33 + 316);
                v122[6] = v121;
                WdLogEvent5_WdError(v122);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 0;
            }
            goto LABEL_65;
          }
          v151.X = v63 + v73 / 2;
          v105 = v62 + v71 / 2;
LABEL_117:
          v151.Y = v105;
          goto LABEL_63;
        default:
          if ( v64 != 1 )
          {
            LODWORD(v68) = v67 % v59;
            v106 = WdLogNewEntry5_WdAssertion((unsigned int)(v64 - 3), v68);
            *(_QWORD *)(v106 + 24) = 686LL;
            WdLogEvent5_WdAssertion(v106);
          }
          v70 = v63 + v139;
          v71 = v135;
          v72 = v62 + CurrentOrientation;
          v151.X = v63 + v139;
LABEL_58:
          v73 = v134;
          goto LABEL_59;
      }
      v71 = v135;
      v151.X = v70;
      v72 = v135 + v108 - v52->Height;
      goto LABEL_58;
    }
  }
  v97 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
  v97[3] = v52->Width;
  v97[4] = v52->Height;
  pPixels = v52->pPixels;
LABEL_129:
  v97[5] = pPixels;
  WdLogEvent5_WdError(v97);
  if ( v142 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v141, v124);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v152, v124);
LABEL_132:
  if ( v132 )
    DxgkReleaseSessionModeChangeLock(v90, v7);
LABEL_76:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v145, v7);
  if ( v147 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v78, &EventProfilerExit, v79, v145);
  return (unsigned int)v26;
}
