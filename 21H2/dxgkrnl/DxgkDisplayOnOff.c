/*
 * XREFs of DxgkDisplayOnOff @ 0x1C0162A00
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
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
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC39C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C01C770C (-DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01C80AC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01E9C14 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C03493B4 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkDisplayOnOff(struct _LUID *a1, unsigned int a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGDEVICE *v8; // rsi
  unsigned int v9; // ebx
  DXGSESSIONMGR *v10; // rdi
  unsigned int v11; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v13; // rdi
  DXGPROCESS *Current; // rax
  __int64 v15; // r14
  int v16; // eax
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v18; // rbx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  __int64 v20; // rdi
  __int64 v21; // r15
  unsigned int *v22; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v24; // r9
  int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  const wchar_t *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  const wchar_t *v33; // r9
  __int64 HighPart; // rax
  __int64 LowPart; // rcx
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  unsigned int CurrentProcessSessionId; // eax
  char v41; // [rsp+51h] [rbp-AFh] BYREF
  char v42; // [rsp+52h] [rbp-AEh]
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-A8h]
  SESSION_VIEW *v44; // [rsp+60h] [rbp-A0h]
  _BYTE v45[8]; // [rsp+68h] [rbp-98h] BYREF
  char v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h]
  char v49; // [rsp+88h] [rbp-78h]
  _BYTE v50[16]; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  char v52; // [rsp+D8h] [rbp-28h]
  _QWORD v53[10]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v54[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v55[64]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v56[88]; // [rsp+178h] [rbp+78h] BYREF

  v4 = a2;
  v42 = a3;
  memset(v53, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v53[1]);
  v47 = -1;
  v53[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v53[3]) = 53;
  LOBYTE(v53[6]) = -1;
  v48 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2183;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v7, 2183);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2183);
  v52 = 0;
  v8 = 0LL;
  v43 = 0LL;
  v9 = -1073741811;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v10
    || (v11 = PsGetCurrentProcessSessionId(),
        SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, v11),
        (v13 = SessionDataForSpecifiedSession) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v30 = L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.";
    v15 = (unsigned int)PsGetCurrentProcessSessionId();
    v31 = -1073741811LL;
    goto LABEL_55;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2331));
  Current = DXGPROCESS::GetCurrent();
  v15 = (__int64)Current;
  if ( !Current )
  {
    v15 = 9819LL;
    WdLogSingleEntry1(2LL, 9819LL);
    v30 = L"Failed to get current DXGPROCESS";
LABEL_40:
    v31 = 0LL;
LABEL_55:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, v15, v31, 0LL, 0LL, 0LL);
    goto LABEL_29;
  }
  if ( DXGPROCESS::IsRemoteConnection(Current) )
  {
    WdLogSingleEntry1(2LL, v15);
    v9 = -1073741790;
    v30 = L"DxgkDisplayOnOff is not called from console session (Current DXGPROCESS 0x%I64x).";
    goto LABEL_40;
  }
  v41 = 0;
  v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v41, 1);
  v9 = v16;
  if ( v16 < 0 )
  {
    v32 = v16;
    WdLogSingleEntry1(2LL, v16);
    v33 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
    HighPart = 0LL;
    LowPart = 0LL;
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(v13, a1, v4);
    v44 = SessionViewFromSource;
    v18 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
      if ( PrimaryDisplaySource )
      {
        while ( 1 )
        {
          v20 = *((unsigned int *)PrimaryDisplaySource + 4);
          v21 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
          v22 = (unsigned int *)(v21 + 404);
          if ( v8 )
          {
            DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(v21 + 404), v8);
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
            v43 = 0LL;
          }
          CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                   (struct _LUID *)(v21 + 404),
                                                   0);
          if ( CddDeviceAndContextForCurrentSession < 0 )
          {
            v36 = CddDeviceAndContextForCurrentSession;
            WdLogSingleEntry3(2LL, *(int *)(v21 + 408), *v22, CddDeviceAndContextForCurrentSession);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get CDD device on DXGADAPTER 0x%I64x%08I64x (Status = 0x%I64x).",
              *(int *)(v21 + 408),
              *v22,
              v36,
              0LL,
              0LL);
            v18 = v44;
            goto LABEL_23;
          }
          v8 = v43;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v50, v43);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, (struct DXGFASTMUTEX *const)(v15 + 376), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v54, (__int64)v8, 1, v24, 0);
          v25 = COREDEVICEACCESS::AcquireExclusive((__int64)v54, 2u);
          if ( v25 == -1073741130 )
          {
            COREACCESS::~COREACCESS((COREACCESS *)v56);
            COREACCESS::~COREACCESS((COREACCESS *)v55);
            if ( v46 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
            DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v50);
            goto LABEL_25;
          }
          if ( v25 < 0 )
            break;
          if ( v42 )
          {
            if ( a4 && ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v21 + 2792)) )
              ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(
                *(ADAPTER_DISPLAY **)(v21 + 2792),
                *((struct ADAPTER_RENDER **)v8 + 2));
            if ( (int)DmmEnablePathsFromVidPnSource(
                        v8,
                        v20,
                        a4,
                        (struct COREDEVICEACCESS *)v54,
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v53) < 0 )
              goto LABEL_18;
            v26 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(*(ADAPTER_DISPLAY **)(v21 + 2792), v20);
            if ( v26 >= 0 )
              goto LABEL_18;
            v38 = v26;
            WdLogSingleEntry4(2LL, v20, *(int *)(v21 + 408), *v22, v26);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on adapter 0x%I64x%08I64x (status = 0x%I64x)",
              v20,
              *(int *)(v21 + 408),
              *v22,
              v38,
              0LL);
            goto LABEL_53;
          }
          DmmDisablePathsFromVidPnSource(v8, v20);
LABEL_18:
          COREACCESS::~COREACCESS((COREACCESS *)v56);
          COREACCESS::~COREACCESS((COREACCESS *)v55);
          if ( v46 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v50);
          if ( !v8 )
            goto LABEL_24;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
LABEL_23:
          v8 = 0LL;
          v43 = 0LL;
LABEL_24:
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v18, PrimaryDisplaySource);
LABEL_25:
          if ( !PrimaryDisplaySource )
            goto LABEL_26;
        }
        v37 = v25;
        WdLogSingleEntry3(2LL, *(int *)(v21 + 408), *v22, v25);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire device lock on adapter 0x%I64x%08I64x (Status = 0x%I64x)",
          *(int *)(v21 + 408),
          *v22,
          v37,
          0LL,
          0LL);
LABEL_53:
        v18 = v44;
        goto LABEL_18;
      }
LABEL_26:
      v9 = 0;
      goto LABEL_27;
    }
    v32 = v4;
    WdLogSingleEntry3(2LL, v4, a1->HighPart, a1->LowPart);
    HighPart = a1->HighPart;
    v33 = L"Failed to find session view from caller specified VidPn source 0x%I64x on Adapter 0x%I64x%08I64x.";
    LowPart = a1->LowPart;
    v9 = -1073741811;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v33, v32, HighPart, LowPart, 0LL, 0LL);
LABEL_27:
  if ( v41 )
    DxgkReleaseSessionModeChangeLock();
LABEL_29:
  if ( v52 )
  {
    KeUnstackDetachProcess(&ApcState);
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v47);
  return v9;
}
