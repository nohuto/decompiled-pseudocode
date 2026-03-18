/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C021F470
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00099D0 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009A0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EAC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0011A58 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011C24 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011D30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00196CC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C00199F0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019C7C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C001AB20 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00245CC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C00247D4 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00D6630 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00DEF38 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0130678 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C020E8C8 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C020F8B8 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  ULONG64 v5; // rax
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  DXGPROCESS *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int PairingAdapters; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v23; // rdi
  __int64 v24; // rax
  char v25; // si
  int v26; // r12d
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  int VidPnSourceOwnerType; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  DXGSESSIONMGR *v44; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rsi
  __int64 v47; // rbx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // rcx
  unsigned int *v58; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rsi
  _QWORD *v81; // rax
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rsi
  _QWORD *v86; // rax
  int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rsi
  _DWORD *v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  _BYTE v94[8]; // [rsp+40h] [rbp-268h] BYREF
  int v95; // [rsp+48h] [rbp-260h] BYREF
  __int64 v96; // [rsp+50h] [rbp-258h]
  char v97; // [rsp+58h] [rbp-250h]
  unsigned int v98[2]; // [rsp+60h] [rbp-248h]
  int CddPrimaryShareResourceHandle; // [rsp+68h] [rbp-240h]
  struct DXGDEVICE *v100; // [rsp+70h] [rbp-238h] BYREF
  struct DXGCONTEXT *v101; // [rsp+78h] [rbp-230h] BYREF
  _BYTE v102[8]; // [rsp+80h] [rbp-228h] BYREF
  struct DXGADAPTER *v103; // [rsp+88h] [rbp-220h]
  char v104; // [rsp+90h] [rbp-218h]
  _BYTE v105[16]; // [rsp+98h] [rbp-210h] BYREF
  DXGADAPTER *v106; // [rsp+A8h] [rbp-200h] BYREF
  struct DXGADAPTER *v107; // [rsp+B8h] [rbp-1F0h] BYREF
  struct DXGADAPTER *v108; // [rsp+C0h] [rbp-1E8h] BYREF
  unsigned int v109; // [rsp+C8h] [rbp-1E0h] BYREF
  unsigned int v110; // [rsp+CCh] [rbp-1DCh] BYREF
  unsigned __int64 v111; // [rsp+D0h] [rbp-1D8h] BYREF
  _QWORD v112[7]; // [rsp+D8h] [rbp-1D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-198h] BYREF
  char v114; // [rsp+140h] [rbp-168h]
  _BYTE v115[160]; // [rsp+150h] [rbp-158h] BYREF
  _BYTE v116[144]; // [rsp+1F0h] [rbp-B8h] BYREF

  v95 = -1;
  v96 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v97 = 1;
    v95 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v97 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v95, 2021LL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_QWORD *)v98 = *(_QWORD *)v5;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v5 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  v8 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_32;
  v107 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v106, v98[0], Current, &v107, 1);
  v12 = v107;
  if ( !v107 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v98[0];
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    if ( !v106 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v108 = 0LL;
  v14 = v98[1];
  PairingAdapters = DxgkpGetPairingAdapters(v107, v98[1], 0LL, 0LL, &v108, &v111, 0);
  if ( PairingAdapters < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = v14;
    WdLogEvent5_WdError(v18);
    if ( v106 )
      DXGADAPTER::ReleaseReferenceNoTracking(v106);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v19);
    if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v95);
    return (unsigned int)PairingAdapters;
  }
  v23 = v108;
  if ( !v108 || !*((_QWORD *)v108 + 334) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v24 + 24) = 5097LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v116, v23, 0LL);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v116, 0LL);
  if ( v26 < 0 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116, v27);
    if ( v106 )
      DXGADAPTER::ReleaseReferenceNoTracking(v106);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v28);
    if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v95);
    return (unsigned int)v26;
  }
  v31 = *((_QWORD *)v23 + 334);
  if ( (unsigned int)v14 >= *(_DWORD *)(v31 + 80) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v23);
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = v14;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116, v35);
    if ( !v106 )
    {
LABEL_32:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, v7);
      if ( v97 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v95);
      }
      return 3221225485LL;
    }
