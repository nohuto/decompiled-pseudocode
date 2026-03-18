/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHHH@Z @ 0x1C01A32D0
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C01A3250 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C032E420 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C01A455C (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1C01A4940 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01A54B4 (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C032589C (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8)
{
  int v12; // r15d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  int v15; // ebx
  struct DXGADAPTER *v16; // rbx
  DXGSESSIONMGR *v17; // rbx
  unsigned int v18; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v20; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v22; // r12
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  int v24; // r10d
  struct DISPLAY_SOURCE *NextDisplaySource; // rdi
  struct _DXGKARG_SETPOINTERPOSITION *v26; // r13
  bool v27; // al
  int v28; // eax
  SESSION_VIEW *v29; // rdx
  unsigned int v30; // r14d
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DISPLAY_SOURCE *i; // rax
  struct DISPLAY_SOURCE *v35; // r13
  ADAPTER_DISPLAY **v36; // rdi
  int v37; // eax
  unsigned int v38; // eax
  __int64 LowPart; // rbx
  __int64 HighPart; // rdi
  unsigned int v41; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v42; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v43; // eax
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // rdi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v48; // eax
  bool v49; // [rsp+50h] [rbp-B0h]
  struct _LUID v50; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A0h]
  struct DXGADAPTER *v52; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION *v53; // [rsp+70h] [rbp-90h] BYREF
  char v54; // [rsp+78h] [rbp-88h]
  int v55; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h]
  char v57; // [rsp+90h] [rbp-70h]
  struct _DXGKARG_SETPOINTERPOSITION v58; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v59[144]; // [rsp+B0h] [rbp-50h] BYREF

  v55 = -1;
  v51 = a4;
  v53 = a2;
  v56 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v57 = 1;
    v55 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 3012);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 3012);
  v12 = 0;
  v58 = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_45;
  v58 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, a3, a4, a5);
    goto LABEL_27;
  }
  if ( a3->Flags.Value >= 8 )
  {
    WdLogSingleEntry2(2LL, a3->Flags.Value, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"invalid Flags specified: 0x%I64x DXGADAPTER=0x%I64x",
      a3->Flags.Value,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
LABEL_45:
    v15 = -1073741811;
LABEL_46:
    v30 = v15;
    goto LABEL_28;
  }
  VidPnSourceId = a3->VidPnSourceId;
  v52 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, &v52, (unsigned __int64 *)&v50, 0);
  v15 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, a1, a3->VidPnSourceId, PairingAdapters);
    goto LABEL_46;
  }
  v16 = v52;
  if ( !v52 )
  {
    WdLogSingleEntry1(1LL, 1460LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1460LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)v16 + 349) )
  {
    WdLogSingleEntry1(1LL, 1461LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
      1461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v50 = *(struct _LUID *)((char *)v16 + 404);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v52 + 2), v52);
  v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v17
    || (v18 = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, v18)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    v15 = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v48 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v48,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_46;
  }
  v20 = DxgkAcquireSessionModeChangeLock(0LL);
  v12 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry1(4LL, v20);
    goto LABEL_27;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v50,
                            a3->VidPnSourceId);
  v22 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v38 = PsGetCurrentProcessSessionId();
    LowPart = v50.LowPart;
    v30 = -1071774937;
    HighPart = v50.HighPart;
    WdLogSingleEntry5(2LL, a3->VidPnSourceId, v50.HighPart, v50.LowPart, v38, -1071774937LL);
    v41 = PsGetCurrentProcessSessionId();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, returning 0x%I64x.",
      a3->VidPnSourceId,
      HighPart,
      LowPart,
      v41,
      -1071774937LL);
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_28;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
  NextDisplaySource = PrimaryDisplaySource;
  if ( a8 != v24 )
  {
    v12 = -1073741823;
    if ( PrimaryDisplaySource )
    {
      v42 = a3->VidPnSourceId;
      while ( *((_DWORD *)NextDisplaySource + 4) != v42
           || a1 != *(struct DXGADAPTER **)(*((_QWORD *)NextDisplaySource + 1) + 16LL) )
      {
        NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v22, NextDisplaySource);
        if ( !NextDisplaySource )
          goto LABEL_30;
      }
      v12 = SetPointerShapeForDisplaySource(NextDisplaySource, v53, a3, v22, a1, v51, a5, v24, a7 != v24, 1);
LABEL_25:
      if ( v12 >= 0 )
        goto LABEL_26;
    }
    goto LABEL_30;
  }
  if ( PrimaryDisplaySource )
  {
    v26 = v53;
    v27 = a7 != v24;
    v49 = a7 != v24;
    while ( 1 )
    {
      v28 = SetPointerShapeForDisplaySource(NextDisplaySource, v26, a3, v22, a1, v51, a5, v24, v27, v24);
      LOBYTE(v24) = 0;
      v12 = v28;
      if ( v28 < 0 )
        break;
      v29 = (SESSION_VIEW *)*((_QWORD *)NextDisplaySource + 7);
      NextDisplaySource = 0LL;
      if ( v29 != (SESSION_VIEW *)((char *)v22 + 48) )
        NextDisplaySource = (SESSION_VIEW *)((char *)v29 - 56);
      v27 = v49;
      if ( !NextDisplaySource )
        goto LABEL_25;
    }
LABEL_30:
    for ( i = SESSION_VIEW::GetPrimaryDisplaySource(v22); ; i = SESSION_VIEW::GetNextDisplaySource(v22, v35) )
    {
      v35 = i;
      if ( !i )
        break;
      v36 = *(ADAPTER_DISPLAY ***)(*((_QWORD *)i + 1) + 16LL);
      if ( !v36 )
      {
        WdLogSingleEntry1(1LL, 1544LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1544LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( !v36[349] )
      {
        WdLogSingleEntry1(1LL, 1545LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          1545LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, (struct DXGADAPTER *const)v36, 0LL);
      v37 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59, 0LL);
      if ( v37 < 0 )
      {
        v44 = v50.LowPart;
        v45 = v50.HighPart;
        v46 = v37;
        WdLogSingleEntry3(2LL, v50.HighPart, v50.LowPart, v37);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to aquire adapter access on adapter = 0x%I64x%08I64x , Status = 0x%I64x.",
          v45,
          v44,
          v46,
          0LL,
          0LL);
      }
      else
      {
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v53, (ADAPTER_DISPLAY *)((char *)v36[349] + 464), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v53);
        if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v36[349], *((_DWORD *)v35 + 4)) )
        {
          v43 = *((_DWORD *)v35 + 4);
          *(_QWORD *)&v58.X = 0LL;
          v58.Flags.Value &= ~1u;
          v58.VidPnSourceId = v43;
          ADAPTER_DISPLAY::DdiSetPointerPosition(v36[349], &v58);
        }
        *((_DWORD *)v35 + 943) = -1;
        *((_DWORD *)v35 + 944) = -1;
        *((_BYTE *)v35 + 765) = 0;
        if ( v54 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v53);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59);
    }
  }
LABEL_26:
  DxgkReleaseSessionModeChangeLock();
LABEL_27:
  v30 = v12;
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55);
  if ( v57 )
  {
    LOBYTE(v31) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v55);
  }
  return v30;
}
