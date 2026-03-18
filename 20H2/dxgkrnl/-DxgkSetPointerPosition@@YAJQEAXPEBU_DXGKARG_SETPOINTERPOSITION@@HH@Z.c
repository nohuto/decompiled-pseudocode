/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C012BEB4
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C01658B0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C027D160 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0019C88 (-SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039544 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01138D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C011DEA8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C011E798 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0120588 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0120730 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0125AB8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C012C56C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C014A93C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C015B25C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C015BFB8 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C015FA20 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C01666BC (-GetSavedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0211D64 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C027BE90 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
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
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  _QWORD *v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  _QWORD *v99; // rcx
  const void *pPixels; // rax
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  INT v107; // eax
  __int64 v108; // rax
  int v109; // r8d
  int v110; // edx
  __int64 v111; // rdx
  __int64 v112; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rbx
  __int64 v114; // r8
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // rbx
  _QWORD *v119; // rax
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  _QWORD *v124; // rax
  __int64 v125; // rax
  __int64 v126; // rdx
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct DXGADAPTER **v128; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v129; // [rsp+28h] [rbp-D8h]
  __int64 v130; // [rsp+30h] [rbp-D0h]
  __int64 v131; // [rsp+38h] [rbp-C8h]
  bool v132; // [rsp+40h] [rbp-C0h]
  bool v133; // [rsp+41h] [rbp-BFh]
  char v134; // [rsp+42h] [rbp-BEh] BYREF
  char IsVirtualModeSuportDisabled; // [rsp+43h] [rbp-BDh]
  int v136; // [rsp+44h] [rbp-BCh]
  int v137; // [rsp+48h] [rbp-B8h]
  int CurrentOrientation; // [rsp+4Ch] [rbp-B4h]
  struct _LUID v139; // [rsp+50h] [rbp-B0h] BYREF
  SESSION_VIEW *v140; // [rsp+58h] [rbp-A8h] BYREF
  int v141; // [rsp+60h] [rbp-A0h]
  __int64 v142; // [rsp+64h] [rbp-9Ch]
  char v143[8]; // [rsp+70h] [rbp-90h] BYREF
  char v144; // [rsp+78h] [rbp-88h]
  int v145; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v146; // [rsp+88h] [rbp-78h]
  int v147; // [rsp+90h] [rbp-70h] BYREF
  __int64 v148; // [rsp+98h] [rbp-68h]
  char v149; // [rsp+A0h] [rbp-60h]
  __int128 v150; // [rsp+A8h] [rbp-58h]
  __int128 v151; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v152; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_SETPOINTERPOSITION v153; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v154[144]; // [rsp+E0h] [rbp-20h] BYREF

  v147 = -1;
  v4 = a1;
  v146 = a1;
  v145 = a4;
  v5 = a3;
  v148 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v149 = 1;
    v147 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(2LL, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v149 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v147, 3011LL);
  v152 = 0LL;
  v153 = 0LL;
  v151 = 0LL;
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
  v140 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v4, VidPnSourceId, 0LL, 0LL, &v140, (unsigned __int64 *)&v139, 0);
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
  v14 = v140;
  if ( !v140 )
  {
    v85 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v85 + 24) = 1790LL;
    WdLogEvent5_WdAssertion(v85);
  }
  if ( !*((_QWORD *)v14 + 337) )
  {
    v86 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v86 + 24) = 1791LL;
    WdLogEvent5_WdAssertion(v86);
  }
  v15 = *(struct _LUID *)((char *)v14 + 316);
  v139 = v15;
  DXGADAPTER::ReleaseReference(v14);
  v20 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 102);
  if ( v20 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
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
    *(_QWORD *)(v87 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v89, v88);
    *(_QWORD *)(v87 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v87);
    goto LABEL_76;
  }
  v134 = 0;
  v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v134, 0);
  v26 = v23;
  if ( v23 < 0 )
  {
    v90 = WdLogNewEntry5_WdEvent(v25, v24);
    *(_QWORD *)(v90 + 24) = v26;
    WdLogEvent5_WdEvent(v90);
    goto LABEL_132;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v139,
                            a2->VidPnSourceId);
  v140 = (SESSION_VIEW *)SessionViewFromSource;
  v30 = (SESSION_VIEW *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v92 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v92[3] = a2->VidPnSourceId;
    v92[4] = v139.HighPart;
    v92[5] = v15.LowPart;
    LODWORD(v26) = -1073741811;
    v92[6] = (unsigned int)PsGetCurrentProcessSessionId(v94, v93);
    v92[7] = -1073741811LL;
    WdLogEvent5_WdError(v92);
    goto LABEL_132;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
  if ( !PrimaryDisplaySource )
  {
LABEL_73:
    if ( v134 )
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
      v95 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v95 + 24) = 1839LL;
      WdLogEvent5_WdAssertion(v95);
    }
    if ( !*(_QWORD *)(v33 + 2696) )
    {
      v96 = WdLogNewEntry5_WdAssertion(v31, v7);
      *(_QWORD *)(v96 + 24) = 1840LL;
      WdLogEvent5_WdAssertion(v96);
    }
    v153 = *a2;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v154, (struct DXGADAPTER *const)v33, 0LL);
    v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v154, 0LL);
    v37 = v34;
    if ( v34 >= 0 )
      break;
    v97 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
    v97[3] = *(int *)(v33 + 320);
    v97[4] = *(unsigned int *)(v33 + 316);
    v97[5] = v37;
    WdLogEvent5_WdError(v97);
