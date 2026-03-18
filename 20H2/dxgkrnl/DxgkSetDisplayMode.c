/*
 * XREFs of DxgkSetDisplayMode @ 0x1C0147C10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002118 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00041C0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00071B4 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00099A8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A15C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C000B94C (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BA54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000CEDC (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014350 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024730 (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024768 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C00247D8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E2FD4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FBFC0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C013EC78 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0140680 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0148430 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0148CB4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C01492D0 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0149C68 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C0149DFC (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     DpiPollDisplayChildren @ 0x1C02C58CC (DpiPollDisplayChildren.c)
 */

__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v9; // rbx
  unsigned int v10; // r13d
  ULONG64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGALLOCATION *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  unsigned int v36; // r13d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  _DWORD *v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  _QWORD *v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  _OWORD *v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  unsigned int v74; // ebx
  _OWORD *v75; // r8
  _QWORD *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  _QWORD *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  _QWORD *v94; // rax
  __int64 v95; // rax
  void *v96; // rdi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rax
  struct DXGALLOCATION *v102; // [rsp+40h] [rbp-3D8h] BYREF
  struct DXGDEVICE *v103; // [rsp+48h] [rbp-3D0h] BYREF
  int v104; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v105; // [rsp+58h] [rbp-3C0h]
  char v106; // [rsp+60h] [rbp-3B8h]
  ULONG64 v107; // [rsp+68h] [rbp-3B0h]
  _QWORD v108[2]; // [rsp+70h] [rbp-3A8h] BYREF
  _BYTE v109[16]; // [rsp+80h] [rbp-398h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v110[4]; // [rsp+90h] [rbp-388h]
  _BYTE v111[12]; // [rsp+A0h] [rbp-378h]
  unsigned int v112; // [rsp+B0h] [rbp-368h]
  unsigned int v113; // [rsp+B4h] [rbp-364h] BYREF
  _BYTE v114[24]; // [rsp+B8h] [rbp-360h] BYREF
  struct _KTHREAD **v115; // [rsp+D0h] [rbp-348h]
  struct DXGDEVICE *v116; // [rsp+D8h] [rbp-340h] BYREF
  _QWORD v117[2]; // [rsp+E0h] [rbp-338h] BYREF
  _OWORD v118[2]; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v119; // [rsp+110h] [rbp-308h]
  int v120; // [rsp+118h] [rbp-300h]
  _OWORD v121[2]; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v122; // [rsp+140h] [rbp-2D8h]
  int v123; // [rsp+148h] [rbp-2D0h]
  _OWORD v124[2]; // [rsp+150h] [rbp-2C8h] BYREF
  __int64 v125; // [rsp+170h] [rbp-2A8h]
  int v126; // [rsp+178h] [rbp-2A0h]
  _OWORD v127[2]; // [rsp+180h] [rbp-298h] BYREF
  __int64 v128; // [rsp+1A0h] [rbp-278h]
  int v129; // [rsp+1A8h] [rbp-270h]
  _OWORD v130[2]; // [rsp+1B0h] [rbp-268h] BYREF
  __int64 v131; // [rsp+1D0h] [rbp-248h]
  int v132; // [rsp+1D8h] [rbp-240h]
  _OWORD v133[2]; // [rsp+1E0h] [rbp-238h] BYREF
  __int64 v134; // [rsp+200h] [rbp-218h]
  int v135; // [rsp+208h] [rbp-210h]
  _OWORD v136[2]; // [rsp+210h] [rbp-208h] BYREF
  __int64 v137; // [rsp+230h] [rbp-1E8h]
  int v138; // [rsp+238h] [rbp-1E0h]
  _OWORD v139[2]; // [rsp+240h] [rbp-1D8h] BYREF
  __int64 v140; // [rsp+260h] [rbp-1B8h]
  int v141; // [rsp+268h] [rbp-1B0h]
  _OWORD v142[2]; // [rsp+270h] [rbp-1A8h] BYREF
  __int64 v143; // [rsp+290h] [rbp-188h]
  int v144; // [rsp+298h] [rbp-180h]
  _OWORD v145[2]; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v146; // [rsp+2C0h] [rbp-158h]
  int v147; // [rsp+2C8h] [rbp-150h]
  _OWORD v148[2]; // [rsp+2D0h] [rbp-148h] BYREF
  __int64 v149; // [rsp+2F0h] [rbp-128h]
  int v150; // [rsp+2F8h] [rbp-120h]
  _BYTE v151[160]; // [rsp+300h] [rbp-118h] BYREF
  _QWORD v152[10]; // [rsp+3A0h] [rbp-78h] BYREF

  v107 = a1;
  memset(v152, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v152[1]);
  v152[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v152[3]) = 49;
  LOBYTE(v152[6]) = -1;
  v104 = -1;
  v105 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v106 = 1;
    v104 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2018);
  }
  else
  {
    v106 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v104, 2018LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v115 = Current;
  if ( !Current )
  {
    v56 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    *(_QWORD *)(v56 + 32) = PsGetCurrentProcess(v58, v57);
    WdLogEvent5_WdError(v56);
LABEL_98:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v59);
    if ( v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v86, &EventProfilerExit, v87, v104);
    return 3221225485LL;
  }
  v9 = 0LL;
  v10 = 0;
  v112 = 0;
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v110 = *(_OWORD *)v11;
  *(_QWORD *)v111 = *(_QWORD *)(v11 + 16);
  *(_DWORD *)&v111[8] = *(_DWORD *)(v11 + 24);
  v116 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v103, (unsigned int)v110[0], Current, &v116);
  v14 = v116;
  if ( !v116 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v60[3] = -1073741811LL;
    v60[4] = PsGetCurrentProcess(v62, v61);
    v60[5] = (unsigned int)v110[0];
    WdLogEvent5_WdError(v60);
LABEL_95:
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    goto LABEL_98;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108, v116);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v114, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v114, 1LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v151, (__int64)v14, 1, v15, 0);
  LODWORD(v18) = COREDEVICEACCESS::AcquireExclusive((__int64)v151, 2u);
  if ( (int)v18 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
    if ( v108[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    goto LABEL_48;
  }
  v19 = *((_QWORD *)v14 + 231);
  if ( !v19 )
  {
    v63 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v63 + 24) = v14;
    *(_QWORD *)(v63 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v63);
LABEL_64:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
    if ( v108[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    goto LABEL_98;
  }
  ++*(_DWORD *)(*(_QWORD *)(v19 + 2696) + 360LL);
  DXGPROCESS::GetAllocationSafe((__int64)v115, (DXGALLOCATIONREFERENCE *)&v102, v110[1]);
  v22 = v102;
  if ( !v102 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v64[3] = -1073741811LL;
    v64[4] = v14;
    v64[5] = (unsigned int)v110[1];
    WdLogEvent5_WdError(v64);
    memset(v118, 0, sizeof(v118));
    v119 = 0LL;
    v120 = 0;
    v65 = v118;
    v66 = 0xFFFFFFFFLL;
LABEL_63:
    DmmCacheDisplayModeChangeRequest(v19, v66, v65);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v102, v67);
    goto LABEL_64;
  }
  v23 = *((_QWORD *)v14 + 2);
  v24 = *(_QWORD *)(v23 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v102 + 1) + 16LL) + 16LL) != v24 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v23, v24);
    v68[3] = v14;
    v68[4] = v102;
    v68[5] = -1073741811LL;
    WdLogEvent5_WdError(v68);
    memset(v121, 0, sizeof(v121));
    v122 = 0LL;
    v123 = 0;
    v65 = v121;
