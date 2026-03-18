/*
 * XREFs of ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C01B6150
 * Callers:
 *     ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C01B60F0 (-DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C032E230 (DxgkWin32kSetPointerPosition.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C01B633C (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01E3200 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 */

__int64 __fastcall DxgkSetPointerPosition(
        struct DXGADAPTER *a1,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        __int64 a3,
        int a4,
        int a5)
{
  unsigned int v5; // esi
  int v7; // r12d
  int v8; // ebx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  unsigned int v13; // ebx
  DXGADAPTER *v14; // rdi
  struct _LUID v15; // rbx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rdi
  unsigned int v18; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v20; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v22; // rcx
  struct SESSION_VIEW *v23; // rdi
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rbx
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // r8
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v29; // r9d
  unsigned int v30; // eax
  __int64 HighPart; // rdi
  __int64 v32; // rcx
  unsigned int v33; // eax
  int v34; // eax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  struct _LUID v39; // [rsp+50h] [rbp-20h] BYREF
  int v40; // [rsp+58h] [rbp-18h] BYREF
  __int64 v41; // [rsp+60h] [rbp-10h]
  char v42; // [rsp+68h] [rbp-8h]
  DXGADAPTER *v43; // [rsp+A8h] [rbp+38h] BYREF

  v40 = -1;
  v5 = 0;
  v7 = a5;
  v8 = a3;
  v41 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v42 = 1;
    v40 = 3011;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3011);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 3011);
  if ( !a2 )
  {
    v5 = -1073741811;
    goto LABEL_21;
  }
  if ( !v8 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    v43 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, 0LL, 0LL, &v43, (unsigned __int64 *)&v39, 0);
    v13 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, a1, a2->VidPnSourceId, PairingAdapters);
      v5 = v13;
      goto LABEL_21;
    }
    v14 = v43;
    if ( !v43 )
    {
      WdLogSingleEntry1(1LL, 2046LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 2046LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( !*((_QWORD *)v14 + 349) )
    {
      WdLogSingleEntry1(1LL, 2047LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        2047LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = *(struct _LUID *)((char *)v14 + 404);
    v39 = v15;
    DXGADAPTER::ReleaseReference(v14);
    v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    if ( !v17
      || (v18 = PsGetCurrentProcessSessionId(v16),
          (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v17, v18)) == 0LL) )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16);
      v5 = -1073741811;
      WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
      v37 = PsGetCurrentProcessSessionId(v36);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v37,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_21;
    }
    LOBYTE(v43) = 0;
    v20 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43, 0);
    v5 = v20;
    if ( v20 < 0 )
    {
      WdLogSingleEntry1(4LL, v20);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                SessionDataForSpecifiedSession,
                                &v39,
                                a2->VidPnSourceId);
      v5 = 0;
      v23 = SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
        if ( !PrimaryDisplaySource )
        {
LABEL_18:
          v25 = (_BYTE)v43 == 0;
          goto LABEL_19;
        }
        if ( !v7 )
        {
          do
          {
            if ( (int)SetPointerPositionForDisplaySource(PrimaryDisplaySource, v23, a2, a4, 0) < 0 )
              break;
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
          }
          while ( PrimaryDisplaySource );
          goto LABEL_18;
        }
        v29 = a2->VidPnSourceId;
        while ( *((_DWORD *)PrimaryDisplaySource + 4) != v29
             || a1 != *(struct DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) )
        {
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource);
          if ( !PrimaryDisplaySource )
            goto LABEL_18;
        }
        v34 = SetPointerPositionForDisplaySource(PrimaryDisplaySource, v23, a2, a4, v7);
        if ( v34 >= 0 )
          goto LABEL_18;
        v5 = v34;
      }
      else
      {
        v30 = PsGetCurrentProcessSessionId(v22);
        HighPart = v39.HighPart;
        v5 = -1073741811;
        WdLogSingleEntry5(2LL, a2->VidPnSourceId, v39.HighPart, v15.LowPart, v30, -1073741811LL);
        v33 = PsGetCurrentProcessSessionId(v32);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Cannot find the session view for VidPn source 0x%I64x on adapter 0x%I64x%08I64x in session 0x%I64x, r"
                    "eturning 0x%I64x.",
          a2->VidPnSourceId,
          HighPart,
          v15.LowPart,
          v33,
          -1073741811LL);
      }
    }
    v25 = (_BYTE)v43 == 0;
LABEL_19:
    if ( !v25 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_21;
  }
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
    OUTPUTDUPL_MGR::ProcessPointerPositionChange(RemoteOutputDuplMgr, a2);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v40);
  return v5;
}
