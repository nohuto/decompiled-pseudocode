/*
 * XREFs of ?DxgkCddDisable@@YAJIII@Z @ 0x1C0131400
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0011824 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0011C70 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0011CC8 (-AcquireExclusiveUncheck@COREDEVICEACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0013964 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0019E80 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001A710 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0132B5C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01344BC (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C013D524 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C013ECC4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C013F4CC (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C013F574 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C015A28C (DxgkRemoveSessionViewForCurrentSession.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C02120C8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02D9EA4 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 */

__int64 __fastcall DxgkCddDisable(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rsi
  char *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  DXGSESSIONMGR *v34; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rdi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _LUID *v40; // r14
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  SESSION_VIEW *v44; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  unsigned int v46; // r15d
  __int64 v47; // rdi
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r9
  ADAPTER_RENDER *v52; // r10
  struct DXGDEVICE *v53; // r14
  int v54; // eax
  ADAPTER_DISPLAY *v55; // rcx
  ADAPTER_DISPLAY *v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  unsigned __int8 v68; // r8
  _BYTE v69[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v70; // [rsp+38h] [rbp-C8h] BYREF
  int v71; // [rsp+40h] [rbp-C0h]
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+50h] [rbp-B0h]
  char v74; // [rsp+58h] [rbp-A8h]
  struct DXGDEVICE *v75; // [rsp+60h] [rbp-A0h]
  DXGSESSIONDATA **v76; // [rsp+68h] [rbp-98h]
  _BYTE v77[16]; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v78; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v79[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-40h]
  _BYTE v81[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v82[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v83[88]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v84[8]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v85[64]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v86[88]; // [rsp+1B8h] [rbp+B8h] BYREF

  v72 = -1;
  v4 = (unsigned int)a3;
  v71 = a3;
  v5 = (unsigned int)a1;
  v73 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v74 = 1;
    v72 = 3003;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 3003);
  }
  else
  {
    v74 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v72, 3003LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v11 = Current;
  if ( !Current )
  {
    v28 = -1073741811;
    v57 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v57 + 24) = -1073741811LL;
    *(_QWORD *)(v57 + 32) = PsGetCurrentProcess(v59, v58);
LABEL_61:
    v60 = (_QWORD *)v57;
    goto LABEL_62;
  }
  v12 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v13 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *((_DWORD *)v11 + 64) )
  {
    v14 = *((_QWORD *)v11 + 30);
    v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
    if ( (((unsigned int)v5 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
      && (v15 & 0x2000) == 0
      && (v15 & 0x1F) != 0 )
    {
      v16 = v15 & 0x1F;
      if ( (_BYTE)v16 == 3 )
      {
        v17 = *(_QWORD *)(v14 + 16LL * (unsigned int)v13);
        goto LABEL_12;
      }
      v18 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v16);
      *(_QWORD *)(v18 + 24) = 267LL;
      WdLogEvent5_WdError(v18);
    }
  }
  v17 = 0LL;
LABEL_12:
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  v70 = (struct DXGDEVICE *)v17;
  if ( !v17 )
  {
    v28 = -1073741811;
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v60[3] = -1073741811LL;
    v60[4] = v5;
    v60[5] = v11;
LABEL_62:
    WdLogEvent5_WdError(v60);
    goto LABEL_23;
  }
  v22 = *(_QWORD *)(v17 + 1848);
  if ( !v22 || !*(_QWORD *)(v22 + 2672) )
  {
    v61 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v61 + 24) = 627LL;
    WdLogEvent5_WdAssertion(v61);
  }
  if ( (a2 & 0x40000000) == 0 )
  {
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v84, v17, 1, v21, 0);
    COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v84);
    if ( a2 == 1 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v22 + 2672)) )
      ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
        *(ADAPTER_DISPLAY **)(v22 + 2672),
        *(struct ADAPTER_RENDER **)(v17 + 16));
    if ( *(_DWORD *)(v22 + 200) == 1 )
      ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v22 + 2672), v4, 0LL);
    LODWORD(v23) = 0;
    COREACCESS::~COREACCESS((COREACCESS *)v86);
    COREACCESS::~COREACCESS((COREACCESS *)v85);
