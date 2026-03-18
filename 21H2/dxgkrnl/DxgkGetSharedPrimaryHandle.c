/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C02D1520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001960 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011BE8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00137F4 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00138D4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001D198 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001E30C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C002B450 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C002B630 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01588F8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C015A878 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0164D50 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02C0CC4 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  ULONG64 v7; // rax
  struct _KTHREAD **Current; // rax
  DXGPROCESS *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rdi
  int PairingAdapters; // r14d
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGADAPTER *v19; // rsi
  ADAPTER_DISPLAY *v20; // rcx
  int VidPnSourceOwnerType; // eax
  volatile signed __int64 *v22; // r14
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rax
  __int64 v24; // rcx
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rcx
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v35; // rbx
  __int64 v36; // r9
  __int64 v37; // r9
  const wchar_t *v38; // r9
  int v39; // edx
  int v40; // eax
  struct COREDEVICEACCESS *v41; // rbx
  int v42; // eax
  __int64 v43; // rbx
  __int64 v44; // rdi
  int v45; // eax
  struct COREDEVICEACCESS *v46; // rbx
  int v47; // eax
  __int64 v48; // rbx
  _DWORD *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // [rsp+20h] [rbp-2A8h]
  __int64 v53; // [rsp+20h] [rbp-2A8h]
  struct COREDEVICEACCESS *v54; // [rsp+28h] [rbp-2A0h]
  __int64 v55; // [rsp+30h] [rbp-298h]
  char v56[8]; // [rsp+50h] [rbp-278h] BYREF
  int v57; // [rsp+58h] [rbp-270h] BYREF
  __int64 v58; // [rsp+60h] [rbp-268h]
  char v59; // [rsp+68h] [rbp-260h]
  unsigned int v60[2]; // [rsp+70h] [rbp-258h]
  int CddPrimaryShareResourceHandle; // [rsp+78h] [rbp-250h]
  DXGSESSIONMGR *v62; // [rsp+80h] [rbp-248h] BYREF
  struct DXGDEVICE *v63; // [rsp+88h] [rbp-240h] BYREF
  struct DXGCONTEXT *v64; // [rsp+90h] [rbp-238h] BYREF
  _BYTE v65[8]; // [rsp+98h] [rbp-230h] BYREF
  struct DXGADAPTER *v66; // [rsp+A0h] [rbp-228h]
  char v67; // [rsp+A8h] [rbp-220h]
  _BYTE v68[16]; // [rsp+B0h] [rbp-218h] BYREF
  DXGADAPTER *v69; // [rsp+C0h] [rbp-208h] BYREF
  struct DXGADAPTER *v70; // [rsp+D0h] [rbp-1F8h] BYREF
  struct DXGADAPTER *v71; // [rsp+D8h] [rbp-1F0h] BYREF
  unsigned int v72; // [rsp+E0h] [rbp-1E8h] BYREF
  ULONG64 v73; // [rsp+E8h] [rbp-1E0h]
  unsigned __int64 v74; // [rsp+F0h] [rbp-1D8h] BYREF
  _QWORD v75[7]; // [rsp+F8h] [rbp-1D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+130h] [rbp-198h] BYREF
  char v77; // [rsp+160h] [rbp-168h]
  _BYTE v78[160]; // [rsp+170h] [rbp-158h] BYREF
  _BYTE v79[144]; // [rsp+210h] [rbp-B8h] BYREF

  v73 = a1;
  v57 = -1;
  v58 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v59 = 1;
    v57 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v59 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v57, 2021);
  v7 = a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  *(_QWORD *)v60 = *(_QWORD *)v7;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v7 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4, v5, v6);
  v9 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_8;
  v70 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v69, v60[0], Current, &v70, 1);
  v13 = v70;
  if ( !v70 )
  {
    WdLogSingleEntry2(3LL, v60[0], -1073741811LL);
    if ( v69 )
      DXGADAPTER::ReleaseReference(v69);
LABEL_8:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
    if ( !v59 )
      return 3221225485LL;
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_34:
    if ( v12 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v57);
    return 3221225485LL;
  }
  v71 = 0LL;
  v14 = v60[1];
  PairingAdapters = DxgkpGetPairingAdapters(v70, v60[1], 0LL, 0LL, &v71, &v74, 0);
  if ( PairingAdapters >= 0 )
  {
    v19 = v71;
    if ( !v71 || !*((_QWORD *)v71 + 349) )
    {
      WdLogSingleEntry1(1LL, 5276LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter()",
        5276LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v56[0] = 0;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v79, v19, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v79, 0LL);
    if ( PairingAdapters < 0 )
    {
      DXGADAPTER::ReleaseReference(v19);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
      if ( v69 )
        DXGADAPTER::ReleaseReference(v69);
      goto LABEL_18;
    }
    v20 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 349);
    if ( (unsigned int)v14 >= *((_DWORD *)v20 + 24) )
    {
      DXGADAPTER::ReleaseReference(v19);
      WdLogSingleEntry2(2LL, v14, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v14,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
      if ( v69 )
        DXGADAPTER::ReleaseReference(v69);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
      if ( !v59 )
        return 3221225485LL;
      LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_34;
    }
    CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(v20, v14);
    if ( !CddPrimaryShareResourceHandle && !DXGPROCESS::IsRemoteConnection(v9) )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v19 + 349), v14) )
      {
        if ( DXGADAPTER::UsingSetTimingsFromVidPn(v19) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v19 + 349), v14);
          if ( !VidPnSourceOwnerType || (v56[0] = 0, VidPnSourceOwnerType == 3) )
            v56[0] = 1;
        }
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v79);
    v22 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    if ( !v56[0] )
    {
LABEL_83:
      DXGADAPTER::ReleaseReference(v19);
      if ( v64 )
        DXGCONTEXT::ReleaseReference(v64);
      if ( v22 && _InterlockedExchangeAdd64(v22 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v63 + 2), v63);
      goto LABEL_88;
    }
    SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
    v62 = SessionDataForSpecifiedSession;
    if ( SessionDataForSpecifiedSession )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v24);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v62, CurrentProcessSessionId);
    }
    v62 = SessionDataForSpecifiedSession;
    if ( !SessionDataForSpecifiedSession )
    {
      v26 = PsGetCurrentProcessSessionId(v24);
      WdLogSingleEntry2(2LL, v26, -1073741811LL);
      v28 = PsGetCurrentProcessSessionId(v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
        v28,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_83;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v56);
    v29 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v56, 0);
    if ( v29 < 0 )
    {
      v30 = v29;
      WdLogSingleEntry1(2LL, v29);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)",
        v30,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_51:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v56);
      goto LABEL_83;
    }
    if ( DXGPROCESS::IsRemoteConnection(v9) )
    {
      v32 = PsGetCurrentProcessSessionId(v31);
      WdLogSingleEntry2(2LL, v32, -1073741811LL);
      v52 = (unsigned int)PsGetCurrentProcessSessionId(v33);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Current session 0x%I64x has just been switched to remote session , returning 0x%I64x.",
        v52,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_51;
    }
    v77 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v62 + 2331));
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v19 + 404),
                                             &v63,
                                             &v64,
                                             0LL,
                                             0);
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v35 = CddDeviceAndContextForCurrentSession;
      WdLogSingleEntry2(2LL, v19, CddDeviceAndContextForCurrentSession);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get CDD device and context on adapter 0x%I64x for current session (Status = 0x%I64x).",
        (__int64)v19,
        v35,
        0LL,
        0LL,
        0LL);
      if ( !v77 )
      {
        v22 = (volatile signed __int64 *)v63;
        goto LABEL_51;
      }
      KeUnstackDetachProcess(&ApcState);
      v22 = (volatile signed __int64 *)v63;