LABEL_72:
    v66 = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_63;
  }
  v25 = *((_QWORD *)v102 + 6);
  v26 = *(unsigned int *)(v25 + 4);
  if ( (v26 & 1) == 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v25, v26);
    v70[3] = -1073741811LL;
    v70[4] = v14;
    v70[5] = (unsigned int)v110[1];
    v70[6] = v102;
    v70[7] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v70);
    memset(v124, 0, sizeof(v124));
    v125 = 0LL;
    v126 = 0;
    v65 = v124;
    goto LABEL_72;
  }
  if ( v19 != *((_QWORD *)v14 + 231) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v25, v26);
    *(_QWORD *)(v71 + 24) = 6163LL;
    WdLogEvent5_WdAssertion(v71);
    v22 = v102;
  }
  v27 = (unsigned int)(v110[2] - 1);
  if ( (unsigned int)v27 > 2 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v72[3] = -1073741811LL;
    v72[4] = v14;
    v72[5] = v110[2];
    WdLogEvent5_WdError(v72);
    memset(v127, 0, sizeof(v127));
    v128 = 0LL;
    v129 = 0;
    v65 = v127;
    goto LABEL_72;
  }
  v28 = (unsigned int)(v110[3] - 1);
  if ( (unsigned int)v28 > 3 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v28, v26);
    v69[3] = -1073741811LL;
    v69[4] = v14;
    v69[5] = v110[3];
    WdLogEvent5_WdError(v69);
    memset(v130, 0, sizeof(v130));
    v131 = 0LL;
    v132 = 0;
    v65 = v130;
    goto LABEL_72;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v19 + 2696),
          v14,
          (*(_DWORD *)(*((_QWORD *)v22 + 6) + 4LL) >> 6) & 0xF) )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30, v29);
    v74 = -1071775744;
    v73[3] = -1071775744LL;
    v73[4] = v14;
    v73[5] = (unsigned int)v110[1];
    v73[6] = v102;
    v73[7] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v73);
    memset(v133, 0, sizeof(v133));
    v134 = 0LL;
    v135 = 0;
    v75 = v133;
