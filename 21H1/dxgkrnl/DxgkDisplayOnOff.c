/*
 * XREFs of DxgkDisplayOnOff @ 0x1C013CFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C0126E28 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C0127CEC (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C0127D0C (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012F174 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013D338 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C013D524 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C013ECC4 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C013F4CC (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C029B5A8 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
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
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // rax
  char v66; // [rsp+30h] [rbp-D0h] BYREF
  char v67; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v68; // [rsp+32h] [rbp-CEh]
  struct DXGDEVICE *v69; // [rsp+38h] [rbp-C8h] BYREF
  DXGPROCESS *v70; // [rsp+40h] [rbp-C0h]
  _BYTE v71[8]; // [rsp+48h] [rbp-B8h] BYREF
  char v72; // [rsp+50h] [rbp-B0h]
  int v73; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A0h]
  char v75; // [rsp+68h] [rbp-98h]
  _BYTE v76[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-78h] BYREF
  char v78; // [rsp+B8h] [rbp-48h]
  _QWORD v79[10]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v80[8]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v81[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v82[88]; // [rsp+158h] [rbp+58h] BYREF

  v4 = a2;
  v67 = a3;
  v68 = a4;
  memset(v79, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v79[1]);
  v73 = -1;
  v79[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v79[3]) = 53;
  LOBYTE(v79[6]) = -1;
  v74 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v75 = 1;
    v73 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v73, 2183LL);
  v8 = 0LL;
  v78 = 0;
  v69 = 0LL;
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9) + 88);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
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
    *(_QWORD *)(v57 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v58);
    v59 = v57;
    *(_QWORD *)(v57 + 32) = -1073741811LL;
LABEL_43:
    WdLogEvent5_WdError(v59);
    goto LABEL_33;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, SessionDataForSpecifiedSession[2329]);
  Current = DXGPROCESS::GetCurrent(v18, v17);
  v70 = Current;
  v22 = Current;
  if ( !Current )
  {
    v59 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v59 + 24) = 9686LL;
    goto LABEL_43;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    v60 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v60 + 24) = v22;
    WdLogEvent5_WdError(v60);
    LODWORD(v16) = -1073741790;
  }
  else
  {
    v66 = 0;
    v25 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v66, 1);
    v16 = v25;
    if ( v25 < 0 )
    {
      v61 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v61 + 24) = v16;
      WdLogEvent5_WdError(v61);
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
                ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
              v69 = 0LL;
            }
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                     (struct _LUID *)(v36 + 316),
                                                     &v69,
                                                     0LL,
                                                     0LL,
                                                     0);
            v41 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            v63 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
            v63[3] = *(int *)(v36 + 320);
            v63[4] = *v37;
            v63[5] = v41;
            WdLogEvent5_WdError(v63);
            v8 = 0LL;
            v69 = 0LL;
            NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
LABEL_28:
            PrimaryDisplaySource = NextDisplaySource;
LABEL_29:
            if ( !PrimaryDisplaySource )
              goto LABEL_30;
          }
          v8 = v69;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v76, v69);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v71, *((struct DXGFASTMUTEX *const *)v22 + 42), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v71);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v80, (__int64)v8, 1, v42, 0);
          v43 = COREDEVICEACCESS::AcquireExclusive((__int64)v80, 2LL);
          v46 = v43;
          if ( v43 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v82);
            COREACCESS::~COREACCESS((COREACCESS *)v81);
            if ( v72 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v71, v64);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v76);
            v22 = v70;
            goto LABEL_29;
          }
          if ( v43 < 0 )
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
            v65[3] = *(int *)(v36 + 320);
            v65[4] = *v37;
            v65[5] = v46;
          }
          else
          {
            if ( !v67 )
            {
              DmmDisablePathsFromVidPnSource(v8, v35);
LABEL_21:
              COREACCESS::~COREACCESS((COREACCESS *)v82);
              COREACCESS::~COREACCESS((COREACCESS *)v81);
              if ( v72 )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v71, v52);
              DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v76);
              if ( v8 )
              {
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v69 + 2), v69);
                v8 = 0LL;
                v69 = 0LL;
              }
              NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v31, PrimaryDisplaySource);
              v22 = v70;
              goto LABEL_28;
            }
            v47 = v68;
            if ( v68 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v36 + 2672)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v36 + 2672),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v35,
                        v47,
                        (struct COREDEVICEACCESS *)v80,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v79) < 0 )
              goto LABEL_21;
            v48 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(DXGADAPTER ***)(v36 + 2672), v35);
            v51 = v48;
            if ( v48 >= 0 )
              goto LABEL_21;
            v65 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
            v65[3] = v35;
            v65[4] = *(int *)(v36 + 320);
            v65[5] = *v37;
            v65[6] = v51;
          }
          WdLogEvent5_WdError(v65);
          goto LABEL_21;
        }
LABEL_30:
        LODWORD(v16) = 0;
      }
      else
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
        v62[3] = v4;
        v62[4] = a1->HighPart;
        v62[5] = a1->LowPart;
        WdLogEvent5_WdError(v62);
        LODWORD(v16) = -1073741811;
      }
    }
    if ( v66 )
      DxgkReleaseSessionModeChangeLock(v33, v32);
  }
LABEL_33:
  if ( v78 )
  {
    KeUnstackDetachProcess(&ApcState);
    v78 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v32);
  if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v73);
  return (unsigned int)v16;
}
