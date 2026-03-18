/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C0226C10
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024C3D0 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0007F18 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008020 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A1D4 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000A72C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C000E994 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EC34 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000EE14 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019318 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C00248B4 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C003D8AC (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C011BAB0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C022AA10 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C022AA7C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C0249498 (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
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
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  NTSTATUS v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rdx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  _QWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  struct DXGDEVICE *v141; // [rsp+40h] [rbp-218h] BYREF
  void *v142; // [rsp+48h] [rbp-210h]
  int v143; // [rsp+50h] [rbp-208h] BYREF
  __int64 v144; // [rsp+58h] [rbp-200h]
  char v145; // [rsp+60h] [rbp-1F8h]
  bool v146; // [rsp+68h] [rbp-1F0h]
  _DWORD v147[3]; // [rsp+6Ch] [rbp-1ECh]
  char *v148; // [rsp+78h] [rbp-1E0h]
  unsigned int Size; // [rsp+80h] [rbp-1D8h]
  unsigned int Size_4; // [rsp+84h] [rbp-1D4h]
  DXGALLOCATIONREFERENCE *v151; // [rsp+88h] [rbp-1D0h]
  char v152[8]; // [rsp+90h] [rbp-1C8h] BYREF
  char v153; // [rsp+98h] [rbp-1C0h]
  __int64 v154; // [rsp+A0h] [rbp-1B8h] BYREF
  char v155; // [rsp+A8h] [rbp-1B0h]
  DXGPUSHLOCK *v156; // [rsp+B0h] [rbp-1A8h]
  struct _KTHREAD **v157; // [rsp+B8h] [rbp-1A0h]
  _BYTE v158[16]; // [rsp+C0h] [rbp-198h] BYREF
  struct DXGDEVICE *v159; // [rsp+D0h] [rbp-188h] BYREF
  _BYTE v160[16]; // [rsp+D8h] [rbp-180h] BYREF
  char *v161; // [rsp+E8h] [rbp-170h]
  PVOID Object; // [rsp+F0h] [rbp-168h] BYREF
  void **p_Operations; // [rsp+F8h] [rbp-160h]
  char *v164; // [rsp+100h] [rbp-158h]
  DXGCONTEXT *v165; // [rsp+108h] [rbp-150h] BYREF
  _BYTE v166[24]; // [rsp+110h] [rbp-148h] BYREF
  int v167; // [rsp+128h] [rbp-130h]
  struct _EX_RUNDOWN_REF *v168; // [rsp+130h] [rbp-128h] BYREF
  signed __int64 v169; // [rsp+138h] [rbp-120h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v170; // [rsp+140h] [rbp-118h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v171; // [rsp+148h] [rbp-110h] BYREF
  _BYTE v172[160]; // [rsp+180h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v143 = -1;
  v144 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v145 = 1;
    v143 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v145 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v143, 2106LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v146 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  v157 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    updated = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v143, v13);
    if ( v145 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v143);
    }
    return updated;
  }
  memset(&v171, 0, sizeof(v171));
  v14 = &v171;
  v142 = &v171;
  if ( v4 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v171 = *v3;
  }
  else
  {
    v14 = v3;
    v142 = v3;
  }
  if ( !v14->NumOperations )
  {
    v15 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    updated = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    *(_QWORD *)(v15 + 32) = 12793LL;
    WdLogEvent5_WdWarning(v15);
    goto LABEL_25;
  }
  v159 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v141, v14->hDevice, Current, &v159);
  v18 = v159;
  if ( !v159 )
  {
    v19 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v19 + 24) = v14->hDevice;
    updated = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_45:
    if ( !v141 )
      goto LABEL_25;
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_23;
  }
  v165 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
    (DXGCONTEXTBYHANDLE *)v158,
    v14->hContext,
    (struct DXGPROCESS *)Current,
    &v165,
    0);
  v23 = v165;
  if ( !v165 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    v24[3] = Current;
    v24[4] = v14->hContext;
    updated = -1073741811;
    v24[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v24);
LABEL_44:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v158);
    goto LABEL_45;
  }
  if ( *((struct DXGDEVICE **)v165 + 2) != v18 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
    v25[3] = *((_QWORD *)v23 + 2);
    v25[4] = v18;
    updated = -1073741811;
    v25[5] = -1073741811LL;
    WdLogEvent5_WdError(v25);
    goto LABEL_44;
  }
  v161 = (char *)v18 + 16;
  v26 = *(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL);
  if ( *(_BYTE *)(v26 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v26 + 4208),
                (struct DXGPROCESS *)Current,
                *((_DWORD *)v18 + 110),
                *((_DWORD *)v165 + 7),
                v14);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v158);
    if ( !v141 )
      goto LABEL_25;
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 8, 0xFFFFFFFFFFFFFFFFuLL);
    v28 = v27 == 1;
    v13 = v27 - 1;
