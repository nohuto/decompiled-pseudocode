/*
 * XREFs of DxgkUpdateGpuVirtualAddress @ 0x1C02D96E0
 * Callers:
 *     ?VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382E60 (-VmBusUpdateGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0009824 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009864 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009B5C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C002B714 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z @ 0x1C002B770 (--0DXGSYNCOBJECTMUTEX@@QEAA@PEAVDXGSYNCOBJECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C004A8A0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016A93C (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C02E21A0 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C02E220C (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ?VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@@Z @ 0x1C037EF6C (-VmBusSendUpdateGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IIPEAU_D3DKMT.c)
 */

__int64 __fastcall DxgkUpdateGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v3; // rsi
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r15
  unsigned int updated; // esi
  _D3DKMT_UPDATEGPUVIRTUALADDRESS *v11; // r12
  struct DXGDEVICE *v12; // r14
  DXGCONTEXT *v13; // r15
  struct DXGDEVICE *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // r15
  unsigned __int64 NumOperations; // rdx
  unsigned __int64 v21; // rax
  char *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  size_t v26; // r8
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION **p_Operations; // r14
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *Operations; // rdx
  ULONG64 v29; // rcx
  char *v30; // rdx
  __int64 v31; // r9
  UINT v32; // ecx
  UINT v33; // r10d
  unsigned __int64 v34; // rax
  int v35; // r8d
  unsigned int v36; // r8d
  __int64 v37; // rax
  bool v38; // cf
  unsigned __int64 v39; // rax
  char *v40; // rax
  __int64 v41; // r9
  unsigned int v42; // edx
  DXGALLOCATIONREFERENCE *v43; // rax
  void *v44; // rcx
  unsigned __int64 v45; // rax
  size_t v46; // rax
  unsigned int v47; // edx
  int v48; // r8d
  UINT v49; // ecx
  _QWORD *v50; // r9
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v51; // rax
  unsigned int hAllocation; // r10d
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v54; // r8
  struct DXGGLOBAL *Global; // rax
  unsigned int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // r9
  int v59; // ecx
  __int64 v60; // r8
  struct DXGDEVICE *v61; // rdx
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r8
  NTSTATUS v66; // eax
  int v67; // eax
  struct DXGDEVICE *v68; // r14
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rcx
  __int64 v73; // r8
  struct DXGDEVICE *v74; // [rsp+50h] [rbp-228h] BYREF
  size_t Size; // [rsp+58h] [rbp-220h]
  int v76; // [rsp+60h] [rbp-218h] BYREF
  __int64 v77; // [rsp+68h] [rbp-210h]
  char v78; // [rsp+70h] [rbp-208h]
  bool v79; // [rsp+78h] [rbp-200h]
  _DWORD v80[3]; // [rsp+7Ch] [rbp-1FCh]
  char *v81; // [rsp+88h] [rbp-1F0h]
  unsigned int v82; // [rsp+90h] [rbp-1E8h]
  DXGALLOCATIONREFERENCE *v83; // [rsp+98h] [rbp-1E0h]
  char v84[8]; // [rsp+A0h] [rbp-1D8h] BYREF
  char v85; // [rsp+A8h] [rbp-1D0h]
  struct DXGPROCESS *v86; // [rsp+B0h] [rbp-1C8h]
  DXGPUSHLOCK *v87; // [rsp+B8h] [rbp-1C0h]
  PVOID Object; // [rsp+C0h] [rbp-1B8h] BYREF
  struct DXGDEVICE *v89; // [rsp+C8h] [rbp-1B0h]
  _BYTE v90[16]; // [rsp+D0h] [rbp-1A8h] BYREF
  UINT v91; // [rsp+E0h] [rbp-198h]
  struct DXGDEVICE *v92; // [rsp+E8h] [rbp-190h] BYREF
  _BYTE v93[16]; // [rsp+F0h] [rbp-188h] BYREF
  _BYTE v94[16]; // [rsp+100h] [rbp-178h] BYREF
  char *v95; // [rsp+110h] [rbp-168h]
  void **v96; // [rsp+118h] [rbp-160h]
  DXGCONTEXT *v97; // [rsp+120h] [rbp-158h] BYREF
  _BYTE v98[24]; // [rsp+128h] [rbp-150h] BYREF
  struct _EX_RUNDOWN_REF *v99; // [rsp+140h] [rbp-138h] BYREF
  _QWORD *v100; // [rsp+148h] [rbp-130h]
  char *v101; // [rsp+150h] [rbp-128h]
  D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *v102; // [rsp+158h] [rbp-120h]
  _D3DKMT_UPDATEGPUVIRTUALADDRESS v103; // [rsp+160h] [rbp-118h] BYREF
  _BYTE v104[160]; // [rsp+1A0h] [rbp-D8h] BYREF

  v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)a1;
  v76 = -1;
  v77 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v78 = 1;
    v76 = 2106;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2106);
  }
  else
  {
    v78 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v76, 2106);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v79 = v4;
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v86 = Current;
  if ( !Current )
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_137:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
    if ( v78 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v72, &EventProfilerExit, v73, v76);
    }
    return updated;
  }
  memset(&v103, 0, sizeof(v103));
  v11 = &v103;
  Object = &v103;
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_UPDATEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v103 = *v3;
  }
  else
  {
    v11 = v3;
    Object = v3;
  }
  if ( !v11->NumOperations )
  {
    updated = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, 13411LL);
    goto LABEL_137;
  }
  v92 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v74, v11->hDevice, (struct _KTHREAD **)Current, &v92);
  v12 = v92;
  v89 = v92;
  if ( !v92 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(2LL, v11->hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11->hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_134;
  }
  v97 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90, v11->hContext, Current, &v97, 0, 1);
  v13 = v97;
  if ( !v97 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v86, v11->hContext, -1073741811LL);