LABEL_20:
    Global = DXGGLOBAL::GetGlobal(v25, v24);
    QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 158), 0);
    if ( (int)v23 < 0 )
    {
      v70 = 0LL;
      DxgkLogCodePointPacket(0x41u, *(_DWORD *)(v22 + 316), v4, v23, 0LL);
    }
    v28 = 0;
    goto LABEL_23;
  }
  if ( ((a2 - 0x40000000) & 0xFFFFFFFB) != 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v62 + 24) = 668LL;
    WdLogEvent5_WdAssertion(v62);
  }
  v34 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 88);
  if ( v34 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v33);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v34, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v57 = WdLogNewEntry5_WdError(v33, v32);
    v28 = -1073741811;
    *(_QWORD *)(v57 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v63);
    *(_QWORD *)(v57 + 32) = -1073741811LL;
    goto LABEL_61;
  }
  v69[0] = 0;
  v37 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v69, 1);
  v23 = v37;
  if ( v37 < 0 )
  {
    v64 = WdLogNewEntry5_WdError(v39, v38);
    *(_QWORD *)(v64 + 24) = v23;
    WdLogEvent5_WdError(v64);
  }
  else
  {
    v40 = (struct _LUID *)(v22 + 316);
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              (const struct _LUID *)(v22 + 316),
                              v4);
    v76 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v46 = *((_DWORD *)PrimaryDisplaySource + 4);
          v47 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v44, PrimaryDisplaySource);
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v47 + 316),
                                                   &v70,
                                                   0LL,
                                                   0LL,
                                                   0);
          v23 = CddDeviceAndContextForCurrentSession;
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
            v67[3] = *(int *)(v47 + 320);
            v67[4] = *(unsigned int *)(v47 + 316);
            v67[5] = v23;
            WdLogEvent5_WdError(v67);
          }
          else
          {
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
              (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77,
              v70);
            COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, (__int64)v70, 1, v51, 0);
            COREDEVICEACCESS::AcquireExclusiveUncheck((__int64)v81);
            if ( *(_DWORD *)(v47 + 200) != 1 && *((_DWORD *)v70 + 144) == 4
              || *(_DWORD *)(v47 + 200) == 4
              || (v75 = v70, *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 2) + 16LL) + 200LL) == 4) )
            {
              COREACCESS::~COREACCESS((COREACCESS *)v83);
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
            }
            else
            {
              if ( *(_QWORD *)(v47 + 2680) )
              {
                if ( DXGADAPTER::IsLegacyDisplayStateSynchronization(*(DXGADAPTER **)(*((_QWORD *)v70 + 2) + 16LL)) )
                  ADAPTER_RENDER::FlushScheduler((__int64)v52, 8, v46, 0);
                else
                  ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(v52, 1 << v46, 0, 1 << v46, 0);
              }
              if ( *(_DWORD *)(v47 + 200) == 1 )
              {
                if ( (a2 & 4) != 0 )
                {
                  v53 = v70;
                  v54 = DmmDisablePathsFromVidPnSource(v70, v46);
                }
                else
                {
                  v68 = *(_BYTE *)(v47 + 2585)
                     && *(_BYTE *)(v47 + 2504)
                     && *(_DWORD *)(v47 + 324) != 1297040209
                     && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 216) + 64LL) + 1152LL);
                  v53 = v70;
                  v54 = DmmRemovePathsFromVidPnSource(v70, v46, v68);
                }
              }
              else
              {
                v53 = v70;
                v54 = ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v47 + 2672), v70, v46);
              }
              v55 = *(ADAPTER_DISPLAY **)(v47 + 2672);
              LODWORD(v23) = v54;
              v80 = 0LL;
              memset(v79, 0, sizeof(v79));
              ADAPTER_DISPLAY::SetPartOfDesktop(v55, v46, 0);
              ADAPTER_DISPLAY::SetDisplayModeInfo(
                *(PERESOURCE ***)(v47 + 2672),
                v46,
                (const struct _DXGK_DISPLAYMODE_INFO *const)v79);
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v47 + 2672), v46, 0);
              v56 = *(ADAPTER_DISPLAY **)(v47 + 2672);
              v78 = 0LL;
              ADAPTER_DISPLAY::SetContentRect(v56, v46, &v78);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v47 + 2672), v46, 0LL);
              COREACCESS::~COREACCESS((COREACCESS *)v83);
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v75 + 2), v70);
            }
          }
          v44 = (SESSION_VIEW *)v76;
        }
        while ( PrimaryDisplaySource );
        LODWORD(v4) = v71;
        v40 = (struct _LUID *)(v22 + 316);
      }
      if ( ((a2 - 0x40000000) & 0xFFFFFFFB) == 0 )
        DxgkRemoveSessionViewForCurrentSession(v40, v4, 1u);
      if ( v69[0] )
        DxgkReleaseSessionModeChangeLock(v25, v24);
      goto LABEL_20;
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
    v66[3] = v4;
    v66[4] = *(int *)(v22 + 320);
    v66[5] = v40->LowPart;
    WdLogEvent5_WdError(v66);
    LODWORD(v23) = 0;
  }
  if ( v69[0] )
    DxgkReleaseSessionModeChangeLock(v65, v27);
  v28 = v23;
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72, v27);
  if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v72);
  return v28;
}