LABEL_31:
    DXGADAPTER::ReleaseReferenceNoTracking(v106);
    goto LABEL_32;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                    (DXGADAPTER **)v31,
                                    (unsigned int)v14);
  if ( !CddPrimaryShareResourceHandle && !DXGPROCESS::IsRemoteConnection(v8) )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v23 + 334), (unsigned int)v14) )
    {
      if ( DXGADAPTER::UsingSetTimingsFromVidPn(v23) )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                 *((ADAPTER_DISPLAY **)v23 + 334),
                                 (unsigned int)v14);
        if ( !VidPnSourceOwnerType || VidPnSourceOwnerType == 3 )
          v25 = 1;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v116, v38);
  v100 = 0LL;
  v101 = 0LL;
  if ( v25 )
  {
    v44 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v41, v40) + 88);
    if ( v44 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v43);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v44, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v47 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v47 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v48);
      *(_QWORD *)(v47 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v47);
      goto LABEL_80;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v94);
    v49 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v94, 0);
    v52 = v49;
    if ( v49 < 0 )
    {
      v53 = WdLogNewEntry5_WdError(v51, v50);
      *(_QWORD *)(v53 + 24) = v52;
      WdLogEvent5_WdError(v53);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v94);
      goto LABEL_80;
    }
    if ( DXGPROCESS::IsRemoteConnection(v8) )
    {
      v56 = WdLogNewEntry5_WdError(v55, v54);
      *(_QWORD *)(v56 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v57);
      *(_QWORD *)(v56 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v56);
LABEL_79:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v94);
      goto LABEL_80;
    }
    v114 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
    v58 = (unsigned int *)((char *)v23 + 316);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v23 + 316),
                                             &v100,
                                             &v101,
                                             0LL,
                                             0);
    v62 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v63 = WdLogNewEntry5_WdError(v61, v60);
      *(_QWORD *)(v63 + 24) = v23;
      *(_QWORD *)(v63 + 32) = v62;
      WdLogEvent5_WdError(v63);
LABEL_77:
      if ( v114 )
      {
        KeUnstackDetachProcess(&ApcState);
        v114 = 0;
      }
      goto LABEL_79;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v105, v100);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v112,
      &v101,
      1u);
    v103 = v23;
    v104 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v115, (__int64)v100, 1, v64, 0);
    if ( !v112[0] )
    {
      v69 = WdLogNewEntry5_WdLowResource(v66, v65, v67, v68);
      *(_QWORD *)(v69 + 24) = 5230LL;
      WdLogEvent5_WdLowResource(v69);
      goto LABEL_74;
    }
    v70 = COREDEVICEACCESS::AcquireExclusive((__int64)v115, 1LL);
    v73 = v70;
    if ( v70 < 0 )
    {
      v74 = WdLogNewEntry5_WdError(v72, v71);
      *(_QWORD *)(v74 + 24) = v100;
      *(_QWORD *)(v74 + 32) = v73;
      WdLogEvent5_WdError(v74);
      goto LABEL_74;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v23 + 334), (unsigned int)v14)
      || DXGPROCESS::IsRemoteConnection(v8) )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
      v81[3] = v14;
      v81[4] = *((int *)v23 + 80);
      v81[5] = *v58;
    }
    else
    {
      v77 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v23 + 334), (unsigned int)v14);
      v80 = v77;
      if ( !v77 || v77 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v23 + 334),
                                          (unsigned int)v14);
        if ( !CddPrimaryShareResourceHandle )
        {
          v82 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  *((DXGADAPTER ***)v23 + 334),
                  v100,
                  v14,
                  &v110,
                  &v109,
                  (struct COREDEVICEACCESS *)v115);
          v85 = v82;
          if ( v82 >= 0 )
          {
            CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                              *((DXGADAPTER ***)v23 + 334),
                                              (unsigned int)v14);
            if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v23 + 334), (unsigned int)v14) )
              goto LABEL_74;
            if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v23 + 334), (unsigned int)v14) )
              goto LABEL_74;
            v87 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *((ADAPTER_DISPLAY **)v23 + 334),
                    v101,
                    v14,
                    (struct COREDEVICEACCESS *)v115);
            v90 = v87;
            if ( v87 >= 0 )
              goto LABEL_74;
            v86 = (_QWORD *)WdLogNewEntry5_WdError(v89, v88);
            v86[3] = v14;
            v86[4] = v23;
            v86[5] = v90;
          }
          else
          {
            v86 = (_QWORD *)WdLogNewEntry5_WdError(v84, v83);
            v86[3] = v23;
            v86[4] = v85;
          }
          WdLogEvent5_WdError(v86);
        }
LABEL_74:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v115);
        if ( v104 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v102);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v112);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v105);
        goto LABEL_77;
      }
      v81 = (_QWORD *)WdLogNewEntry5_WdError(v79, v78);
      v81[3] = v80;
      v81[4] = v14;
      v81[5] = *((int *)v23 + 80);
      v81[6] = *v58;
    }
    WdLogEvent5_WdError(v81);
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_74;
  }
LABEL_80:
  DXGADAPTER::ReleaseReferenceNoTracking(v23);
  if ( v101 )
    DXGCONTEXT::ReleaseReference(v101);
  if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
  v91 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v91 = (_DWORD *)MmUserProbeAddress;
  *v91 = CddPrimaryShareResourceHandle;
  if ( v106 )
    DXGADAPTER::ReleaseReferenceNoTracking(v106);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v95, (__int64)v91);
  if ( v97 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v92, &EventProfilerExit, v93, v95);
  return 0LL;
}