LABEL_77:
    DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF, v75);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v102, v77);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
    if ( v108[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v78);
    if ( v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v79, &EventProfilerExit, v80, v104);
    return v74;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(ADAPTER_DISPLAY **)(v19 + 2696),
                        (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v14 + 108) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v19 + 2696),
         (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32, v31);
    v74 = -1071774910;
    v81[3] = -1071774910LL;
    v81[4] = v14;
    v81[5] = (unsigned int)v110[1];
    v81[6] = v102;
    v81[7] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v81);
    memset(v136, 0, sizeof(v136));
    v137 = 0LL;
    v138 = 0;
    v75 = v136;
    goto LABEL_77;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(ADAPTER_DISPLAY **)(v19 + 2696),
          (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF) )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v34, v33);
    v74 = -1071774972;
    v76[3] = -1071774972LL;
    v76[4] = v14;
    v76[5] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    v76[6] = (unsigned int)v110[1];
    v76[7] = v102;
    WdLogEvent5_WdDmmEvent(v76);
    memset(v139, 0, sizeof(v139));
    v140 = 0LL;
    v141 = 0;
    v75 = v139;
    goto LABEL_77;
  }
  if ( *((struct DXGDEVICE **)v102 + 1) != v14 )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
    v82[3] = -1073741811LL;
    v82[4] = v14;
    v82[5] = (unsigned int)v110[1];
    v82[6] = v102;
    v82[7] = *((_QWORD *)v102 + 1);
    WdLogEvent5_WdError(v82);
    memset(v142, 0, sizeof(v142));
    v143 = 0LL;
    v144 = 0;
    DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF, v142);
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x807uLL,
      (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v102 + 1),
      (unsigned __int64)v14,
      0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v102, v83);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
    if ( v108[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    goto LABEL_98;
  }
  v35 = *((_QWORD *)v102 + 6);
  if ( *((_DWORD *)v14 + 108) == 1 )
  {
    v36 = (*(_DWORD *)(v35 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2696), v36, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v102 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v14, v36, v102) )
    {
      v40 = DXGDEVICE::PinPrimaryAllocations(v14, v36);
      v18 = v40;
      if ( v40 < 0 )
      {
        v88 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v33);
        v88[3] = v18;
        v88[4] = v14;
        v88[5] = (unsigned int)v110[1];
        v88[6] = v102;
        v88[7] = v36;
        WdLogEvent5_WdDmmEvent(v88);
      }
      v10 = v112;
      goto LABEL_28;
    }
    v84 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v39, v38);
    v84[3] = -1073741811LL;
    v84[4] = v14;
    v84[5] = (unsigned int)v110[1];
    v84[6] = v102;
    v84[7] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v84);
    memset(v145, 0, sizeof(v145));
    v146 = 0LL;
    v147 = 0;
    DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF, v145);
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x808uLL,
      (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v102 + 1),
      (unsigned __int64)v14,
      0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v102, v85);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
    if ( v108[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(v35 + 4) & 0x10) == 0 )
  {
LABEL_28:
    v41 = WdLogNewEntry5_WdDmmEvent(v35, v33);
    *(_QWORD *)(v41 + 24) = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v41 + 32) = v19;
    WdLogEvent5_WdDmmEvent(v41);
    if ( (int)v18 >= 0 )
    {
      v113 = 0;
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v43, (__int64)v42) + 304320) )
        v111[4] |= 1u;
      v44 = DXGDEVICE::SetDisplayMode(
              v14,
              v102,
              v110[2],
              (enum _D3DDDI_ROTATION)v110[3],
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v111[4],
              &v113,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v152);
      LODWORD(v18) = v44;
      if ( v44 == -1071774891 )
      {
        v42 = (_DWORD *)(v107 + 16);
        if ( v107 + 16 >= MmUserProbeAddress )
          v42 = (_DWORD *)MmUserProbeAddress;
        *v42 = v113;
      }
      else if ( v44 >= 0 )
      {
        v45 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v19 + 2696),
                (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF);
        v49 = v45;
        if ( v45 < 0 )
        {
          v94 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
          v94[3] = v19;
          v94[4] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
          v94[5] = v49;
          WdLogEvent5_WdError(v94);
        }
        v117[0] = 7LL;
        v117[1] = 0LL;
        if ( (int)DxgkStatusChangeNotify((int *)v117, v46, v48) < 0 )
        {
          v95 = WdLogNewEntry5_WdAssertion(v50, v42);
          *(_QWORD *)(v95 + 24) = 6366LL;
          WdLogEvent5_WdAssertion(v95);
        }
        v9 = *(_QWORD *)(v19 + 316);
        v10 = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v18 == -1071774920 )
    {
      v96 = *(void **)(v19 + 216);
      ObfReferenceObject(v96);
      v99 = WdLogNewEntry5_WdDmmEvent(v98, v97);
      *(_QWORD *)(v99 + 24) = v96;
      WdLogEvent5_WdDmmEvent(v99);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v151, v100);
      DpiPollDisplayChildren(v96, 4LL, v152);
      ObfDereferenceObject(v96);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v102, (__int64)v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
    if ( v108[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
    if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
    if ( (int)v18 >= 0 && (*((int (__fastcall **)(__int64, _QWORD))v115[11] + 51))(v9, v10) < 0 )
    {
      v101 = WdLogNewEntry5_WdAssertion(v52, v51);
      *(_QWORD *)(v101 + 24) = 6399LL;
      WdLogEvent5_WdAssertion(v101);
    }
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v51);
    if ( v106 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v104);
    }
    return (unsigned int)v18;
  }
  v89 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35, v33);
  v89[3] = -1071775482LL;
  v89[4] = v14;
  v89[5] = (unsigned int)v110[1];
  v89[6] = v102;
  v89[7] = (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v89);
  memset(v148, 0, sizeof(v148));
  v149 = 0LL;
  v150 = 0;
  DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v102 + 6) + 4LL) >> 6) & 0xF, v148);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v102, v90);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v151);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v109);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v114);
  if ( v108[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v108);
  if ( v103 && _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v103 + 2), v103);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v104, v91);
  if ( v106 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v92, &EventProfilerExit, v93, v104);
  return 3223191814LL;
}
