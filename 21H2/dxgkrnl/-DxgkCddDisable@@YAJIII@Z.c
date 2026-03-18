/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C01C1110
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0013A70 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013AD8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C001DF68 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C001E530 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001F014 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C01A3618 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C01A52B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C01B631C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C7600 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C770C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C01E96AC (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01E9C14 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C039CA5C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  char *v16; // r14
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // r9
  __int64 v22; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rcx
  DXGSESSIONMGR *v28; // rbx
  unsigned int v29; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v31; // eax
  struct _LUID *v32; // rsi
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v34; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  unsigned int v36; // r15d
  __int64 v37; // rsi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v39; // r9
  ADAPTER_RENDER *v40; // r10
  struct DXGDEVICE *v41; // rbx
  int v42; // eax
  ADAPTER_DISPLAY *v43; // rcx
  __int64 CurrentProcess; // rax
  const wchar_t *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rbx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rbx
  const wchar_t *v54; // r9
  __int64 v55; // rax
  __int64 LowPart; // rcx
  unsigned __int8 v57; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v59; // rcx
  _BYTE v60[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v61; // [rsp+58h] [rbp-A8h] BYREF
  int v62; // [rsp+60h] [rbp-A0h]
  int v63; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64; // [rsp+70h] [rbp-90h]
  char v65; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v66; // [rsp+80h] [rbp-80h]
  SESSION_VIEW *v67; // [rsp+88h] [rbp-78h]
  _BYTE v68[16]; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v69; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v70[80]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v71[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v72[64]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v73[88]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v74[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v75[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  _BYTE v76[88]; // [rsp+1E8h] [rbp+E8h] BYREF

  v63 = -1;
  v4 = (unsigned int)a3;
  v62 = a3;
  v5 = (unsigned int)a1;
  v64 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v65 = 1;
    v63 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 3003);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  v15 = (__int64)Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
    LODWORD(v5) = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v45 = L"0x%I64x Unexpected process 0x%I64x";
    v50 = PsGetCurrentProcess(v47, v46, v48, v49);
    v15 = 0LL;
LABEL_55:
    v52 = -1073741811LL;
LABEL_75:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v45, v52, v50, v15, 0LL, 0LL);
    goto LABEL_23;
  }
  v16 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v17 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *(_DWORD *)(v15 + 296) )
  {
    v18 = *(_QWORD *)(v15 + 280);
    v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
      && (v19 & 0x2000) == 0
      && (v19 & 0x1F) != 0 )
    {
      if ( (v19 & 0x1F) == 3 )
      {
        v20 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
        goto LABEL_12;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v20 = 0LL;
LABEL_12:
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  v61 = (struct DXGDEVICE *)v20;
  if ( !v20 )
  {
    v51 = v5;
    v50 = v5;
    LODWORD(v5) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v51, v15);
    v45 = L"0x%I64x Invalid hDevice=0x%I64x specified DXGPROCESS=0x%I64x";
    goto LABEL_55;
  }
  v22 = *(_QWORD *)(v20 + 1848);
  if ( !v22 || !*(_QWORD *)(v22 + 2792) )
  {
    WdLogSingleEntry1(1LL, 627LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayAdapter != NULL) && (pDisplayAdapter->IsDisplayAdapter())",
      627LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v20, 1, v21, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v74);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v22 + 2792)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v22 + 2792),
        *(struct ADAPTER_RENDER **)(v20 + 16));
    if ( *(_DWORD *)(v22 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v22 + 2792), v4, 0LL);
    LODWORD(v5) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v76);
    COREACCESS::~COREACCESS((COREACCESS *)v75);
