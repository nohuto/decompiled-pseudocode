/*
 * XREFs of DxgkDisplayOnOff @ 0x1C014ED50
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006F9C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000BA88 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000D12C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A29C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116C30 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0121638 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0122794 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0130DBC (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0143468 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0143960 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C014BE84 (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C014F35C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C014F550 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014F988 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0150458 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029FF78 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  unsigned int CurrentProcessSessionId; // eax
  PRKPROCESS *SessionDataForSpecifiedSession; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGPROCESS *Current; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  DXGPROCESS *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  SESSION_VIEW *v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  __int64 v35; // r15
  __int64 v36; // rsi
  unsigned int *v37; // r14
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r12
  unsigned __int8 v47; // r12
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r12
  __int64 v52; // rdx
  struct DISPLAY_SOURCE *NextDisplaySource; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rax
  char v67; // [rsp+30h] [rbp-D0h] BYREF
  char v68; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v69; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v70; // [rsp+38h] [rbp-C8h] BYREF
  DXGPROCESS *v71; // [rsp+40h] [rbp-C0h]
  _BYTE v72[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v73; // [rsp+50h] [rbp-B0h]
  int v74; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v75; // [rsp+60h] [rbp-A0h]
  char v76; // [rsp+68h] [rbp-98h]
  _BYTE v77[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  char v79; // [rsp+B8h] [rbp-48h]
  _QWORD v80[10]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v81[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v82[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v83[88]; // [rsp+158h] [rbp+58h] BYREF

  v4 = a2;
  v68 = a3;
  v69 = a4;
  memset(v80, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v80[1]);
  v74 = -1;
  v80[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v80[3]) = 53;
  LOBYTE(v80[6]) = -1;
  v75 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v76 = 1;
    v74 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v76 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v74, 2183LL);
  v8 = 0LL;
  v79 = 0;
  v70 = 0LL;
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 102);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
    SessionDataForSpecifiedSession = (PRKPROCESS *)DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v13,
                                                     CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  LODWORD(v16) = -1073741811;
  if ( !SessionDataForSpecifiedSession )
  {
    v57 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v57 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v59, v58);
    v60 = v57;
    *(_QWORD *)(v57 + 32) = -1073741811LL;
LABEL_43:
    WdLogEvent5_WdError(v60);
    goto LABEL_33;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2329]);
  Current = DXGPROCESS::GetCurrent(v18, v17);
  v71 = Current;
  v22 = Current;
  if ( !Current )
  {
    v60 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v60 + 24) = 9797LL;
    goto LABEL_43;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v61 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v61 + 24) = v22;
    WdLogEvent5_WdError(v61);
    LODWORD(v16) = -1073741790;
  }
  else
  {
    v67 = 0;
    v25 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v67, 1);
    v16 = v25;
    if ( v25 < 0 )
    {
      v62 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v62 + 24) = v16;
      WdLogEvent5_WdError(v62);
    }
    else
    {
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                                (DXGSESSIONDATA *)SessionDataForSpecifiedSession,
                                a1,
                                v4);
      v31 = (SESSION_VIEW *)SessionViewFromSource;
      if ( SessionViewFromSource )
      {
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v35 = *((unsigned int *)PrimaryDisplaySource + 4);
            v36 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
            v37 = (unsigned int *)(v36 + 316);
            if ( v8 )
            {
              DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v36 + 316), v8);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
              v70 = 0LL;
            }
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)(v36 + 316),
                                                     &v70,
                                                     0LL,
                                                     0LL,
                                                     0);
            v41 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            v64 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
            v64[3] = *(int *)(v36 + 320);
            v64[4] = *v37;
            v64[5] = v41;
            WdLogEvent5_WdError(v64);
            v8 = 0LL;
            v70 = 0LL;
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
LABEL_28:
            PrimaryDisplaySource = NextDisplaySource;
LABEL_29:
            if ( !PrimaryDisplaySource )
              goto LABEL_30;
          }
          v8 = v70;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77, v70);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v72, *((struct DXGFASTMUTEX *const *)v22 + 42), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v72);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, (__int64)v8, 1, v42, 0);
          v43 = COREDEVICEACCESS::AcquireExclusive((__int64)v81, 2u);
          v46 = v43;
          if ( v43 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v83);
            COREACCESS::~COREACCESS((COREACCESS *)v82);
            if ( v73 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v72, v65);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
            v22 = v71;
            goto LABEL_29;
          }
          if ( v43 < 0 )
          {
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
            v66[3] = *(int *)(v36 + 320);
            v66[4] = *v37;
            v66[5] = v46;
          }
          else
          {
            if ( !v68 )
            {
              DmmDisablePathsFromVidPnSource(v8, v35);
LABEL_21:
              COREACCESS::~COREACCESS((COREACCESS *)v83);
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              if ( v73 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v72, v52);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v77);
              if ( v8 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
                v8 = 0LL;
                v70 = 0LL;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
              v22 = v71;
              goto LABEL_28;
            }
            v47 = v69;
            if ( v69 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v36 + 2696)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v36 + 2696),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v35,
                        v47,
                        (struct COREDEVICEACCESS *)v81,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v80) < 0 )
              goto LABEL_21;
            v48 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v36 + 2696), v35);
            v51 = v48;
            if ( v48 >= 0 )
              goto LABEL_21;
            v66 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
            v66[3] = v35;
            v66[4] = *(int *)(v36 + 320);
            v66[5] = *v37;
            v66[6] = v51;
          }
          WdLogEvent5_WdError(v66);
          goto LABEL_21;
        }
LABEL_30:
        LODWORD(v16) = 0;
      }
      else
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
        v63[3] = v4;
        v63[4] = a1->HighPart;
        v63[5] = a1->LowPart;
        WdLogEvent5_WdError(v63);
        LODWORD(v16) = -1073741811;
      }
    }
    if ( v67 )
      DxgkReleaseSessionModeChangeLock(v33, v32);
  }
LABEL_33:
  if ( v79 )
  {
    KeUnstackDetachProcess(&ApcState);
    v79 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v74, v32);
  if ( v76 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v74);
  return (unsigned int)v16;
}