LABEL_72:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154, v38);
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, PrimaryDisplaySource);
    if ( !PrimaryDisplaySource )
      goto LABEL_73;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v143, (struct DXGFASTMUTEX *const)(*(_QWORD *)(v33 + 2696) + 400LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v143);
  if ( v145 )
  {
    v98 = *((unsigned int *)PrimaryDisplaySource + 937);
    if ( *(_QWORD *)((char *)PrimaryDisplaySource + 3748) == -1LL
      || (v98 = (unsigned int)(a2->X + v98), (int)v98 < *((_DWORD *)v30 + 6))
      || (int)v98 >= *((_DWORD *)v30 + 8)
      || (v38 = (unsigned int)(a2->Y + *((_DWORD *)PrimaryDisplaySource + 938)), (int)v38 < *((_DWORD *)v30 + 7))
      || (int)v38 >= *((_DWORD *)v30 + 9) )
    {
      v99 = (_QWORD *)WdLogNewEntry5_WdError(v98, v38);
      v99[3] = *(int *)(v33 + 320);
      v99[4] = *(unsigned int *)(v33 + 316);
      pPixels = (const void *)*((unsigned int *)PrimaryDisplaySource + 4);
      goto LABEL_129;
    }
  }
  if ( (*(_DWORD *)(v33 + 348) & 0x100) == 0 && (**(_DWORD **)(v33 + 2600) & 8) != 0 )
  {
LABEL_70:
    if ( v144 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v143, v38);
    goto LABEL_72;
  }
  v153.VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(
          *(ADAPTER_DISPLAY **)(v33 + 2696),
          *((unsigned int *)PrimaryDisplaySource + 4)) )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    v82[3] = -1073741823LL;
    v82[4] = v153.VidPnSourceId;
    v83 = *(_BYTE *)&v153.Flags.0 & 1;
    v82[6] = v4;
    v82[5] = v83;
LABEL_68:
    ADAPTER_DISPLAY::SavePointerInfo(
      *(ADAPTER_DISPLAY **)(v33 + 2696),
      v153.VidPnSourceId,
      *(_BYTE *)&v153.Flags.0 & 1,
      v153.X,
      v153.Y,
      a2->X,
      a2->Y);
    if ( PrimaryDisplaySource == SESSION_VIEW::GetPrimaryDisplaySource(v30) )
    {
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v143, v38);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v154);
      v129 = (unsigned __int64 *)_lambda_b9a5656a752cedcbf1444dc35c6078d9_::_lambda_invoker_cdecl_;
      HIDWORD(v128) = HIDWORD(a2);
      OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(_DXGKARG_SETPOINTERPOSITION const *),_DXGKARG_SETPOINTERPOSITION const *>::RunForAdapter(
        v33,
        v77,
        a2->VidPnSourceId);
    }
    goto LABEL_70;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v131) = v153.Flags.0;
    LODWORD(v130) = v153.Y;
    LODWORD(v129) = v153.X;
    LODWORD(v128) = v153.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer(v40, &EventSetPointerPosition, v41, v4, v128, v129, v130, v131);
  }
  v43 = *((unsigned int *)PrimaryDisplaySource + 267);
  v132 = 1;
  v133 = 1;
  if ( (_DWORD)v43 == -1 )
  {
    v47 = -1073741811;
    goto LABEL_41;
  }
  v44 = *(_QWORD *)(v33 + 2696);
  if ( v44 )
  {
    v45 = *(struct _FAST_MUTEX **)(v44 + 96);
    IsVirtualModeSuportDisabled = 0;
    if ( !v45 )
    {
      v103 = WdLogNewEntry5_WdError(0LL, v39);
      *(_QWORD *)(v103 + 24) = v33;
      WdLogEvent5_WdError(v103);
      v47 = -1073741811;
      goto LABEL_103;
    }
    v139 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v45, (unsigned int)v43, 1, (struct DXGMONITOR **)&v139);
    v47 = MonitorInstance;
    if ( MonitorInstance == -1073741275 )
    {
      v81 = WdLogNewEntry5_WdDmmEvent(v40, v39);
      *(_QWORD *)(v81 + 24) = v43;
      *(_QWORD *)(v81 + 32) = v33;
      WdLogEvent5_WdDmmEvent(v81);
    }
    else
    {
      if ( MonitorInstance >= 0 )
      {
        v48 = v139;
        if ( !*(_QWORD *)&v139 || *(_DWORD *)(*(_QWORD *)&v139 + 432LL) != 1 )
        {
          v105 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v105);
        }
        if ( !*(_QWORD *)&v48 )
        {
          v106 = WdLogNewEntry5_WdAssertion(v40, v39);
          WdLogEvent5_WdAssertion(v106);
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
        v133 = 1;
        v132 = 1;
      }
      else
      {
        v133 = *(_BYTE *)(v44 + 250) == 0;
        v132 = *(_BYTE *)(v44 + 249) == 0;
      }
LABEL_41:
      if ( v47 >= 0 )
        goto LABEL_42;
      goto LABEL_101;
    }