LABEL_20:
    Global = DXGGLOBAL_GetGlobal();
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
    if ( (int)v5 < 0 )
    {
      v61 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v22 + 404), v4, v5, 0LL);
    }
    LODWORD(v5) = 0;
    goto LABEL_23;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    WdLogSingleEntry1(1LL, 668LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(OLD_MODE_CHANGE == Win32kCommand) || ((PRESERVE_ACTIVE_VIDPN | OLD_MODE_CHANGE) == Win32kCommand)",
      668LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v28 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v28
    || (v29 = PsGetCurrentProcessSessionId(v27),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v28, v29)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v27);
    LODWORD(v5) = -1073741811;
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v45 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    v52 = (unsigned int)PsGetCurrentProcessSessionId(v59);
    v50 = -1073741811LL;
    v15 = 0LL;
    goto LABEL_75;
  }
  v60[0] = 0;
  v31 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v60, 1);
  LODWORD(v5) = v31;
  if ( v31 < 0 )
  {
    v53 = v31;
    WdLogSingleEntry1(2LL, v31);
    v54 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    v55 = 0LL;
    LowPart = 0LL;
  }
  else
  {
    v32 = (struct _LUID *)(v22 + 404);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v22 + 404),
                              v4);
    v67 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v36 = *((_DWORD *)PrimaryDisplaySource + 4);
          v37 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v34, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v37 + 404),
                                                   &v61,
                                                   0LL,
                                                   0LL,
                                                   0);
          v5 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            WdLogSingleEntry3(
              2LL,
              *(int *)(v37 + 408),
              *(unsigned int *)(v37 + 404),
              CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
              *(int *)(v37 + 408),
              *(unsigned int *)(v37 + 404),
              v5,
              0LL,
              0LL);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v68,
              v61);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v71, (__int64)v61, 1, v39, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v71);
            if ( *(_DWORD *)(v37 + 200) != 1 && *((_DWORD *)v61 + 144) == 4
              || *(_DWORD *)(v37 + 200) == 4
              || (v66 = v61, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v61 + 2) + 16LL) + 200LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v73);
              COREACCESS::~COREACCESS((COREACCESS *)v72);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v68);
            }
            else
            {
              if ( *(_QWORD *)(v37 + 2800) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v61 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler((__int64)v40, 8u, v36, 0);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v40, 1 << v36, 0, 1 << v36, 0);
              }
              if ( *(_DWORD *)(v37 + 200) == 1 )
              {
                if ( (a2 & 4) != 0 )
                {
                  v41 = v61;
                  v42 = DmmDisablePathsFromVidPnSource(v61, v36);
                }
                else
                {
                  v57 = *(_BYTE *)(v37 + 2705)
                     && *(_BYTE *)(v37 + 2624)
                     && *(_DWORD *)(v37 + 412) != 1297040209
                     && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 216) + 64LL) + 1152LL);
                  v41 = v61;
                  v42 = DmmRemovePathsFromVidPnSource(v61, v36, v57);
                }
              }
              else
              {
                v41 = v61;
                v42 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v37 + 2792), v61, v36);
              }
              LODWORD(v5) = v42;
              memset(v70, 0, sizeof(v70));
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v37 + 2792), v36, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v37 + 2792),
                v36,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v70);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v37 + 2792), v36, 0);
              v43 = *(ADAPTER_DISPLAY **)(v37 + 2792);
              v69 = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v43, v36, &v69);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v37 + 2792), v36, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v73);
              COREACCESS::~COREACCESS((COREACCESS *)v72);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v68);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v66 + 2), v61);
            }
          }
          v34 = v67;
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v62;
        v32 = (struct _LUID *)(v22 + 404);
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v32, v4, 1u);
      if ( v60[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_20;
    }
    v53 = v4;
    WdLogSingleEntry3(2LL, v4, *(int *)(v22 + 408), v32->LowPart);
    v55 = *(int *)(v22 + 408);
    v54 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = v32->LowPart;
    LODWORD(v5) = 0;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v54, v53, v55, LowPart, 0LL, 0LL);
  if ( v60[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63);
  if ( v65 )
  {
    LOBYTE(v24) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v63);
  }
  return (unsigned int)v5;
}