LABEL_82:
      v77 = 0;
      goto LABEL_51;
    }
    v22 = (volatile signed __int64 *)v63;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v68, v63);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v75,
      &v64,
      1u,
      v36,
      1);
    v66 = v19;
    v67 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v78, (__int64)v22, 1, v37, 0);
    if ( !v75[0] )
    {
      WdLogSingleEntry1(6LL, 5409LL);
      v55 = 0LL;
      v54 = 0LL;
      v53 = 5409LL;
      v38 = L"Out of memory - could not initialize context array lock exclusive.";
      v39 = 262145;
LABEL_60:
      DxgkLogInternalTriageEvent(0LL, v39, -1, (__int64)v38, v53, (__int64)v54, v55, 0LL, 0LL);
LABEL_78:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v78);
      if ( v67 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v75);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v68);
      if ( !v77 )
        goto LABEL_51;
      KeUnstackDetachProcess(&ApcState);
      goto LABEL_82;
    }
    v40 = COREDEVICEACCESS::AcquireExclusive((__int64)v78, 1u);
    if ( v40 < 0 )
    {
      v41 = (struct COREDEVICEACCESS *)v40;
      WdLogSingleEntry2(2LL, v22, v40);
      v55 = 0LL;
      v54 = v41;
      v53 = (__int64)v22;
      v38 = L"Failed to acquire device core access shared on device 0x%I64x (Status = 0x%I64x).";
LABEL_63:
      v39 = 0x40000;
      goto LABEL_60;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v19 + 349), v14) || DXGPROCESS::IsRemoteConnection(v9) )
    {
      WdLogSingleEntry3(2LL, v14, *((int *)v19 + 102), *((unsigned int *)v19 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Getting Shared Primary Handle on not used VidPn source 0x%I64x on adapter 0x%I64x%08I64x in current session.",
        v14,
        *((int *)v19 + 102),
        *((unsigned int *)v19 + 101),
        0LL,
        0LL);
    }
    else
    {
      v42 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v19 + 349), v14);
      if ( !v42 || v42 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((ADAPTER_DISPLAY **)v19 + 349),
                                          v14);
        if ( CddPrimaryShareResourceHandle )
          goto LABEL_78;
        v45 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                *((ADAPTER_DISPLAY **)v19 + 349),
                (struct DXGDEVICE *)v22,
                v14,
                (unsigned int *)&v62,
                &v72,
                (struct COREDEVICEACCESS *)v78);
        if ( v45 >= 0 )
        {
          CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                            *((ADAPTER_DISPLAY **)v19 + 349),
                                            v14);
          if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v19 + 349), v14) )
            goto LABEL_78;
          if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v19 + 349), v14) )
            goto LABEL_78;
          v47 = ADAPTER_DISPLAY::PresentCddPrimary(
                  *((ADAPTER_DISPLAY **)v19 + 349),
                  v64,
                  v14,
                  (struct COREDEVICEACCESS *)v78);
          if ( v47 >= 0 )
            goto LABEL_78;
          v48 = v47;
          WdLogSingleEntry3(2LL, v14, v19, v47);
          v55 = v48;
          v54 = v19;
          v53 = v14;
          v38 = L"PresentFromCdd failed to present the existing Cdd Primary on VidPn source 0x%I64x on adapter 0x%I64x (St"
                 "atus = 0x%I64x).";
        }
        else
        {
          v46 = (struct COREDEVICEACCESS *)v45;
          WdLogSingleEntry2(2LL, v19, v45);
          v55 = 0LL;
          v54 = v46;
          v53 = (__int64)v19;
          v38 = L"Failed to delay create CDD primary on adapter 0x%I64x (Status = 0x%I64x).";
        }
        goto LABEL_63;
      }
      v43 = v14;
      v44 = v42;
      WdLogSingleEntry4(2LL, v42, v43, *((int *)v19 + 102), *((unsigned int *)v19 + 101));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Ownership has been changed to 0x%I64x on VidPn source 0x%I64x on adapter 0x%I64x%08I64x.",
        v44,
        v43,
        *((int *)v19 + 102),
        *((unsigned int *)v19 + 101),
        0LL);
    }
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_78;
  }
  WdLogSingleEntry2(2LL, v13, (unsigned int)v14);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
    (__int64)v13,
    v14,
    0LL,
    0LL,
    0LL);
  if ( *((_BYTE *)v13 + 209) )
  {
    CddPrimaryShareResourceHandle = 0;
LABEL_88:
    v49 = (_DWORD *)(v73 + 8);
    if ( v73 + 8 >= MmUserProbeAddress )
      v49 = (_DWORD *)MmUserProbeAddress;
    *v49 = CddPrimaryShareResourceHandle;
    if ( v69 )
      DXGADAPTER::ReleaseReference(v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
    if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v57);
    return 0LL;
  }
  if ( v69 )
    DXGADAPTER::ReleaseReference(v69);
LABEL_18:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v57);
  if ( v59 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v57);
  return (unsigned int)PairingAdapters;
}
