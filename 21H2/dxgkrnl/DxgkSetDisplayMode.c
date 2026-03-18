/*
 * XREFs of DxgkSetDisplayMode @ 0x1C01C2EF0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00096EC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009730 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0013788 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0013868 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0013C94 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B608 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C002B640 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01BC39C (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C4C30 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C01C5760 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C01C5CE4 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C01C5E90 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiPollDisplayChildren @ 0x1C03876C0 (DpiPollDisplayChildren.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD **Current; // r14
  __int64 v13; // rbx
  ULONG64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGDEVICE *v19; // rdi
  __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // r15
  __int64 v23; // r12
  struct DXGALLOCATION *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // r14d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  __int64 CurrentProcess; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  bool v51; // zf
  _OWORD *v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rbx
  unsigned int v56; // ebx
  _OWORD *v57; // r8
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  _DWORD *v64; // rdx
  __int64 v65; // rbx
  void *v66; // rdi
  struct DXGALLOCATION *v67; // [rsp+50h] [rbp-3F8h] BYREF
  struct DXGDEVICE *v68; // [rsp+58h] [rbp-3F0h] BYREF
  int v69; // [rsp+60h] [rbp-3E8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-3E0h]
  char v71; // [rsp+70h] [rbp-3D8h]
  ULONG64 v72; // [rsp+78h] [rbp-3D0h]
  _QWORD v73[2]; // [rsp+80h] [rbp-3C8h] BYREF
  _BYTE v74[16]; // [rsp+90h] [rbp-3B8h] BYREF
  unsigned int v75; // [rsp+A0h] [rbp-3A8h] BYREF
  unsigned int v76; // [rsp+A4h] [rbp-3A4h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v77[4]; // [rsp+A8h] [rbp-3A0h]
  _BYTE v78[12]; // [rsp+B8h] [rbp-390h]
  _BYTE v79[24]; // [rsp+C8h] [rbp-380h] BYREF
  struct _KTHREAD **v80; // [rsp+E0h] [rbp-368h]
  unsigned int v81; // [rsp+E8h] [rbp-360h]
  struct DXGDEVICE *v82; // [rsp+F0h] [rbp-358h] BYREF
  _QWORD v83[2]; // [rsp+F8h] [rbp-350h] BYREF
  _OWORD v84[2]; // [rsp+108h] [rbp-340h] BYREF
  __int64 v85; // [rsp+128h] [rbp-320h]
  int v86; // [rsp+130h] [rbp-318h]
  _OWORD v87[2]; // [rsp+138h] [rbp-310h] BYREF
  __int64 v88; // [rsp+158h] [rbp-2F0h]
  int v89; // [rsp+160h] [rbp-2E8h]
  _OWORD v90[2]; // [rsp+168h] [rbp-2E0h] BYREF
  __int64 v91; // [rsp+188h] [rbp-2C0h]
  int v92; // [rsp+190h] [rbp-2B8h]
  _OWORD v93[2]; // [rsp+198h] [rbp-2B0h] BYREF
  __int64 v94; // [rsp+1B8h] [rbp-290h]
  int v95; // [rsp+1C0h] [rbp-288h]
  _OWORD v96[2]; // [rsp+1C8h] [rbp-280h] BYREF
  __int64 v97; // [rsp+1E8h] [rbp-260h]
  int v98; // [rsp+1F0h] [rbp-258h]
  _OWORD v99[2]; // [rsp+1F8h] [rbp-250h] BYREF
  __int64 v100; // [rsp+218h] [rbp-230h]
  int v101; // [rsp+220h] [rbp-228h]
  _OWORD v102[2]; // [rsp+228h] [rbp-220h] BYREF
  __int64 v103; // [rsp+248h] [rbp-200h]
  int v104; // [rsp+250h] [rbp-1F8h]
  _OWORD v105[2]; // [rsp+258h] [rbp-1F0h] BYREF
  __int64 v106; // [rsp+278h] [rbp-1D0h]
  int v107; // [rsp+280h] [rbp-1C8h]
  _OWORD v108[2]; // [rsp+288h] [rbp-1C0h] BYREF
  __int64 v109; // [rsp+2A8h] [rbp-1A0h]
  int v110; // [rsp+2B0h] [rbp-198h]
  _OWORD v111[2]; // [rsp+2B8h] [rbp-190h] BYREF
  __int64 v112; // [rsp+2D8h] [rbp-170h]
  int v113; // [rsp+2E0h] [rbp-168h]
  _OWORD v114[2]; // [rsp+2E8h] [rbp-160h] BYREF
  __int64 v115; // [rsp+308h] [rbp-140h]
  int v116; // [rsp+310h] [rbp-138h]
  _BYTE v117[160]; // [rsp+320h] [rbp-128h] BYREF
  _QWORD v118[10]; // [rsp+3C0h] [rbp-88h] BYREF

  v72 = a1;
  memset(v118, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v118[1]);
  v118[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v118[3]) = 49;
  LOBYTE(v118[6]) = -1;
  v69 = -1;
  v70 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2018);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v80 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10, v11);
    v21 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v43 = PsGetCurrentProcess(v40, v39, v41, v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v43,
      0LL,
      0LL,
      0LL);
LABEL_63:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    v36 = v71 == 0;
    goto LABEL_48;
  }
  v13 = 0LL;
  v76 = 0;
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)v77 = *(_OWORD *)v14;
  *(_QWORD *)v78 = *(_QWORD *)(v14 + 16);
  *(_DWORD *)&v78[8] = *(_DWORD *)(v14 + 24);
  v82 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, v77[0], Current, &v82);
  v19 = v82;
  if ( !v82 )
  {
    v44 = (unsigned int)v77[0];
    v45 = PsGetCurrentProcess(v16, v15, v17, v18);
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v45, (unsigned int)v44);
    v50 = PsGetCurrentProcess(v47, v46, v48, v49);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x returned due to an invalid device handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v50,
      v44,
      0LL,
      0LL);
    if ( !v68 )
    {
LABEL_47:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
      v36 = v71 == 0;
LABEL_48:
      if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v69);
      return (unsigned int)v21;
    }
    v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_55:
    if ( v51 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    goto LABEL_47;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73, v82);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v79, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v79, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v74,
    (struct DXGPROCESS *)Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v74);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v117, (__int64)v19, 1, v20, 0);
  v21 = COREDEVICEACCESS::AcquireExclusive((__int64)v117, 2u);
  if ( v21 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    goto LABEL_63;
  }
  v22 = *((_QWORD *)v19 + 231);
  if ( !v22 )
  {
    v21 = -1073741811;
    WdLogSingleEntry2(2LL, v19, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Set display mode on render only device 0x%I64x, returning 0x%I64x.",
      (__int64)v19,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_68:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    if ( !v68 )
      goto LABEL_47;
    v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_55;
  }
  ++*(_DWORD *)(*(_QWORD *)(v22 + 2792) + 416LL);
  v23 = (unsigned int)v77[1];
  DXGPROCESS::GetAllocationSafe((__int64)v80, (DXGALLOCATIONREFERENCE *)&v67, v77[1]);
  v24 = v67;
  if ( !v67 )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v19, v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid primary specified: 0x%I64x",
      -1073741811LL,
      (__int64)v19,
      v23,
      0LL,
      0LL);
    memset(v84, 0, sizeof(v84));
    v85 = 0LL;
    v86 = 0;
    v52 = v84;
    v53 = 0xFFFFFFFFLL;
LABEL_74:
    DmmCacheDisplayModeChangeRequest(v22, v53, v52);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v67);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    goto LABEL_47;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v67 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL) )
  {
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, v19, v67, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v19,
      (__int64)v67,
      -1073741811LL,
      0LL,
      0LL);
    memset(v87, 0, sizeof(v87));
    v88 = 0LL;
    v89 = 0;
    DmmCacheDisplayModeChangeRequest(v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v87);
LABEL_97:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v67);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    goto LABEL_47;
  }
  v25 = *((_QWORD *)v67 + 6);
  if ( (*(_DWORD *)(v25 + 4) & 1) == 0 )
  {
    v21 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v19, v23, v67, (*(_DWORD *)(v25 + 4) >> 6) & 0xF);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Only primary can be used 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)v19,
      v23,
      (__int64)v67,
      (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF);
    memset(v90, 0, sizeof(v90));
    v91 = 0LL;
    v92 = 0;
    DmmCacheDisplayModeChangeRequest(v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v90);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v67);
    goto LABEL_68;
  }
  if ( v22 != *((_QWORD *)v19 + 231) )
  {
    WdLogSingleEntry1(1LL, 6379LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter == pDevice->GetDisplayAdapter(PrimaryAllocationReference.m_pAllocation->m_pAllocation->m_VidPnSourceId)",
      6379LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v24 = v67;
  }
  if ( (unsigned int)(v77[2] - 1) > 2 )
  {
    v55 = v77[2];
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v19, v77[2]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid ScanLineOrdering specified 0x%I64x",
      -1073741811LL,
      (__int64)v19,
      v55,
      0LL,
      0LL);
    memset(v93, 0, sizeof(v93));
    v94 = 0LL;
    v95 = 0;
    v53 = (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF;
    v52 = v93;
    goto LABEL_74;
  }
  if ( (unsigned int)(v77[3] - 1) > 3 )
  {
    v54 = v77[3];
    v21 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v19, v77[3]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid DisplayOrientation specified 0x%I64x",
      -1073741811LL,
      (__int64)v19,
      v54,
      0LL,
      0LL);
    memset(v96, 0, sizeof(v96));
    v97 = 0LL;
    v98 = 0;
    v53 = (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF;
    v52 = v96;
    goto LABEL_74;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v22 + 2792),
          v19,
          (*(_DWORD *)(*((_QWORD *)v24 + 6) + 4LL) >> 6) & 0xF) )
  {
    v56 = -1071775744;
    WdLogSingleEntry5(
      7LL,
      -1071775744LL,
      v19,
      (unsigned int)v77[1],
      v67,
      (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF);
    memset(v99, 0, sizeof(v99));
    v100 = 0LL;
    v101 = 0;
    v57 = v99;
LABEL_84:
    DmmCacheDisplayModeChangeRequest(v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v57);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v67);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
    if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v58, &EventProfilerExit, v59, v69);
    return v56;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(ADAPTER_DISPLAY **)(v22 + 2792),
                        (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v19 + 108) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v22 + 2792),
         (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v56 = -1071774910;
    WdLogSingleEntry5(
      7LL,
      -1071774910LL,
      v19,
      (unsigned int)v77[1],
      v67,
      (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF);
    memset(v102, 0, sizeof(v102));
    v103 = 0LL;
    v104 = 0;
    v57 = v102;
    goto LABEL_84;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(ADAPTER_DISPLAY **)(v22 + 2792),
          (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF) )
  {
    v56 = -1071774972;
    WdLogSingleEntry5(
      7LL,
      -1071774972LL,
      v19,
      (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF,
      (unsigned int)v77[1],
      v67);
    memset(v105, 0, sizeof(v105));
    v106 = 0LL;
    v107 = 0;
    v57 = v105;
    goto LABEL_84;
  }
  if ( *((struct DXGDEVICE **)v67 + 1) != v19 )
  {
    v60 = (unsigned int)v77[1];
    v21 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v19, (unsigned int)v77[1], v67, *((_QWORD *)v67 + 1));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Primary (0x%I64x 0x%I64x) must be on allocated on the specified device (0x%I64x)",
      -1073741811LL,
      (__int64)v19,
      v60,
      (__int64)v67,
      *((_QWORD *)v67 + 1));
    memset(v108, 0, sizeof(v108));
    v109 = 0LL;
    v110 = 0;
    DmmCacheDisplayModeChangeRequest(v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v108);
    v61 = 2055LL;
LABEL_96:
    DxgCreateLiveDumpWithWdLogs(403LL, v61);
    goto LABEL_97;
  }
  v26 = *((_QWORD *)v67 + 6);
  if ( *((_DWORD *)v19 + 108) == 1 )
  {
    v27 = (*(_DWORD *)(v26 + 4) >> 6) & 0xF;
    v81 = v27;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v22 + 2792), v27, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v67 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v19, v27, v67) )
    {
      v29 = DXGDEVICE::PinPrimaryAllocations(v19, v27);
      v21 = v29;
      if ( v29 < 0 )
        WdLogSingleEntry5(7LL, v29, v19, (unsigned int)v77[1], v67, v81);
      goto LABEL_27;
    }
    v21 = -1073741811;
    WdLogSingleEntry5(
      7LL,
      -1073741811LL,
      v19,
      (unsigned int)v77[1],
      v67,
      (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF);
    memset(v111, 0, sizeof(v111));
    v112 = 0LL;
    v113 = 0;
    DmmCacheDisplayModeChangeRequest(v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v111);
    v61 = 2056LL;
    goto LABEL_96;
  }
  if ( (*(_DWORD *)(v26 + 4) & 0x10) == 0 )
  {
LABEL_27:
    WdLogSingleEntry2(7LL, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v22);
    if ( v21 >= 0 )
    {
      v75 = 0;
      if ( *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
        v78[4] |= 1u;
      v30 = DXGDEVICE::SetDisplayMode(
              v19,
              v67,
              v77[2],
              (enum _D3DDDI_ROTATION)v77[3],
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v78[4],
              &v75,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v118);
      v21 = v30;
      if ( v30 == -1071774891 )
      {
        v64 = (_DWORD *)(v72 + 16);
        if ( v72 + 16 >= MmUserProbeAddress )
          v64 = (_DWORD *)MmUserProbeAddress;
        *v64 = v75;
      }
      else if ( v30 >= 0 )
      {
        v31 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v22 + 2792),
                (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF);
        if ( v31 < 0 )
        {
          v65 = v31;
          WdLogSingleEntry3(2LL, v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v31);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on DXGADAPTER 0x%I64x (status = 0x%I64x)",
            v22,
            (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF,
            v65,
            0LL,
            0LL);
        }
        v83[0] = 7LL;
        v83[1] = 0LL;
        if ( (int)DxgkStatusChangeNotify((int *)v83, v32, v33) < 0 )
        {
          WdLogSingleEntry1(1LL, 6584LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"NT_SUCCESS(NotificationStatus)",
            6584LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v13 = *(_QWORD *)(v22 + 404);
        v76 = (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( v21 == -1071774920 )
    {
      v66 = *(void **)(v22 + 216);
      ObfReferenceObject(v66);
      WdLogSingleEntry1(7LL, v66);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v117);
      DpiPollDisplayChildren(v66, 4LL, v118);
      ObfDereferenceObject(v66);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v67);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    if ( v21 >= 0 && (*((int (__fastcall **)(__int64, _QWORD))v80[11] + 51))(v13, v76) < 0 )
    {
      WdLogSingleEntry1(1LL, 6617LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 6617LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_47;
  }
  WdLogSingleEntry5(7LL, -1071775482LL, v19, (unsigned int)v77[1], v67, (*(_DWORD *)(v26 + 4) >> 6) & 0xF);
  memset(v114, 0, sizeof(v114));
  v115 = 0LL;
  v116 = 0;
  DmmCacheDisplayModeChangeRequest(v22, (*(_DWORD *)(*((_QWORD *)v67 + 6) + 4LL) >> 6) & 0xF, v114);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v67);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v117);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v74);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v79);
  if ( v73[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
  if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v69);
  return 3223191814LL;
}