LABEL_23:
    if ( v28 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v141 + 2), v141);
    goto LABEL_25;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v154, v18);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v166,
    (DXGCONTEXT *)((char *)v23 + 464));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v172, (__int64)v18, 0, v32, 0);
  v33 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v172, 0LL);
  v37 = v33;
  if ( v33 < 0 )
  {
    v38 = WdLogNewEntry5_WdWarning(v35, v34, v36);
    *(_QWORD *)(v38 + 24) = v37;
    *(_QWORD *)(v38 + 32) = 12844LL;
    WdLogEvent5_WdWarning(v38);
    goto LABEL_143;
  }
  v39 = *(_QWORD *)(*(_QWORD *)v161 + 16LL);
  if ( (*(_DWORD *)(v39 + 2036) & 0x40) == 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v34, v36);
    updated = -1073741811;
    v40[3] = -1073741811LL;
    v40[4] = 12850LL;
LABEL_41:
    WdLogEvent5_WdWarning(v40);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v172);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v166);
    if ( v154 && v155 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v154 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_44;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v23) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
    v40[3] = v157;
    v40[4] = v14->hContext;
    updated = -1073741811;
    v40[5] = -1073741811LL;
    goto LABEL_41;
  }
  *(_QWORD *)&v147[1] = DXGCONTEXT::GetVidMmCompanionContext(v23);
  if ( !*(_QWORD *)&v147[1] )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v45, v44, v46);
    v40[3] = v157;
    v40[4] = v14->hContext;
    updated = -1073741811;
    v40[5] = -1073741811LL;
    v40[6] = 12866LL;
    goto LABEL_41;
  }
  updated = -1073741811;
  LODWORD(v37) = -1073741811;
  Size_4 = -1073741811;
  v151 = 0LL;
  v147[0] = 0;
  NumOperations = v14->NumOperations;
  v48 = NumOperations << 6;
  v49 = 0xFFFFFFFFLL;
  if ( NumOperations << 6 <= 0xFFFFFFFF )
    v49 = (unsigned int)v48;
  Size = v49;
  v167 = v49;
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
  v148 = v54;
  if ( !v54 )
  {
    v55 = WdLogNewEntry5_WdLowResource(v52, v51, v53, 0LL);
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v55 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v55);
    goto LABEL_143;
  }
  if ( v146 )
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
  v59 = v148;
  v14->Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v148;
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
          *(_QWORD *)(v65 + 32) = 12926LL;
LABEL_73:
          *(_QWORD *)(v65 + 24) = -1073741811LL;
          WdLogEvent5_WdWarning(v65);
