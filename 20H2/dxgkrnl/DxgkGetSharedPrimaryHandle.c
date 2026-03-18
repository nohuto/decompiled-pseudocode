/*
 * XREFs of DxgkGetSharedPrimaryHandle @ 0x1C0222510
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00040D0 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CEC (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0009D18 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A37C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A3B8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A5C4 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B94C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BA54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000CEDC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CFF0 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001993C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019BA0 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0019EC4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C0024758 (--0DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DCFB0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C013F06C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014A2A4 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0211968 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0212958 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
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
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int *v60; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rsi
  _QWORD *v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rsi
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rsi
  _DWORD *v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  _BYTE v96[8]; // [rsp+40h] [rbp-268h] BYREF
  int v97; // [rsp+48h] [rbp-260h] BYREF
  __int64 v98; // [rsp+50h] [rbp-258h]
  char v99; // [rsp+58h] [rbp-250h]
  unsigned int v100[2]; // [rsp+60h] [rbp-248h]
  int CddPrimaryShareResourceHandle; // [rsp+68h] [rbp-240h]
  struct DXGDEVICE *v102; // [rsp+70h] [rbp-238h] BYREF
  struct DXGCONTEXT *v103; // [rsp+78h] [rbp-230h] BYREF
  _BYTE v104[8]; // [rsp+80h] [rbp-228h] BYREF
  struct DXGADAPTER *v105; // [rsp+88h] [rbp-220h]
  char v106; // [rsp+90h] [rbp-218h]
  _BYTE v107[16]; // [rsp+98h] [rbp-210h] BYREF
  DXGADAPTER *v108; // [rsp+A8h] [rbp-200h] BYREF
  struct DXGADAPTER *v109; // [rsp+B8h] [rbp-1F0h] BYREF
  struct DXGADAPTER *v110; // [rsp+C0h] [rbp-1E8h] BYREF
  unsigned int v111; // [rsp+C8h] [rbp-1E0h] BYREF
  unsigned int v112; // [rsp+CCh] [rbp-1DCh] BYREF
  unsigned __int64 v113; // [rsp+D0h] [rbp-1D8h] BYREF
  _QWORD v114[7]; // [rsp+D8h] [rbp-1D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp-198h] BYREF
  char v116; // [rsp+140h] [rbp-168h]
  _BYTE v117[160]; // [rsp+150h] [rbp-158h] BYREF
  _BYTE v118[144]; // [rsp+1F0h] [rbp-B8h] BYREF

  v97 = -1;
  v98 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v99 = 1;
    v97 = 2021;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2021);
  }
  else
  {
    v99 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v97, 2021LL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_QWORD *)v100 = *(_QWORD *)v5;
  CddPrimaryShareResourceHandle = *(_DWORD *)(v5 + 8);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v4);
  v8 = (DXGPROCESS *)Current;
  if ( !Current )
    goto LABEL_32;
  v109 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v108, v100[0], Current, &v109, 1);
  v12 = v109;
  if ( !v109 )
  {
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v100[0];
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v13);
    if ( !v108 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v110 = 0LL;
  v14 = v100[1];
  PairingAdapters = DxgkpGetPairingAdapters(v109, v100[1], 0LL, 0LL, &v110, &v113, 0);
  if ( PairingAdapters < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v12;
    *(_QWORD *)(v18 + 32) = v14;
    WdLogEvent5_WdError(v18);
    if ( v108 )
      DXGADAPTER::ReleaseReference(v108);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v19);
    if ( v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v97);
    return (unsigned int)PairingAdapters;
  }
  v23 = v110;
  if ( !v110 || !*((_QWORD *)v110 + 337) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v16, v15);
    *(_QWORD *)(v24 + 24) = 5097LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = 0;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v118, v23, 0LL);
  v26 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v118, 0LL);
  if ( v26 < 0 )
  {
    DXGADAPTER::ReleaseReference(v23);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118, v27);
    if ( v108 )
      DXGADAPTER::ReleaseReference(v108);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v28);
    if ( v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v97);
    return (unsigned int)v26;
  }
  v31 = *((_QWORD *)v23 + 337);
  if ( (unsigned int)v14 >= *(_DWORD *)(v31 + 80) )
  {
    DXGADAPTER::ReleaseReference(v23);
    v34 = WdLogNewEntry5_WdError(v33, v32);
    *(_QWORD *)(v34 + 24) = v14;
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118, v35);
    if ( !v108 )
    {
LABEL_32:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v7);
      if ( v99 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v97);
      }
      return 3221225485LL;
    }
LABEL_31:
    DXGADAPTER::ReleaseReference(v108);
    goto LABEL_32;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                    (DXGADAPTER **)v31,
                                    (unsigned int)v14);
  if ( !CddPrimaryShareResourceHandle && !DXGPROCESS::IsRemoteConnection(v8) )
  {
    if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v23 + 337), (unsigned int)v14) )
    {
      if ( DXGADAPTER::UsingSetTimingsFromVidPn(v23) )
      {
        VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                 *((ADAPTER_DISPLAY **)v23 + 337),
                                 (unsigned int)v14);
        if ( !VidPnSourceOwnerType || VidPnSourceOwnerType == 3 )
          v25 = 1;
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v118, v38);
  v102 = 0LL;
  v103 = 0LL;
  if ( v25 )
  {
    v44 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v41, v40) + 102);
    if ( v44 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v43, v42);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v44, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v47 = WdLogNewEntry5_WdError(v43, v42);
      *(_QWORD *)(v47 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v49, v48);
      *(_QWORD *)(v47 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v47);
      goto LABEL_80;
    }
    DXGSESSIONMODECHANGELOCK::DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v96);
    v50 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v96, 0);
    v53 = v50;
    if ( v50 < 0 )
    {
      v54 = WdLogNewEntry5_WdError(v52, v51);
      *(_QWORD *)(v54 + 24) = v53;
      WdLogEvent5_WdError(v54);
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v96);
      goto LABEL_80;
    }
    if ( DXGPROCESS::IsRemoteConnection(v8) )
    {
      v57 = WdLogNewEntry5_WdError(v56, v55);
      *(_QWORD *)(v57 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v59, v58);
      *(_QWORD *)(v57 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v57);
LABEL_79:
      DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)v96);
      goto LABEL_80;
    }
    v116 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionDataForSpecifiedSession + 2329));
    v60 = (unsigned int *)((char *)v23 + 316);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)((char *)v23 + 316),
                                             &v102,
                                             &v103,
                                             0LL,
                                             0);
    v64 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v65 = WdLogNewEntry5_WdError(v63, v62);
      *(_QWORD *)(v65 + 24) = v23;
      *(_QWORD *)(v65 + 32) = v64;
      WdLogEvent5_WdError(v65);
LABEL_77:
      if ( v116 )
      {
        KeUnstackDetachProcess(&ApcState);
        v116 = 0;
      }
      goto LABEL_79;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v107, v102);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v114,
      &v103,
      1u);
    v105 = v23;
    v106 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, (__int64)v102, 1, v66, 0);
    if ( !v114[0] )
    {
      v71 = WdLogNewEntry5_WdLowResource(v68, v67, v69, v70);
      *(_QWORD *)(v71 + 24) = 5230LL;
      WdLogEvent5_WdLowResource(v71);
      goto LABEL_74;
    }
    v72 = COREDEVICEACCESS::AcquireExclusive((__int64)v117, 1u);
    v75 = v72;
    if ( v72 < 0 )
    {
      v76 = WdLogNewEntry5_WdError(v74, v73);
      *(_QWORD *)(v76 + 24) = v102;
      *(_QWORD *)(v76 + 32) = v75;
      WdLogEvent5_WdError(v76);
      goto LABEL_74;
    }
    if ( !ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v23 + 337), (unsigned int)v14)
      || DXGPROCESS::IsRemoteConnection(v8) )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v78, v77);
      v83[3] = v14;
      v83[4] = *((int *)v23 + 80);
      v83[5] = *v60;
    }
    else
    {
      v79 = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v23 + 337), (unsigned int)v14);
      v82 = v79;
      if ( !v79 || v79 == 3 )
      {
        CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                          *((DXGADAPTER ***)v23 + 337),
                                          (unsigned int)v14);
        if ( !CddPrimaryShareResourceHandle )
        {
          v84 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                  *((DXGADAPTER ***)v23 + 337),
                  v102,
                  v14,
                  &v112,
                  &v111,
                  (struct COREDEVICEACCESS *)v117);
          v87 = v84;
          if ( v84 >= 0 )
          {
            CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                              *((DXGADAPTER ***)v23 + 337),
                                              (unsigned int)v14);
            if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(*((ADAPTER_DISPLAY **)v23 + 337), (unsigned int)v14) )
              goto LABEL_74;
            if ( ADAPTER_DISPLAY::IsVidPnSourceVisible(*((ADAPTER_DISPLAY **)v23 + 337), (unsigned int)v14) )
              goto LABEL_74;
            v89 = ADAPTER_DISPLAY::PresentCddPrimary(
                    *((ADAPTER_DISPLAY **)v23 + 337),
                    v103,
                    v14,
                    (struct COREDEVICEACCESS *)v117);
            v92 = v89;
            if ( v89 >= 0 )
              goto LABEL_74;
            v88 = (_QWORD *)WdLogNewEntry5_WdError(v91, v90);
            v88[3] = v14;
            v88[4] = v23;
            v88[5] = v92;
          }
          else
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdError(v86, v85);
            v88[3] = v23;
            v88[4] = v87;
          }
          WdLogEvent5_WdError(v88);
        }
LABEL_74:
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
        if ( v106 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v104);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v114);
        DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v107);
        goto LABEL_77;
      }
      v83 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
      v83[3] = v82;
      v83[4] = v14;
      v83[5] = *((int *)v23 + 80);
      v83[6] = *v60;
    }
    WdLogEvent5_WdError(v83);
    CddPrimaryShareResourceHandle = 0;
    goto LABEL_74;
  }
LABEL_80:
  DXGADAPTER::ReleaseReference(v23);
  if ( v103 )
    DXGCONTEXT::ReleaseReference(v103);
  if ( v102 && _InterlockedExchangeAdd64((volatile signed __int64 *)v102 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v102 + 2), v102);
  v93 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v93 = (_DWORD *)MmUserProbeAddress;
  *v93 = CddPrimaryShareResourceHandle;
  if ( v108 )
    DXGADAPTER::ReleaseReference(v108);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, (__int64)v93);
  if ( v99 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v94, &EventProfilerExit, v95, v97);
  return 0LL;
}