LABEL_103:
    v104 = WdLogNewEntry5_WdAssertion(v40, v39);
    *(_QWORD *)(v104 + 24) = v47;
    WdLogEvent5_WdAssertion(v104);
    goto LABEL_41;
  }
  v101 = WdLogNewEntry5_WdError(v40, v39);
  *(_QWORD *)(v101 + 24) = 9255LL;
  WdLogEvent5_WdError(v101);
  v47 = -1073741811;
LABEL_101:
  v102 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
  v102[3] = *((unsigned int *)PrimaryDisplaySource + 4);
  v102[4] = *(int *)(v33 + 320);
  v102[5] = *(unsigned int *)(v33 + 316);
  v102[6] = v47;
  WdLogEvent5_WdError(v102);
LABEL_42:
  if ( v132 && v133 || (*(_BYTE *)&v153.Flags.0 & 1) == 0 )
  {
LABEL_65:
    if ( (int)ADAPTER_DISPLAY::DdiSetPointerPosition(*(ADAPTER_DISPLAY **)(v33 + 2696), &v153) < 0 )
    {
      v125 = WdLogNewEntry5_WdAssertion(v76, v75);
      *(_QWORD *)(v125 + 24) = 2018LL;
      WdLogEvent5_WdAssertion(v125);
    }
    v4 = v146;
    v30 = v140;
    goto LABEL_68;
  }
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                         *((_QWORD *)PrimaryDisplaySource + 1),
                         *((unsigned int *)PrimaryDisplaySource + 4),
                         v132);
  SavedCursor = DISPLAY_SOURCE::GetSavedCursor(PrimaryDisplaySource, 0);
  v52 = SavedCursor;
  if ( SavedCursor->pPixels )
  {
    Width = SavedCursor->Width;
    if ( Width <= *(_DWORD *)(v33 + 2016) && SavedCursor->Height <= *(_DWORD *)(v33 + 2020) )
    {
      v54 = *((_DWORD *)PrimaryDisplaySource + 165) - *((_DWORD *)PrimaryDisplaySource + 163);
      v55 = *((_DWORD *)v140 + 8) - *((_DWORD *)v140 + 6);
      v56 = *((_DWORD *)PrimaryDisplaySource + 166) - *((_DWORD *)PrimaryDisplaySource + 164);
      v57 = *(_OWORD *)((char *)PrimaryDisplaySource + 652);
      v58 = *((_DWORD *)PrimaryDisplaySource + 169);
      v59 = *((_DWORD *)v140 + 9) - *((_DWORD *)v140 + 7);
      v60 = *((_BYTE *)PrimaryDisplaySource + 668) == 0;
      v61 = *((_QWORD *)PrimaryDisplaySource + 84);
      v142 = *((_QWORD *)PrimaryDisplaySource + 84);
      v139.LowPart = v132;
      v150 = v57;
      v136 = v54;
      v137 = v56;
      if ( v60 )
      {
        v62 = DWORD1(v150);
        v63 = v150;
        v142 = *((_QWORD *)&v150 + 1);
      }
      else
      {
        v56 = v58;
        v137 = v58;
        v63 = 0;
        v54 = v61;
        v62 = 0;
        v136 = v61;
      }
      v64 = CurrentOrientation;
      X = a2->X;
      if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
      {
        v66 = v56 * X / v55;
        v67 = v136 * a2->Y;
      }
      else
      {
        v66 = v54 * X / v55;
        v67 = v56 * a2->Y;
      }
      v68 = (unsigned int)(v67 >> 31);
      v141 = v66;
      v69 = v67 / v59;
      CurrentOrientation = v67 / v59;
      if ( v139.LowPart )
      {
        v153.X = v66 + v63;
        v107 = v69 + v62;
        goto LABEL_117;
      }
      switch ( v64 )
      {
        case 2:
          v70 = v69 + v63;
          v110 = v62 - v66;
          break;
        case 3:
          v70 = v136 + v63 - v66 - Width;
          v110 = v62 - v69;
          break;
        case 4:
          v72 = v66 + v62;
          v71 = v137;
          v109 = v63 - v69;
          v73 = v136;
          v70 = v136 + v109 - Width;
          v153.X = v70;
LABEL_59:
          v153.Y = v72;
          if ( (signed int)(v70 + v52->Width) >= v63
            && v70 <= (int)v142
            && (signed int)(v72 + v52->Height) >= v62
            && v72 <= SHIDWORD(v142) )
          {
LABEL_63:
            FillClipParams(v52, PrimaryDisplaySource, &v153, (struct CURSOR_CLIP_PARAMS *)&v151);
            if ( HIDWORD(v152) )
            {
              ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(PrimaryDisplaySource, 0);
              if ( !ClippedCursor->pPixels
                || ClippedCursor->Width > *(_DWORD *)(v33 + 2016)
                || ClippedCursor->Height > *(_DWORD *)(v33 + 2020) )
              {
                v99 = (_QWORD *)WdLogNewEntry5_WdError(v112, v111);
                v99[3] = ClippedCursor->Width;
                v99[4] = ClippedCursor->Height;
                pPixels = ClippedCursor->pPixels;
                goto LABEL_129;
              }
              ClipCurrentCursor(v52, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v151);
              ClippedCursor->VidPnSourceId = *((_DWORD *)PrimaryDisplaySource + 4);
              v115 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v33 + 2696), ClippedCursor, v114);
              v118 = v115;
              if ( v115 < 0 )
              {
                v119 = (_QWORD *)WdLogNewEntry5_WdError(v117, v116);
                v119[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v119[4] = *(int *)(v33 + 320);
                v119[5] = *(unsigned int *)(v33 + 316);
                v119[6] = v118;
                WdLogEvent5_WdError(v119);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 1;
            }
            else if ( *((_BYTE *)PrimaryDisplaySource + 726) )
            {
              v120 = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v33 + 2696), v52, v74);
              v123 = v120;
              if ( v120 < 0 )
              {
                v124 = (_QWORD *)WdLogNewEntry5_WdError(v122, v121);
                v124[3] = *((unsigned int *)PrimaryDisplaySource + 4);
                v124[4] = *(int *)(v33 + 320);
                v124[5] = *(unsigned int *)(v33 + 316);
                v124[6] = v123;
                WdLogEvent5_WdError(v124);
              }
              *((_BYTE *)PrimaryDisplaySource + 726) = 0;
            }
            goto LABEL_65;
          }
          v153.X = v63 + v73 / 2;
          v107 = v62 + v71 / 2;
LABEL_117:
          v153.Y = v107;
          goto LABEL_63;
        default:
          if ( v64 != 1 )
          {
            LODWORD(v68) = v67 % v59;
            v108 = WdLogNewEntry5_WdAssertion((unsigned int)(v64 - 3), v68);
            *(_QWORD *)(v108 + 24) = 686LL;
            WdLogEvent5_WdAssertion(v108);
          }
          v70 = v63 + v141;
          v71 = v137;
          v72 = v62 + CurrentOrientation;
          v153.X = v63 + v141;
LABEL_58:
          v73 = v136;
          goto LABEL_59;
      }
      v71 = v137;
      v153.X = v70;
      v72 = v137 + v110 - v52->Height;
      goto LABEL_58;
    }
  }
  v99 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
  v99[3] = v52->Width;
  v99[4] = v52->Height;
  pPixels = v52->pPixels;
LABEL_129:
  v99[5] = pPixels;
  WdLogEvent5_WdError(v99);
  if ( v144 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v143, v126);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v154, v126);
LABEL_132:
  if ( v134 )
    DxgkReleaseSessionModeChangeLock(v91, v7);
LABEL_76:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v147, v7);
  if ( v149 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v78, &EventProfilerExit, v79, v147);
  return (unsigned int)v26;
}