LABEL_133:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
LABEL_134:
    if ( !v74 )
      goto LABEL_137;
    goto LABEL_135;
  }
  v14 = (struct DXGDEVICE *)*((_QWORD *)v97 + 2);
  if ( v14 != v12 )
  {
    updated = -1073741811;
    WdLogSingleEntry3(2LL, v14, v12, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Context device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
      *((_QWORD *)v13 + 2),
      (__int64)v12,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_133;
  }
  v95 = (char *)v12 + 16;
  v15 = *(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL);
  if ( *(_BYTE *)(v15 + 209) )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateGpuVirtualAddress(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v15 + 4344),
                v86,
                *((_DWORD *)v12 + 110),
                *((_DWORD *)v97 + 7),
                v11);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
    if ( !v74 )
      goto LABEL_137;
LABEL_135:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
    goto LABEL_137;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v94, v12);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v98, (struct _KTHREAD **)v13 + 56);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v104, (__int64)v12, 0, v16, 0);
  v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v104, 0LL);
  updated = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry2(3LL, v17, 13462LL);
LABEL_132:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v94);
    goto LABEL_133;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v95 + 16LL) + 2156LL) & 0x40) == 0 )
  {
    updated = -1073741811;
    WdLogSingleEntry2(3LL, -1073741811LL, 13468LL);
    goto LABEL_132;
  }
  if ( !DXGCONTEXT::GetVidSchCompanionContext(v13) )
  {
    updated = -1073741811;
    WdLogSingleEntry3(3LL, v86, v11->hContext, -1073741811LL);
    goto LABEL_132;
  }
  *(_QWORD *)&v80[1] = DXGCONTEXT::GetVidMmCompanionContext(v13);
  if ( !*(_QWORD *)&v80[1] )
  {
    updated = -1073741811;
    WdLogSingleEntry4(3LL, v86, v11->hContext, -1073741811LL, 13484LL);
    goto LABEL_132;
  }
  updated = -1073741811;
  LODWORD(v19) = -1073741811;
  v82 = -1073741811;
  v83 = 0LL;
  v80[0] = 0;
  NumOperations = v11->NumOperations;
  Size = NumOperations << 6;
  if ( NumOperations << 6 > 0xFFFFFFFF )
  {
    WdLogSingleEntry1(3LL, NumOperations);
    goto LABEL_132;
  }
  v21 = NumOperations << 6;
  if ( !is_mul_ok(NumOperations, 0x40uLL) )
    v21 = -1LL;
  v22 = (char *)operator new[](v21, 0x4B677844u, 256LL, v18);
  v81 = v22;
  if ( !v22 )
  {
    LODWORD(v19) = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  if ( v79 )
  {
    v26 = (unsigned int)Size;
    p_Operations = &v11->Operations;
    v96 = (void **)&v11->Operations;
    Operations = v11->Operations;
    v29 = (ULONG64)Operations + (unsigned int)Size;
    if ( v29 < (unsigned __int64)Operations || v29 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v22, Operations, v26);
  }
  else
  {
    p_Operations = &v11->Operations;
    v96 = (void **)&v11->Operations;
    memmove(v22, v11->Operations, (unsigned int)Size);
  }
  v30 = v81;
  *p_Operations = (D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION *)v81;
  v31 = 0LL;
  v32 = 0;
  v33 = v11->NumOperations;
  if ( v33 )
  {
    do
    {
      v34 = (unsigned __int64)v32 << 6;
      v35 = *(_DWORD *)&v30[v34];
      if ( !v35 || v35 == 3 )
      {
        v36 = *(_DWORD *)&v30[v34 + 24];
        if ( !v36 )
        {
          WdLogSingleEntry2(3LL, -1073741811LL, 13544LL);
          goto LABEL_64;
        }
        if ( (_DWORD)v31 != v36 )
        {
          ++v80[0];
          v31 = v36;
        }
      }
      else if ( (unsigned int)(v35 - 1) > 1 )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, 13557LL);
LABEL_64:
        v44 = 0LL;
        goto LABEL_128;
      }
      ++v32;
    }
    while ( v32 < v33 );
  }
  v37 = 8LL * v80[0];
  if ( !is_mul_ok(v80[0], 8uLL) )
    v37 = -1LL;
  v38 = __CFADD__(v37, 8LL);
  v39 = v37 + 8;
  if ( v38 )
    v39 = -1LL;
  v40 = (char *)operator new[](v39, 0x4B677844u, 256LL, v31);
  if ( v40 )
  {
    v42 = v80[0];
    *(_QWORD *)v40 = v80[0];
    v83 = (DXGALLOCATIONREFERENCE *)(v40 + 8);
    `vector constructor iterator'(
      v40 + 8,
      8LL,
      v42,
      (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    v43 = v83;
  }
  else
  {
    v43 = 0LL;
    v83 = 0LL;
  }
  if ( !v43 )
  {
    LODWORD(v19) = -1073741801;
    WdLogSingleEntry2(6LL, -1073741801LL, 13566LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGALLOCATIONREFERENCE array, returning 0x%I64x",
      -1073741801LL,
      13566LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_64;
  }
  v45 = 8LL * v80[0];
  if ( !is_mul_ok(v80[0], 8uLL) )
    v45 = -1LL;
  v46 = operator new[](v45, 0x4B677844u, 256LL, v41);
  Size = v46;
  if ( !v46 )
  {
    LODWORD(v19) = -1073741801;
    WdLogSingleEntry2(6LL, -1073741801LL, 13574LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate PVIDMM_MULTI_ALLOC array, returning 0x%I64x",
      -1073741801LL,
      13574LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_127;
  }
  v47 = 0;
  v48 = -1;
  v49 = 0;
  v91 = 0;
  if ( v11->NumOperations )
  {
    v50 = (_QWORD *)(v46 - 8);
    v101 = (char *)v83 - v46;
    do
    {
      v51 = &v11->Operations[(unsigned __int64)v49];
      v102 = v51;
      if ( v51->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP
        || v51->OperationType == D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT )
      {
        hAllocation = v51->Map.hAllocation;
        if ( v47 != hAllocation )
        {
          v82 = v51->Map.hAllocation;
          LODWORD(v81) = v48 + 1;
          v100 = v50 + 1;
          v87 = (DXGPUSHLOCK *)(v48 + 1);
          AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                        (__int64)v86,
                                                        (DXGALLOCATIONREFERENCE *)&v99,
                                                        hAllocation);
          DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v83 + (_QWORD)v87, AllocationSafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v99);
          v50 = v100;
          v54 = *(_QWORD *)((char *)v100 + (_QWORD)v101);
          if ( !v54 )
          {
            WdLogSingleEntry3(3LL, v82, -1073741811LL, 13605LL);
LABEL_127:
            v44 = (void *)Size;
LABEL_128:
            operator delete[](v44);
            operator delete[](*v96);
            if ( v83 )
              DXGALLOCATIONREFERENCE::`vector deleting destructor'(v83);
LABEL_35:
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98);
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v94);
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
            if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
            if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v76);
            return (unsigned int)v19;
          }
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)v95 + 16LL) )
          {
            v68 = v89;
            WdLogSingleEntry3(2LL, v89, v54, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
              (__int64)v68,
              *((_QWORD *)v83 + (_QWORD)v87),
              -1073741811LL,
              0LL,
              0LL);
            goto LABEL_127;
          }
          *v100 = *(_QWORD *)(v54 + 24);
          v51 = v102;
          v49 = v91;
          v47 = v82;
          v48 = (int)v81;
        }
        v51->Map.hAllocation = v48;
      }
      v91 = ++v49;
    }
    while ( v49 < v11->NumOperations );
  }
  v87 = (struct DXGPROCESS *)((char *)v86 + 248);
  while ( 1 )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v84, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v84);
    LODWORD(v81) = v11->hFenceObject;
    DXGPUSHLOCK::AcquireShared(v87);
    v56 = ((unsigned int)v81 >> 6) & 0xFFFFFF;
    if ( v56 >= *((_DWORD *)v86 + 74) )
      goto LABEL_89;
    v57 = v56;
    v58 = *((_QWORD *)v86 + 35);
    v59 = *(_DWORD *)(v58 + 16LL * v56 + 8);
    if ( (((unsigned int)v81 >> 25) & 0x60) != (v59 & 0x60) || (v59 & 0x2000) != 0 || (v59 & 0x1F) == 0 )
      goto LABEL_89;
    v60 = 2 * v57;
    if ( (v59 & 0x1F) != 0xB )
    {
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_89:
      v81 = 0LL;
      goto LABEL_90;
    }
    v81 = *(char **)(v58 + 8 * v60);
