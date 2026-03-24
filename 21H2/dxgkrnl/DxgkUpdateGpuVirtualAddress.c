/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C022ABB0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02505A0 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0001E14 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00022BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002AC0 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004090 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004200 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004370 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000568C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006CE0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006DE4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00070D0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007124 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00072B0 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0009C58 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014AB0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019FF4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C0025C30 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C003F5F4 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FDE00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C015352C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C022EA04 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C022EA70 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C024D5EC (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rsi
  bool v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct _KTHREAD **Current; // r14
  __int64 v11; // rax
  unsigned int updated; // esi
  __int64 v13; // rdx
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  DXGCONTEXT *v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rcx
  signed __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  SIZE_T v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  char *v54; // r9
  __int64 v55; // rax
  size_t v56; // r8
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v58; // rcx
  char *v59; // rcx
  int v60; // r9d
  __int64 v61; // rdx
  unsigned int v62; // r10d
  unsigned __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  bool v68; // cf
  SIZE_T v69; // rax
  char *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // edx
  DXGALLOCATIONREFERENCE *v76; // rax
  void *v77; // rcx
  __int64 v78; // rax
  SIZE_T v79; // rax
  char *v80; // rax
  __int64 v81; // rdx
  __int64 OperationType; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  unsigned int v86; // r8d
  int v87; // r9d
  __int64 v88; // rdx
  char *v89; // r10
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v90; // rax
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rdx
  PERESOURCE *Global; // rax
  __int64 v98; // rdx
  unsigned int v99; // ecx
  __int64 v100; // r8
  struct _KTHREAD *v101; // r9
  int v102; // ecx
  __int64 v103; // r8
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v110; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  NTSTATUS v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  struct DXGDEVICE *v138; // [rsp+40h] [rbp-218h] BYREF
  void *v139; // [rsp+48h] [rbp-210h]
  int v140; // [rsp+50h] [rbp-208h] BYREF
  __int64 v141; // [rsp+58h] [rbp-200h]
  char v142; // [rsp+60h] [rbp-1F8h]
  bool v143; // [rsp+68h] [rbp-1F0h]
  _DWORD v144[3]; // [rsp+6Ch] [rbp-1ECh]
  char *v145; // [rsp+78h] [rbp-1E0h]
  unsigned int Size; // [rsp+80h] [rbp-1D8h]
  unsigned int Size_4; // [rsp+84h] [rbp-1D4h]
  DXGALLOCATIONREFERENCE *v148; // [rsp+88h] [rbp-1D0h]
  char v149[8]; // [rsp+90h] [rbp-1C8h] BYREF
  char v150; // [rsp+98h] [rbp-1C0h]
  __int64 v151; // [rsp+A0h] [rbp-1B8h] BYREF
  char v152; // [rsp+A8h] [rbp-1B0h]
  DXGPUSHLOCK *v153; // [rsp+B0h] [rbp-1A8h]
  struct _KTHREAD **v154; // [rsp+B8h] [rbp-1A0h]
  _BYTE v155[16]; // [rsp+C0h] [rbp-198h] BYREF
  struct DXGDEVICE *v156; // [rsp+D0h] [rbp-188h] BYREF
  _BYTE v157[16]; // [rsp+D8h] [rbp-180h] BYREF
  char *v158; // [rsp+E8h] [rbp-170h]
  PVOID Object; // [rsp+F0h] [rbp-168h] BYREF
  void **p_Operations; // [rsp+F8h] [rbp-160h]
  char *v161; // [rsp+100h] [rbp-158h]
  DXGCONTEXT *v162; // [rsp+108h] [rbp-150h] BYREF
  _BYTE v163[24]; // [rsp+110h] [rbp-148h] BYREF
  int v164; // [rsp+128h] [rbp-130h]
  struct _EX_RUNDOWN_REF *v165; // [rsp+130h] [rbp-128h] BYREF
  signed __int64 v166; // [rsp+138h] [rbp-120h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v167; // [rsp+140h] [rbp-118h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v168; // [rsp+148h] [rbp-110h] BYREF
  _BYTE v169[160]; // [rsp+180h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v140 = -1;
  v141 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v142 = 1;
    v140 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v142 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v140, 2106LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v143 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v154 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    updated = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140, v13);
    if ( v142 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v140);
    }
    return updated;
  }
  memset(&v168, 0, sizeof(v168));
  v14 = &v168;
  v139 = &v168;
  if ( v4 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v168 = *v3;
  }
  else
  {
    v14 = v3;
    v139 = v3;
  }
  if ( !v14->NumOperations )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    updated = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = 13042LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_25;
  }
  v156 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v138, v14->hDevice, Current, &v156);
  v18 = v156;
  if ( !v156 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = v14->hDevice;
    updated = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_45:
    if ( !v138 )
      goto LABEL_25;
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_23;
  }
  v162 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v155,
    v14->hContext,
    (struct DXGPROCESS *)Current,
    &v162,
    0);
  v23 = v162;
  if ( !v162 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v24[3] = Current;
    v24[4] = v14->hContext;
    updated = -1073741811;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
LABEL_44:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v155);
    goto LABEL_45;
  }
  if ( *((struct DXGDEVICE **)v162 + 2) != v18 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v25[3] = *((_QWORD *)v23 + 2);
    v25[4] = v18;
    updated = -1073741811;
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_44;
  }
  v158 = (char *)v18 + 16;
  v26 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( *(_BYTE *)(v26 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4240),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v18 + 110),
                *((_DWORD *)v162 + 7),
                v14);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v155);
    if ( !v138 )
      goto LABEL_25;
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v28 = v27 == 1;
    v13 = v27 - 1;
