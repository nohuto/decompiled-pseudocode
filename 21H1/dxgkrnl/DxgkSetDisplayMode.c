/*
 * XREFs of DxgkSetDisplayMode @ 0x1C0133700
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0008490 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z @ 0x1C0008728 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@PEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000B200 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000F00C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0011A58 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0011BB8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0011D30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247AC (--0DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247E4 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024854 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C012F174 (-SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0130D00 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0133664 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013FBA0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C013FFA0 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0157538 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C0158420 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     DpiPollDisplayChildren @ 0x1C02C230C (DpiPollDisplayChildren.c)
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
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // r13d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  _QWORD *v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  _QWORD *v63; // rax
  _OWORD *v64; // r8
  __int64 v65; // rdx
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
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  _QWORD *v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  _QWORD *v98; // rax
  __int64 v99; // rax
  void *v100; // rdi
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  struct DXGALLOCATION *v104; // [rsp+40h] [rbp-3D8h] BYREF
  struct DXGDEVICE *v105; // [rsp+48h] [rbp-3D0h] BYREF
  int v106; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v107; // [rsp+58h] [rbp-3C0h]
  char v108; // [rsp+60h] [rbp-3B8h]
  ULONG64 v109; // [rsp+68h] [rbp-3B0h]
  _QWORD v110[2]; // [rsp+70h] [rbp-3A8h] BYREF
  _BYTE v111[16]; // [rsp+80h] [rbp-398h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v112[4]; // [rsp+90h] [rbp-388h]
  _BYTE v113[12]; // [rsp+A0h] [rbp-378h]
  unsigned int v114; // [rsp+B0h] [rbp-368h]
  unsigned int v115; // [rsp+B4h] [rbp-364h] BYREF
  _BYTE v116[24]; // [rsp+B8h] [rbp-360h] BYREF
  struct _KTHREAD **v117; // [rsp+D0h] [rbp-348h]
  struct DXGDEVICE *v118; // [rsp+D8h] [rbp-340h] BYREF
  _QWORD v119[2]; // [rsp+E0h] [rbp-338h] BYREF
  _OWORD v120[2]; // [rsp+F0h] [rbp-328h] BYREF
  __int64 v121; // [rsp+110h] [rbp-308h]
  int v122; // [rsp+118h] [rbp-300h]
  _OWORD v123[2]; // [rsp+120h] [rbp-2F8h] BYREF
  __int64 v124; // [rsp+140h] [rbp-2D8h]
  int v125; // [rsp+148h] [rbp-2D0h]
  _OWORD v126[2]; // [rsp+150h] [rbp-2C8h] BYREF
  __int64 v127; // [rsp+170h] [rbp-2A8h]
  int v128; // [rsp+178h] [rbp-2A0h]
  _OWORD v129[2]; // [rsp+180h] [rbp-298h] BYREF
  __int64 v130; // [rsp+1A0h] [rbp-278h]
  int v131; // [rsp+1A8h] [rbp-270h]
  _OWORD v132[2]; // [rsp+1B0h] [rbp-268h] BYREF
  __int64 v133; // [rsp+1D0h] [rbp-248h]
  int v134; // [rsp+1D8h] [rbp-240h]
  _OWORD v135[2]; // [rsp+1E0h] [rbp-238h] BYREF
  __int64 v136; // [rsp+200h] [rbp-218h]
  int v137; // [rsp+208h] [rbp-210h]
  _OWORD v138[2]; // [rsp+210h] [rbp-208h] BYREF
  __int64 v139; // [rsp+230h] [rbp-1E8h]
  int v140; // [rsp+238h] [rbp-1E0h]
  _OWORD v141[2]; // [rsp+240h] [rbp-1D8h] BYREF
  __int64 v142; // [rsp+260h] [rbp-1B8h]
  int v143; // [rsp+268h] [rbp-1B0h]
  _OWORD v144[2]; // [rsp+270h] [rbp-1A8h] BYREF
  __int64 v145; // [rsp+290h] [rbp-188h]
  int v146; // [rsp+298h] [rbp-180h]
  _OWORD v147[2]; // [rsp+2A0h] [rbp-178h] BYREF
  __int64 v148; // [rsp+2C0h] [rbp-158h]
  int v149; // [rsp+2C8h] [rbp-150h]
  _OWORD v150[2]; // [rsp+2D0h] [rbp-148h] BYREF
  __int64 v151; // [rsp+2F0h] [rbp-128h]
  int v152; // [rsp+2F8h] [rbp-120h]
  _BYTE v153[160]; // [rsp+300h] [rbp-118h] BYREF
  _QWORD v154[10]; // [rsp+3A0h] [rbp-78h] BYREF

  v109 = a1;
  memset(v154, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v154[1]);
  v154[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v154[3]) = 49;
  LOBYTE(v154[6]) = -1;
  v106 = -1;
  v107 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v108 = 1;
    v106 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2018);
  }
  else
  {
    v108 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v106, 2018LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  v117 = Current;
  if ( !Current )
  {
    v54 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v54 + 24) = -1073741811LL;
    *(_QWORD *)(v54 + 32) = PsGetCurrentProcess(v56, v55);
    WdLogEvent5_WdError(v54);
LABEL_98:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v57);
    if ( v108 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v89, &EventProfilerExit, v90, v106);
    return 3221225485LL;
  }
  v9 = 0LL;
  v10 = 0;
  v114 = 0;
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)v112 = *(_OWORD *)v11;
  *(_QWORD *)v113 = *(_QWORD *)(v11 + 16);
  *(_DWORD *)&v113[8] = *(_DWORD *)(v11 + 24);
  v118 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v105, (unsigned int)v112[0], Current, &v118);
  v14 = v118;
  if ( !v118 )
  {
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v58[3] = -1073741811LL;
    v58[4] = PsGetCurrentProcess(v60, v59);
    v58[5] = (unsigned int)v112[0];
    WdLogEvent5_WdError(v58);
LABEL_95:
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    goto LABEL_98;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110, v118);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v116, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v116, 1LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v111);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v153, (__int64)v14, 1, v15, 0);
  LODWORD(v18) = COREDEVICEACCESS::AcquireExclusive((__int64)v153, 2LL);
  if ( (int)v18 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
    if ( v110[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    goto LABEL_48;
  }
  v19 = *((_QWORD *)v14 + 231);
  if ( !v19 )
  {
    v62 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v62 + 24) = v14;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v62);
LABEL_64:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v67);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
    if ( v110[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    goto LABEL_98;
  }
  ++*(_DWORD *)(*(_QWORD *)(v19 + 2672) + 360LL);
  DXGPROCESS::GetAllocationSafe((__int64)v117, (DXGALLOCATIONREFERENCE *)&v104, v112[1]);
  v22 = v104;
  if ( !v104 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v63[3] = -1073741811LL;
    v63[4] = v14;
    v63[5] = (unsigned int)v112[1];
    WdLogEvent5_WdError(v63);
    memset(v120, 0, sizeof(v120));
    v121 = 0LL;
    v122 = 0;
    v64 = v120;
    v65 = 0xFFFFFFFFLL;
LABEL_63:
    DmmCacheDisplayModeChangeRequest(v19, v65, v64);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, v66);
    goto LABEL_64;
  }
  v23 = *((_QWORD *)v14 + 2);
  v24 = *(_QWORD *)(v23 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v104 + 1) + 16LL) + 16LL) != v24 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdError(v23, v24);
    v68[3] = v14;
    v68[4] = v104;
    v68[5] = -1073741811LL;
    WdLogEvent5_WdError(v68);
    memset(v123, 0, sizeof(v123));
    v124 = 0LL;
    v125 = 0;
    v64 = v123;
LABEL_72:
    v65 = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    goto LABEL_63;
  }
  v25 = *((_QWORD *)v104 + 6);
  v26 = *(unsigned int *)(v25 + 4);
  if ( (v26 & 1) == 0 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdError(v25, v26);
    v70[3] = -1073741811LL;
    v70[4] = v14;
    v70[5] = (unsigned int)v112[1];
    v70[6] = v104;
    v70[7] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdError(v70);
    memset(v126, 0, sizeof(v126));
    v127 = 0LL;
    v128 = 0;
    v64 = v126;
    goto LABEL_72;
  }
  if ( v19 != *((_QWORD *)v14 + 231) )
  {
    v71 = WdLogNewEntry5_WdAssertion(v25, v26);
    *(_QWORD *)(v71 + 24) = 6163LL;
    WdLogEvent5_WdAssertion(v71);
    v22 = v104;
  }
  v27 = (unsigned int)(v112[2] - 1);
  if ( (unsigned int)v27 > 2 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
    v72[3] = -1073741811LL;
    v72[4] = v14;
    v72[5] = v112[2];
    WdLogEvent5_WdError(v72);
    memset(v129, 0, sizeof(v129));
    v130 = 0LL;
    v131 = 0;
    v64 = v129;
    goto LABEL_72;
  }
  v28 = (unsigned int)(v112[3] - 1);
  if ( (unsigned int)v28 > 3 )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v28, v26);
    v69[3] = -1073741811LL;
    v69[4] = v14;
    v69[5] = v112[3];
    WdLogEvent5_WdError(v69);
    memset(v132, 0, sizeof(v132));
    v133 = 0LL;
    v134 = 0;
    v64 = v132;
    goto LABEL_72;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v19 + 2672),
          v14,
          (*(_DWORD *)(*((_QWORD *)v22 + 6) + 4LL) >> 6) & 0xF) )
  {
    v73 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
    v74 = -1071775744;
    v73[3] = -1071775744LL;
    v73[4] = v14;
    v73[5] = (unsigned int)v112[1];
    v73[6] = v104;
    v73[7] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v73);
    memset(v135, 0, sizeof(v135));
    v136 = 0LL;
    v137 = 0;
    v75 = v135;
LABEL_77:
    DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF, v75);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, v77);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v78);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
    if ( v110[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v79);
    if ( v108 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v80, &EventProfilerExit, v81, v106);
    return v74;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(ADAPTER_DISPLAY **)(v19 + 2672),
                        (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v14 + 108) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v19 + 2672),
         (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v82 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
    v74 = -1071774910;
    v82[3] = -1071774910LL;
    v82[4] = v14;
    v82[5] = (unsigned int)v112[1];
    v82[6] = v104;
    v82[7] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v82);
    memset(v138, 0, sizeof(v138));
    v139 = 0LL;
    v140 = 0;
    v75 = v138;
    goto LABEL_77;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(ADAPTER_DISPLAY **)(v19 + 2672),
          (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF) )
  {
    v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
    v74 = -1071774972;
    v76[3] = -1071774972LL;
    v76[4] = v14;
    v76[5] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    v76[6] = (unsigned int)v112[1];
    v76[7] = v104;
    WdLogEvent5_WdDmmEvent(v76);
    memset(v141, 0, sizeof(v141));
    v142 = 0LL;
    v143 = 0;
    v75 = v141;
    goto LABEL_77;
  }
  if ( *((struct DXGDEVICE **)v104 + 1) != v14 )
  {
    v83 = (_QWORD *)WdLogNewEntry5_WdError(v32, v31);
    v83[3] = -1073741811LL;
    v83[4] = v14;
    v83[5] = (unsigned int)v112[1];
    v83[6] = v104;
    v83[7] = *((_QWORD *)v104 + 1);
    WdLogEvent5_WdError(v83);
    memset(v144, 0, sizeof(v144));
    v145 = 0LL;
    v146 = 0;
    DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF, v144);
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x807uLL,
      (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v104 + 1),
      (unsigned __int64)v14,
      0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, v84);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v85);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
    if ( v110[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    goto LABEL_98;
  }
  v33 = *((_QWORD *)v104 + 6);
  if ( *((_DWORD *)v14 + 108) == 1 )
  {
    v34 = (*(_DWORD *)(v33 + 4) >> 6) & 0xF;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v19 + 2672), v34, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v104 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v14, v34, v104) )
    {
      v37 = DXGDEVICE::PinPrimaryAllocations(v14, v34);
      v18 = v37;
      if ( v37 < 0 )
      {
        v91 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
        v91[3] = v18;
        v91[4] = v14;
        v91[5] = (unsigned int)v112[1];
        v91[6] = v104;
        v91[7] = v34;
        WdLogEvent5_WdDmmEvent(v91);
      }
      v10 = v114;
      goto LABEL_28;
    }
    v86 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v36);
    v86[3] = -1073741811LL;
    v86[4] = v14;
    v86[5] = (unsigned int)v112[1];
    v86[6] = v104;
    v86[7] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdDmmEvent(v86);
    memset(v147, 0, sizeof(v147));
    v148 = 0LL;
    v149 = 0;
    DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF, v147);
    DxgCreateLiveDumpWithWdLogs(
      0x193u,
      0x808uLL,
      (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v104 + 1),
      (unsigned __int64)v14,
      0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, v87);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v88);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
    if ( v110[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(v33 + 4) & 0x10) == 0 )
  {
LABEL_28:
    v38 = WdLogNewEntry5_WdDmmEvent(v33);
    *(_QWORD *)(v38 + 24) = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
    *(_QWORD *)(v38 + 32) = v19;
    WdLogEvent5_WdDmmEvent(v38);
    if ( (int)v18 >= 0 )
    {
      v115 = 0;
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v40, (__int64)v39) + 304200) )
        v113[4] |= 1u;
      v41 = DXGDEVICE::SetDisplayMode(
              v14,
              v104,
              v112[2],
              (enum _D3DDDI_ROTATION)v112[3],
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v113[4],
              &v115,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v154);
      LODWORD(v18) = v41;
      if ( v41 == -1071774891 )
      {
        v39 = (_DWORD *)(v109 + 16);
        if ( v109 + 16 >= MmUserProbeAddress )
          v39 = (_DWORD *)MmUserProbeAddress;
        *v39 = v115;
      }
      else if ( v41 >= 0 )
      {
        v42 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(DXGADAPTER ***)(v19 + 2672),
                (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF);
        v46 = v42;
        if ( v42 < 0 )
        {
          v98 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
          v98[3] = v19;
          v98[4] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
          v98[5] = v46;
          WdLogEvent5_WdError(v98);
        }
        v119[0] = 7LL;
        v119[1] = 0LL;
        if ( (int)DxgkStatusChangeNotify((int *)v119, v43, v45) < 0 )
        {
          v99 = WdLogNewEntry5_WdAssertion(v47, v39);
          *(_QWORD *)(v99 + 24) = 6366LL;
          WdLogEvent5_WdAssertion(v99);
        }
        v9 = *(_QWORD *)(v19 + 316);
        v10 = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( (_DWORD)v18 == -1071774920 )
    {
      v100 = *(void **)(v19 + 216);
      ObfReferenceObject(v100);
      v102 = WdLogNewEntry5_WdDmmEvent(v101);
      *(_QWORD *)(v102 + 24) = v100;
      WdLogEvent5_WdDmmEvent(v102);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v153);
      DpiPollDisplayChildren(v100, 4LL, v154);
      ObfDereferenceObject(v100);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, (__int64)v39);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v48);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
    if ( v110[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
    if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
    if ( (int)v18 >= 0 && (*((int (__fastcall **)(__int64, _QWORD))v117[11] + 51))(v9, v10) < 0 )
    {
      v103 = WdLogNewEntry5_WdAssertion(v50, v49);
      *(_QWORD *)(v103 + 24) = 6399LL;
      WdLogEvent5_WdAssertion(v103);
    }
LABEL_48:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v49);
    if ( v108 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v106);
    }
    return (unsigned int)v18;
  }
  v92 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
  v92[3] = -1071775482LL;
  v92[4] = v14;
  v92[5] = (unsigned int)v112[1];
  v92[6] = v104;
  v92[7] = (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF;
  WdLogEvent5_WdDmmEvent(v92);
  memset(v150, 0, sizeof(v150));
  v151 = 0LL;
  v152 = 0;
  DmmCacheDisplayModeChangeRequest(v19, (*(_DWORD *)(*((_QWORD *)v104 + 6) + 4LL) >> 6) & 0xF, v150);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v104, v93);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v153);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v111, v94);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v116);
  if ( v110[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v110);
  if ( v105 && _InterlockedExchangeAdd64((volatile signed __int64 *)v105 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v105 + 2), v105);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v95);
  if ( v108 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v96, &EventProfilerExit, v97, v106);
  return 3223191814LL;
}
