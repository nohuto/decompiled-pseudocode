/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C00E06B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001850 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0001B04 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0001D88 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0001DE0 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0003F10 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000D088 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D304 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001993C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00DDF2C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00DECC4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E0B98 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C011DEA8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C012C56C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C013F06C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C0147464 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014750C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C014A93C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014AB30 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C014BA38 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0215168 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DD464 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rsi
  char *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v25; // rdx
  unsigned int v26; // edi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  DXGSESSIONMGR *v32; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _LUID *v38; // r14
  SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  SESSION_VIEW *v42; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  unsigned int v44; // r15d
  __int64 v45; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r9
  ADAPTER_RENDER *v50; // r10
  struct DXGDEVICE *v51; // r14
  int v52; // eax
  PERESOURCE **v53; // rcx
  ADAPTER_DISPLAY *v54; // rcx
  __int64 v55; // rbx
  _QWORD *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  unsigned __int8 v62; // r8
  _BYTE v63[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v64; // [rsp+38h] [rbp-C8h]
  int v65; // [rsp+40h] [rbp-C0h]
  int v66; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  char v68; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v69; // [rsp+60h] [rbp-A0h]
  SESSION_VIEW *v70; // [rsp+68h] [rbp-98h]
  _BYTE v71[16]; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v72; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v73[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v74; // [rsp+C0h] [rbp-40h]
  _BYTE v75[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v76[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v77[88]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v78[8]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v79[64]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v80[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v66 = -1;
  v4 = (unsigned int)a3;
  v65 = a3;
  v5 = (unsigned int)a1;
  v67 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v68 = 1;
    v66 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v66, 3003LL);
  Current = DXGPROCESS::GetCurrent();
  v9 = Current;
  if ( !Current )
  {
    v26 = -1073741811;
    v55 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v55 + 24) = -1073741811LL;
    *(_QWORD *)(v55 + 32) = PsGetCurrentProcess();
LABEL_61:
    v56 = (_QWORD *)v55;
    goto LABEL_62;
  }
  v10 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v11 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 < *((_DWORD *)v9 + 64) )
  {
    v12 = *((_QWORD *)v9 + 30);
    v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
      && (v13 & 0x2000) == 0
      && (v13 & 0x1F) != 0 )
    {
      v14 = v13 & 0x1F;
      if ( (_BYTE)v14 == 3 )
      {
        v15 = *(_QWORD *)(v12 + 16LL * (unsigned int)v11);
        goto LABEL_12;
      }
      v16 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v14);
      *(_QWORD *)(v16 + 24) = 267LL;
      WdLogEvent5_WdError(v16);
    }
  }
  v15 = 0LL;
LABEL_12:
  ExReleasePushLockSharedEx(v10, 0LL);
  KeLeaveCriticalRegion();
  v64 = (struct DXGDEVICE *)v15;
  if ( !v15 )
  {
    v26 = -1073741811;
    v56 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v56[3] = -1073741811LL;
    v56[4] = v5;
    v56[5] = v9;
LABEL_62:
    WdLogEvent5_WdError(v56);
    goto LABEL_23;
  }
  v20 = *(_QWORD *)(v15 + 1848);
  if ( !v20 || !*(_QWORD *)(v20 + 2696) )
  {
    v57 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v57 + 24) = 627LL;
    WdLogEvent5_WdAssertion(v57);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, v15, 1, v19, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v78);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v20 + 2696)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v20 + 2696),
        *(struct ADAPTER_RENDER **)(v15 + 16));
    if ( *(_DWORD *)(v20 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v20 + 2696), v4, 0LL);
    LODWORD(v21) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v80);
    COREACCESS::~COREACCESS((COREACCESS *)v79);
LABEL_20:
    Global = DXGGLOBAL::GetGlobal(v23, v22);
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 172), 0);
    if ( (int)v21 < 0 )
    {
      v64 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v20 + 316), v4, v21, 0LL);
    }
    v26 = 0;
    goto LABEL_23;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v58 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v58 + 24) = 668LL;
    WdLogEvent5_WdAssertion(v58);
  }
  v32 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v18, v17) + 102);
  if ( v32 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v32, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v55 = WdLogNewEntry5_WdError(v31, v30);
    v26 = -1073741811;
    *(_QWORD *)(v55 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v55 + 32) = -1073741811LL;
    goto LABEL_61;
  }
  v63[0] = 0;
  v35 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v63, 1);
  v21 = v35;
  if ( v35 < 0 )
  {
    v59 = WdLogNewEntry5_WdError(v37, v36);
    *(_QWORD *)(v59 + 24) = v21;
    WdLogEvent5_WdError(v59);
  }
  else
  {
    v38 = (struct _LUID *)(v20 + 316);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v20 + 316),
                              v4);
    v70 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v44 = *((_DWORD *)PrimaryDisplaySource + 4);
          v45 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v42, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v45 + 316),
                                                   0);
          v21 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
            v61[3] = *(int *)(v45 + 320);
            v61[4] = *(unsigned int *)(v45 + 316);
            v61[5] = v21;
            WdLogEvent5_WdError(v61);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71,
              v64);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)v64, 1, v49, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v75);
            if ( *(_DWORD *)(v45 + 200) != 1 && *((_DWORD *)v64 + 144) == 4
              || *(_DWORD *)(v45 + 200) == 4
              || (v69 = v64, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 200LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v77);
              COREACCESS::~COREACCESS((COREACCESS *)v76);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71);
            }
            else
            {
              if ( *(_QWORD *)(v45 + 2704) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v64 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler(v50, 8LL, v44);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v50, 1 << v44, 0, 1 << v44, 0);
              }
              if ( *(_DWORD *)(v45 + 200) == 1 )
              {
                if ( (a2 & 4) != 0 )
                {
                  v51 = v64;
                  v52 = DmmDisablePathsFromVidPnSource(v64, v44);
                }
                else
                {
                  v62 = *(_BYTE *)(v45 + 2609)
                     && *(_BYTE *)(v45 + 2528)
                     && *(_DWORD *)(v45 + 324) != 1297040209
                     && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v45 + 216) + 64LL) + 1152LL);
                  v51 = v64;
                  v52 = DmmRemovePathsFromVidPnSource(v64, v44, v62);
                }
              }
              else
              {
                v51 = v64;
                v52 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v45 + 2696), v64, v44);
              }
              v53 = *(PERESOURCE ***)(v45 + 2696);
              LODWORD(v21) = v52;
              v74 = 0LL;
              memset(v73, 0, sizeof(v73));
              ADAPTER_DISPLAY::SetPartOfDesktop(v53, v44, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(DXGADAPTER ***)(v45 + 2696),
                v44,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v73);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v45 + 2696), v44, 0);
              v54 = *(ADAPTER_DISPLAY **)(v45 + 2696);
              v72 = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v54, v44, &v72);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v45 + 2696), v44, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v77);
              COREACCESS::~COREACCESS((COREACCESS *)v76);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v71);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v64);
            }
          }
          v42 = v70;
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v65;
        v38 = (struct _LUID *)(v20 + 316);
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v38, (unsigned int)v4, 1u);
      if ( v63[0] )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_20;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
    v60[3] = v4;
    v60[4] = *(int *)(v20 + 320);
    v60[5] = v38->LowPart;
    WdLogEvent5_WdError(v60);
    LODWORD(v21) = 0;
  }
  if ( v63[0] )
    DxgkReleaseSessionModeChangeLock();
  v26 = v21;
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v25);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v66);
  return v26;
}