LABEL_74:
          v77 = 0LL;
          goto LABEL_141;
        }
        if ( v60 != (_DWORD)v66 )
        {
          ++v147[0];
          v60 = v66;
        }
      }
      else if ( (unsigned int)(v64 - 1) > 1 )
      {
        v65 = WdLogNewEntry5_WdWarning(v59, v61, v64);
        *(_QWORD *)(v65 + 32) = 12939LL;
        goto LABEL_73;
      }
      v61 = (unsigned int)(v61 + 1);
    }
    while ( (unsigned int)v61 < v62 );
  }
  v67 = 8LL * v147[0];
  if ( !is_mul_ok(v147[0], 8uLL) )
    v67 = -1LL;
  v68 = __CFADD__(v67, 8LL);
  v69 = v67 + 8;
  if ( v68 )
    v69 = -1LL;
  v70 = (char *)operator new[](v69, 0x4B677844u, PagedPool);
  if ( v70 )
  {
    v75 = v147[0];
    *(_QWORD *)v70 = v147[0];
    v151 = (DXGALLOCATIONREFERENCE *)(v70 + 8);
    `vector constructor iterator'(
      v70 + 8,
      8LL,
      v75,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v76 = v151;
  }
  else
  {
    v76 = 0LL;
    v151 = 0LL;
  }
  if ( !v76 )
  {
    v78 = WdLogNewEntry5_WdLowResource(v72, v71, v73, v74);
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v78 + 24) = -1073741801LL;
    *(_QWORD *)(v78 + 32) = 12948LL;
    WdLogEvent5_WdLowResource(v78);
    goto LABEL_74;
  }
  v79 = 8LL * v147[0];
  if ( !is_mul_ok(v147[0], 8uLL) )
    v79 = -1LL;
  v80 = (char *)operator new[](v79, 0x4B677844u, PagedPool);
  v142 = v80;
  if ( !v80 )
  {
    v85 = WdLogNewEntry5_WdLowResource(OperationType, v81, v83, v84);
    LODWORD(v37) = -1073741801;
    *(_QWORD *)(v85 + 24) = -1073741801LL;
    *(_QWORD *)(v85 + 32) = 12956LL;
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
    v169 = v151 - (DXGALLOCATIONREFERENCE *)v80;
    do
    {
      v90 = &v14->Operations[(unsigned __int64)(unsigned int)v88];
      v170 = v90;
      OperationType = (unsigned int)v90->OperationType;
      if ( !(_DWORD)OperationType || (_DWORD)OperationType == 3 )
      {
        OperationType = v90->Map.hAllocation;
        if ( v86 != (_DWORD)OperationType )
        {
          Size_4 = v90->Map.hAllocation;
          LODWORD(v148) = v87 + 1;
          v164 = v89 + 8;
          v156 = (DXGPUSHLOCK *)(v87 + 1);
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v157,
                                                        (DXGALLOCATIONREFERENCE *)&v168,
                                                        OperationType);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v151 + (_QWORD)v156, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v168, v92);
          v89 = v164;
          v95 = *(_QWORD *)&v164[v169];
          if ( !v95 )
          {
            v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v94, v93, 0LL);
            v127[3] = Size_4;
            v127[4] = -1073741811LL;
            v127[5] = 12987LL;
            WdLogEvent5_WdWarning(v127);
LABEL_140:
            v77 = v142;
LABEL_141:
            operator delete[](v77);
            operator delete[](*p_Operations);
            if ( v151 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v151);
LABEL_143:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v172);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v166);
            if ( v154 && v155 )
            {
              ExReleaseResourceLite(*(PERESOURCE *)(v154 + 136));
              KeLeaveCriticalRegion();
            }
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v158);
            if ( v141 && _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v141 + 2), v141);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v143, v138);
            if ( v145 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v139, &EventProfilerExit, v140, v143);
            return (unsigned int)v37;
          }
          v96 = *(_QWORD *)(*(_QWORD *)(v95 + 8) + 16LL);
          OperationType = *(_QWORD *)(*(_QWORD *)v161 + 16LL);
          if ( *(_QWORD *)(v96 + 16) != OperationType )
          {
            v126 = (_QWORD *)WdLogNewEntry5_WdError(OperationType, v96);
            v126[3] = v18;
            v126[4] = *((_QWORD *)v151 + (_QWORD)v156);
            v126[5] = -1073741811LL;
            WdLogEvent5_WdError(v126);
            goto LABEL_140;
          }
          *(_QWORD *)v164 = *(_QWORD *)(v95 + 24);
          v90 = v170;
          LODWORD(v88) = Size;
          v86 = Size_4;
          v87 = (int)v148;
        }
        v90->Map.hAllocation = v87;
      }
      v88 = (unsigned int)(v88 + 1);
      Size = v88;
    }
    while ( (unsigned int)v88 < v14->NumOperations );
  }
  v156 = (DXGPUSHLOCK *)(v157 + 26);
  while ( 1 )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(OperationType, v88);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v152, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v152, v98);
    LODWORD(v148) = v14->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v156);
    v99 = ((unsigned int)v148 >> 6) & 0xFFFFFF;
    if ( v99 >= *((_DWORD *)v157 + 64) )
      goto LABEL_99;
    v100 = v99;
    v101 = v157[30];
    v102 = *((_DWORD *)v101 + 4 * v99 + 2);
    if ( (((unsigned int)v148 >> 25) & 0x60) != (v102 & 0x60) || (v102 & 0x2000) != 0 || (v102 & 0x1F) == 0 )
      goto LABEL_99;
    v103 = 2 * v100;
    v104 = v102 & 0x1F;
    if ( (_BYTE)v104 != 11 )
    {
      v105 = WdLogNewEntry5_WdError(v104, ((unsigned int)v148 >> 25) & 0x60);
      *(_QWORD *)(v105 + 24) = 267LL;
      WdLogEvent5_WdError(v105);
LABEL_99:
      v148 = 0LL;
      goto LABEL_100;
    }
    v148 = (char *)*((_QWORD *)v101 + v103);
LABEL_100:
    ExReleasePushLockSharedEx(v156, 0LL);
    KeLeaveCriticalRegion();
    if ( !v148 )
    {
      v137 = WdLogNewEntry5_WdWarning(v107, v106, v108);
      *(_QWORD *)(v137 + 24) = v14->hFenceObject;
      *(_QWORD *)(v137 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v137);
      goto LABEL_138;
    }
    if ( *((struct DXGDEVICE **)v148 + 2) != v18 )
    {
      v136 = (_QWORD *)WdLogNewEntry5_WdError(v107, v106);
      v136[3] = *((_QWORD *)v148 + 2);
      v136[4] = v18;
      v136[5] = -1073741811LL;
      WdLogEvent5_WdError(v136);
      goto LABEL_138;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v160, *((struct DXGSYNCOBJECT **)v148 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v160);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)v148 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v148 + 2) + 16LL));
    Object = 0LL;
    v110 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, _QWORD, _QWORD, void *, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v161 + 640LL) + 8LL) + 1016LL))(
             *(_QWORD *)(*(_QWORD *)v161 + 648LL),
             v14,
             *(_QWORD *)&v147[1],
             v147[0],
             v142,
             VidSchSyncObject,
             &Object);
    v37 = v110;
    if ( v110 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v172);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v160, v114);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v152, v115);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q_EtwWriteTransfer(v116, &EventBlockThread, v117, 68);
    v118 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v37 = v118;
    if ( !v118 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      v131 = WdLogNewEntry5_WdWarning(v120, v119, v121);
      *(_QWORD *)(v131 + 24) = 13084LL;
      WdLogEvent5_WdWarning(v131);
      LODWORD(v37) = -1073741130;
LABEL_119:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160, v129);
LABEL_138:
      if ( v153 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v152, v130);
      goto LABEL_140;
    }
    if ( (_DWORD)v37 )
    {
      v128 = WdLogNewEntry5_WdWarning(v120, v119, v121);
      *(_QWORD *)(v128 + 32) = 13091LL;
      goto LABEL_118;
    }
    v122 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v172, 0LL);
    v37 = v122;
    if ( v122 < 0 )
    {
      v128 = WdLogNewEntry5_WdWarning(v124, v123, v125);
      *(_QWORD *)(v128 + 32) = 13101LL;
LABEL_118:
      *(_QWORD *)(v128 + 24) = v37;
      WdLogEvent5_WdWarning(v128);
      goto LABEL_119;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160, v123);
    if ( v153 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v152, v88);
    v18 = v159;
  }
  if ( v110 < 0 )
  {
    v128 = WdLogNewEntry5_WdWarning(v112, v111, v113);
    *(_QWORD *)(v128 + 32) = 13108LL;
    goto LABEL_118;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v160, v111);
  if ( v153 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v152, v132);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v151);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v172);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v166);
  if ( v154 && v155 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v154 + 136));
    KeLeaveCriticalRegion();
  }
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v158);
  if ( v141 && _InterlockedExchangeAdd64((volatile signed __int64 *)v141 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v141 + 2), v141);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v143, v133);
  if ( v145 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v134, &EventProfilerExit, v135, v143);
  return 0LL;
}