LABEL_23:
    if ( v28 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v138 + 2), v138);
    goto LABEL_25;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v151, v18);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v163,
    (DXGCONTEXT *)((char *)v23 + 464));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v169, (__int64)v18, 0, v32, 0);
  v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v169, 0LL);
  v37 = v33;
  if ( v33 < 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v38 + 24) = v37;
    *(_QWORD *)(v38 + 32) = 13093LL;
    WdLogEvent5_WdWarning(v38);
    goto LABEL_143;
  }
  v39 = *(_QWORD *)(*(_QWORD *)v158 + 16LL);
  if ( (*(_DWORD *)(v39 + 2060) & 0x40) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v34, v36);
    updated = -1073741811;
    v40[3] = -1073741811LL;
    v40[4] = 13099LL;
LABEL_41:
    WdLogEvent5_WdWarning(v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v163);
    if ( v151 && v152 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v151 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_44;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v23) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v40[3] = v154;
    v40[4] = v14->hContext;
    updated = -1073741811;
    v40[5] = -1073741811LL;
    goto LABEL_41;
  }
  *(_QWORD *)&v144[1] = DXGCONTEXT::GetVidMmCompanionContext(v23);
  if ( !*(_QWORD *)&v144[1] )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
    v40[3] = v154;
    v40[4] = v14->hContext;
    updated = -1073741811;
    v40[5] = -1073741811LL;
    v40[6] = 13115LL;
    goto LABEL_41;
  }
  updated = -1073741811;
  LODWORD(v37) = -1073741811;
  Size_4 = -1073741811;
  v148 = 0LL;
  v144[0] = 0;
  NumOperations = v14->NumOperations;
  v48 = NumOperations << 6;
  v49 = 0xFFFFFFFFLL;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v49 = (unsigned int)v48;
  Size = v49;
  v164 = v49;
  if ( v48 > 0xFFFFFFFF )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v49, NumOperations, 0xFFFFFFFFLL);
    v40[3] = v14->NumOperations;
    goto LABEL_41;
  }
  v50 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v50 = -1LL;
  v54 = (char *)operator new[](v50, 0x4B677844u, PagedPool);
  v145 = v54;
  if ( !v54 )
  {
    v55 = WdLogNewEntry5_WdLowResource(v52, v51, v53, 0LL);
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
    goto LABEL_143;
  }
  if ( v143 )
  {
    v56 = Size;
    p_Operations = (void **)&v14->Operations;
    Operations = v14->Operations;
    v58 = (ULONG64)Operations + Size;
    if ( v58 < (unsigned __int64)Operations || v58 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v54, Operations, v56);
  }
  else
  {
    p_Operations = (void **)&v14->Operations;
    memmove(v54, v14->Operations, Size);
  }
  v59 = v145;
  v14->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v145;
  v60 = 0;
  v61 = 0LL;
  v62 = v14->NumOperations;
  if ( v62 )
  {
    do
    {
      v63 = (unsigned __int64)(unsigned int)v61 << 6;
      v64 = *(unsigned int *)&v59[v63];
      if ( !(_DWORD)v64 || (_DWORD)v64 == 3 )
      {
        v66 = *(unsigned int *)&v59[v63 + 24];
        if ( !(_DWORD)v66 )
        {
          v65 = WdLogNewEntry5_WdWarning(v59, v61, v66);
          *(_QWORD *)(v65 + 32) = 13175LL;
LABEL_73:
          *(_QWORD *)(v65 + 24) = -1073741811LL;
          WdLogEvent5_WdWarning(v65);
LABEL_74:
          v77 = 0LL;
          goto LABEL_141;
        }
        if ( v60 != (_DWORD)v66 )
        {
          ++v144[0];
          v60 = v66;
        }
      }
      else if ( (unsigned int)(v64 - 1) > 1 )
      {
        v65 = WdLogNewEntry5_WdWarning(v59, v61, v64);
        *(_QWORD *)(v65 + 32) = 13188LL;
        goto LABEL_73;
      }
      v61 = (unsigned int)(v61 + 1);
    }
    while ( (unsigned int)v61 < v62 );
  }
  v67 = 8LL * v144[0];
  if ( !is_mul_ok(v144[0], 8uLL) )
    v67 = -1LL;
  v68 = __CFADD__(v67, 8LL);
  v69 = v67 + 8;
  if ( v68 )
    v69 = -1LL;
  v70 = (char *)operator new[](v69, 0x4B677844u, PagedPool);
  if ( v70 )
  {
    v75 = v144[0];
    *(_QWORD *)v70 = v144[0];
    v148 = (DXGALLOCATIONREFERENCE *)(v70 + 8);
    `vector constructor iterator'(
      v70 + 8,
      8LL,
      v75,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v76 = v148;
  }
  else
  {
    v76 = 0LL;
    v148 = 0LL;
  }
  if ( !v76 )
  {
    v78 = WdLogNewEntry5_WdLowResource(v72, v71, v73, v74);
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v78 + 24) = -1073741801LL;
    *(_QWORD *)(v78 + 32) = 13197LL;
    WdLogEvent5_WdLowResource(v78);
    goto LABEL_74;
  }
  v79 = 8LL * v144[0];
  if ( !is_mul_ok(v144[0], 8uLL) )
    v79 = -1LL;
  v80 = (char *)operator new[](v79, 0x4B677844u, PagedPool);
  v139 = v80;
  if ( !v80 )
  {
    v85 = WdLogNewEntry5_WdLowResource(OperationType, v81, v83, v84);
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v85 + 24) = -1073741801LL;
    *(_QWORD *)(v85 + 32) = 13205LL;
    WdLogEvent5_WdLowResource(v85);
    goto LABEL_140;
  }
  v86 = 0;
  v87 = -1;
  v88 = 0LL;
  Size = 0;
  if ( v14->NumOperations )
  {
    v89 = v80 - 8;
    v166 = v148 - (DXGALLOCATIONREFERENCE *)v80;
    do
    {
      v90 = &v14->Operations[(unsigned __int64)(unsigned int)v88];
      v167 = v90;
      OperationType = (unsigned int)v90->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v90->Map.hAllocation;
        if ( v86 != (_DWORD)OperationType )
        {
          Size_4 = v90->Map.hAllocation;
          LODWORD(v145) = v87 + 1;
          v161 = v89 + 8;
          v153 = (DXGPUSHLOCK *)(v87 + 1);
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v154,
                                                        (DXGALLOCATIONREFERENCE *)&v165,
                                                        OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v148 + (_QWORD)v153, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v165, v92);
          v89 = v161;
          v95 = *(_QWORD *)&v161[v166];
          if ( !v95 )
          {
            v126 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v93, 0LL);
            v126[3] = Size_4;
            v126[4] = -1073741811LL;
            v126[5] = 13236LL;
            WdLogEvent5_WdWarning(v126);
LABEL_140:
            v77 = v139;
LABEL_141:
            operator delete[](v77);
            operator delete[](*p_Operations);
            if ( v148 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v148);
LABEL_143:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v163);
            if ( v151 && v152 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v151 + 136));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v155);
            if ( v138 && _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v138 + 2), v138);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140, v135);
            if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v136, &EventProfilerExit, v137, v140);
            return (unsigned int)v37;
          }
          v96 = *(_QWORD *)(*(_QWORD *)(v95 + 8) + 16LL);
          OperationType = *(_QWORD *)(*(_QWORD *)v158 + 16LL);
          if ( *(_QWORD *)(v96 + 16) != OperationType )
          {
            v125 = (_QWORD *)WdLogNewEntry5_WdError(OperationType, v96);
            v125[3] = v18;
            v125[4] = *((_QWORD *)v148 + (_QWORD)v153);
            v125[5] = -1073741811LL;
            WdLogEvent5_WdError(v125);
            goto LABEL_140;
          }
          *(_QWORD *)v161 = *(_QWORD *)(v95 + 24);
          v90 = v167;
          LODWORD(v88) = Size;
          v86 = Size_4;
          v87 = (int)v145;
        }
        v90->Map.hAllocation = v87;
      }
      v88 = (unsigned int)(v88 + 1);
      Size = v88;
    }
    while ( (unsigned int)v88 < v14->NumOperations );
  }
  v153 = (DXGPUSHLOCK *)(v154 + 26);
  while ( 1 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(OperationType, v88);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v149, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v149, v98);
    LODWORD(v145) = v14->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v153);
    v99 = ((unsigned int)v145 >> 6) & 0xFFFFFF;
    if ( v99 >= *((_DWORD *)v154 + 64) )
      goto LABEL_99;
    v100 = v99;
    v101 = v154[30];
    v102 = *((_DWORD *)v101 + 4 * v99 + 2);
    if ( (((unsigned int)v145 >> 25) & 0x60) != (v102 & 0x60) || (v102 & 0x2000) != 0 || (v102 & 0x1F) == 0 )
      goto LABEL_99;
    v103 = 2 * v100;
    v104 = v102 & 0x1F;
    if ( (_BYTE)v104 != 11 )
    {
      v105 = WdLogNewEntry5_WdError(v104, ((unsigned int)v145 >> 25) & 0x60);
      *(_QWORD *)(v105 + 24) = 316LL;
      WdLogEvent5_WdError(v105);
LABEL_99:
      v145 = 0LL;
      goto LABEL_100;
    }
    v145 = (char *)*((_QWORD *)v101 + v103);
LABEL_100:
    ExReleasePushLockSharedEx(v153, 0LL);
    KeLeaveCriticalRegion();
    if ( !v145 )
    {
      v134 = WdLogNewEntry5_WdWarning(v107, v106, v108);
      *(_QWORD *)(v134 + 24) = v14->hFenceObject;
      *(_QWORD *)(v134 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v134);
      goto LABEL_138;
    }
    if ( *((struct DXGDEVICE **)v145 + 2) != v18 )
    {
      v133 = (_QWORD *)WdLogNewEntry5_WdError(v107, v106);
      v133[3] = *((_QWORD *)v145 + 2);
      v133[4] = v18;
      v133[5] = -1073741811LL;
      WdLogEvent5_WdError(v133);
      goto LABEL_138;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v157, *((struct DXGSYNCOBJECT **)v145 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v157);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)v145 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v145 + 2) + 16LL));
    Object = 0LL;
    v110 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, _QWORD, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v158 + 640LL) + 8LL) + 1016LL))(
             *(_QWORD *)(*(_QWORD *)v158 + 648LL),
             v14,
             *(_QWORD *)&v144[1],
             v144[0],
             v139,
             VidSchSyncObject,
             &Object);
    v37 = v110;
    if ( v110 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v169, v111);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157, v114);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v149);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v115, &EventBlockThread, v116, 68);
    v117 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v37 = v117;
    if ( !v117 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v129 = WdLogNewEntry5_WdWarning(v119, v118, v120);
      *(_QWORD *)(v129 + 24) = 13333LL;
      WdLogEvent5_WdWarning(v129);
      LODWORD(v37) = -1073741130;
LABEL_119:
      DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v157, v128);
LABEL_138:
      if ( v150 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v149);
      goto LABEL_140;
    }
    if ( (_DWORD)v37 )
    {
      v127 = WdLogNewEntry5_WdWarning(v119, v118, v120);
      *(_QWORD *)(v127 + 32) = 13340LL;
      goto LABEL_118;
    }
    v121 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v169, 0LL);
    v37 = v121;
    if ( v121 < 0 )
    {
      v127 = WdLogNewEntry5_WdWarning(v123, v122, v124);
      *(_QWORD *)(v127 + 32) = 13350LL;
LABEL_118:
      *(_QWORD *)(v127 + 24) = v37;
      WdLogEvent5_WdWarning(v127);
      goto LABEL_119;
    }
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v157, v122);
    if ( v150 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v149);
    v18 = v156;
  }
  if ( v110 < 0 )
  {
    v127 = WdLogNewEntry5_WdWarning(v112, v111, v113);
    *(_QWORD *)(v127 + 32) = 13357LL;
    goto LABEL_118;
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v157, v111);
  if ( v150 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v149);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v148);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v169);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v163);
  if ( v151 && v152 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v151 + 136));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v155);
  if ( v138 && _InterlockedExchangeAdd64((volatile signed __int64 *)v138 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v138 + 2), v138);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v140, v130);
  if ( v142 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v131, &EventProfilerExit, v132, v140);
  return 0LL;
}