LABEL_90:
    ExReleasePushLockSharedEx(v87, 0LL);
    KeLeaveCriticalRegion();
    if ( !v81 )
    {
      WdLogSingleEntry2(3LL, v11->hFenceObject, -1073741811LL);
      goto LABEL_125;
    }
    v61 = (struct DXGDEVICE *)*((_QWORD *)v81 + 2);
    if ( v61 != v89 )
    {
      WdLogSingleEntry3(2LL, v61, v89, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Monitored fence device 0x%p does not match user provided device 0x%p, returning 0x%I64x",
        *((_QWORD *)v81 + 2),
        (__int64)v89,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_125;
    }
    DXGSYNCOBJECTMUTEX::DXGSYNCOBJECTMUTEX((DXGSYNCOBJECTMUTEX *)v93, *((struct DXGSYNCOBJECT **)v81 + 4));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v93);
    VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                         *((DXGSYNCOBJECT **)v81 + 4),
                         *(struct ADAPTER_RENDER **)(*((_QWORD *)v81 + 2) + 16LL));
    Object = 0LL;
    v63 = (*(__int64 (__fastcall **)(_QWORD, _D3DKMT_UPDATEGPUVIRTUALADDRESS *, _QWORD, _QWORD, size_t, struct _VIDSCH_SYNC_OBJECT *, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v95 + 648LL) + 8LL) + 1024LL))(
            *(_QWORD *)(*(_QWORD *)v95 + 656LL),
            v11,
            *(_QWORD *)&v80[1],
            v80[0],
            Size,
            VidSchSyncObject,
            &Object);
    v19 = v63;
    if ( v63 != -1071775486 )
      break;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)v104);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v93);
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v84);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v64, (const EVENT_DESCRIPTOR *)"g", v65, 68);
    v66 = KeWaitForSingleObject(Object, UserRequest, 0, 1u, 0LL);
    v19 = v66;
    if ( !v66 )
      KeReleaseSemaphore((PRKSEMAPHORE)Object, 0, 1, 0);
    if ( PsIsThreadTerminating(KeGetCurrentThread()) )
    {
      WdLogSingleEntry1(3LL, 13702LL);
      LODWORD(v19) = -1073741130;
LABEL_109:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
LABEL_125:
      if ( v85 )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v84);
      goto LABEL_127;
    }
    if ( (_DWORD)v19 )
    {
      v69 = 13709LL;
      goto LABEL_108;
    }
    v67 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v104, 0LL);
    v19 = v67;
    if ( v67 < 0 )
    {
      v69 = 13719LL;
LABEL_108:
      WdLogSingleEntry2(3LL, v19, v69);
      goto LABEL_109;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
    if ( v85 )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v84);
    v89 = v92;
  }
  if ( v63 < 0 )
  {
    v69 = 13726LL;
    goto LABEL_108;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v93);
  if ( v85 )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v84);
  DXGALLOCATIONREFERENCE::`vector deleting destructor'(v83);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v104);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v98);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v94);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v90);
  if ( v74 && _InterlockedExchangeAdd64((volatile signed __int64 *)v74 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v74 + 2), v74);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v76);
  if ( v78 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v76);
  return 0LL;
}
