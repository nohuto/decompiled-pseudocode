/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C014F6EC
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C014EC00 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     DxgkEvict @ 0x1C014F6D0 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240BD0 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000217C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0003EE0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004418 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0005770 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0006A30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006B34 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0024980 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E4064 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014FC8C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C014FCD8 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0150C38 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C0150C88 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C02482A8 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0284E64 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, char *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  DXGPROCESS *Current; // r13
  struct _D3DKMT_EVICT *v11; // rax
  struct _D3DKMT_EVICT *v12; // r15
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  DXGDEVICE *v17; // r13
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // ebx
  __int64 NumAllocations; // rdx
  unsigned int *AllocationList; // rbx
  unsigned int *v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned int v34; // r8d
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rbx
  unsigned int v52; // edi
  unsigned int HostProcess; // eax
  char v54; // [rsp+40h] [rbp-238h]
  struct DXGDEVICE *v55; // [rsp+48h] [rbp-230h] BYREF
  int v56; // [rsp+50h] [rbp-228h] BYREF
  __int64 v57; // [rsp+58h] [rbp-220h]
  char v58; // [rsp+60h] [rbp-218h]
  struct _D3DKMT_EVICT *v59; // [rsp+68h] [rbp-210h]
  struct _EX_RUNDOWN_REF *v60; // [rsp+70h] [rbp-208h] BYREF
  unsigned int *v61; // [rsp+78h] [rbp-200h]
  int v62; // [rsp+80h] [rbp-1F8h]
  DXGDEVICE *v63; // [rsp+88h] [rbp-1F0h] BYREF
  unsigned __int64 v64; // [rsp+90h] [rbp-1E8h] BYREF
  unsigned int v65; // [rsp+98h] [rbp-1E0h]
  int v66; // [rsp+9Ch] [rbp-1DCh]
  unsigned int v67[2]; // [rsp+A0h] [rbp-1D8h]
  struct _D3DKMT_EVICT *v68; // [rsp+A8h] [rbp-1D0h]
  struct D3DDDI_EVICT_FLAGS *v69; // [rsp+B0h] [rbp-1C8h]
  __int64 v70; // [rsp+B8h] [rbp-1C0h]
  _BYTE v71[16]; // [rsp+C0h] [rbp-1B8h] BYREF
  unsigned int *v72; // [rsp+D0h] [rbp-1A8h]
  DXGPROCESS *v73; // [rsp+D8h] [rbp-1A0h]
  unsigned int *v74; // [rsp+E0h] [rbp-198h]
  _BYTE v75[24]; // [rsp+E8h] [rbp-190h] BYREF
  __int128 v76; // [rsp+100h] [rbp-178h] BYREF
  __int128 v77; // [rsp+110h] [rbp-168h]
  _BYTE *v78; // [rsp+120h] [rbp-158h] BYREF
  _BYTE v79[128]; // [rsp+128h] [rbp-150h] BYREF
  int v80; // [rsp+1A8h] [rbp-D0h]
  _BYTE v81[160]; // [rsp+1B0h] [rbp-C8h] BYREF

  v62 = a2;
  v59 = a1;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2116);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2116LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  v73 = Current;
  if ( !Current )
    goto LABEL_44;
  v76 = 0LL;
  v77 = 0LL;
  if ( a2 )
  {
    v9 = MmUserProbeAddress;
    v11 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v11 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v76 = *(_OWORD *)&v11->hDevice;
    v77 = *(_OWORD *)&v11->Flags.0;
    v12 = (struct _D3DKMT_EVICT *)&v76;
    v68 = (struct _D3DKMT_EVICT *)&v76;
  }
  else
  {
    v12 = a1;
    v68 = a1;
  }
  v69 = (struct D3DDDI_EVICT_FLAGS *)v12;
  if ( !v12->NumAllocations )
  {
LABEL_44:
    v40 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdError(v40);
LABEL_64:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v41);
    if ( v58 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v56);
    }
    return 3221225485LL;
  }
  if ( !v12->AllocationList )
  {
    v40 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v40 + 24) = 778LL;
    goto LABEL_46;
  }
  if ( v12->Flags.Value >= 4 )
  {
    v40 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v40 + 24) = 785LL;
    goto LABEL_46;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v78);
  v78 = v79;
  v80 = 16;
  v13 = v79;
  v63 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v55, v12->hDevice, (struct _KTHREAD **)Current, &v63);
  v17 = v63;
  if ( !v63 )
  {
    v42 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v42 + 24) = v12->hDevice;
    WdLogEvent5_WdWarning(v42);
LABEL_60:
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v78);
    goto LABEL_64;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v71,
    v63);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v81, (__int64)v17, 0, v18, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v81, a3);
  if ( v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v71);
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v78);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v43);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v56);
    return (unsigned int)v20;
  }
  NumAllocations = v12->NumAllocations;
  v70 = NumAllocations;
  AllocationList = (unsigned int *)v12->AllocationList;
  v61 = AllocationList;
  v23 = &AllocationList[NumAllocations];
  v74 = v23;
  if ( v23 < AllocationList )
  {
    v46 = WdLogNewEntry5_WdWarning(v19, NumAllocations, v23);
    *(_QWORD *)(v46 + 24) = v12->NumAllocations;
    WdLogEvent5_WdWarning(v46);
LABEL_59:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v81);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v71);
    goto LABEL_60;
  }
  v24 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
  v54 = *(_BYTE *)(v24 + 209);
  v25 = 0LL;
  v64 = 0LL;
  while ( AllocationList != v23 )
  {
    v26 = 16LL;
    if ( (unsigned int)NumAllocations < 0x10 )
      v26 = (unsigned int)NumAllocations;
    v66 = v26;
    v72 = &AllocationList[v26];
    *(_QWORD *)v67 = DXGPROCESS::GetCurrent(v24, NumAllocations);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v75, *(struct _KTHREAD ***)v67);
    while ( AllocationList != v72 )
    {
      if ( v62 )
      {
        v27 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v27 = (unsigned int *)MmUserProbeAddress;
        v28 = *v27;
        LODWORD(v61) = v28;
        v65 = v28;
        v12 = v68;
        v17 = v63;
      }
      else
      {
        v28 = *AllocationList;
        LODWORD(v61) = v28;
        v65 = v28;
      }
      DXGPROCESS::GetAllocationUnsafe(*(__int64 *)v67, (DXGALLOCATIONREFERENCE *)&v60, v28);
      if ( !v60 )
      {
        v47 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v30, v29, v31);
        v47[3].Count = (unsigned int)v61;
        goto LABEL_58;
      }
      if ( (DXGDEVICE *)v60[1].Count != v17 )
      {
        v47 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdWarning(v30, v29, v31);
        v47[3].Count = (ULONG_PTR)v17;
        v47[4].Count = v60[1].Count;
LABEL_58:
        WdLogEvent5_WdWarning(v47);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60, v48);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v17 + 2) + 616LL) + 8LL) + 208LL))(
          *((_QWORD *)v17 + 96),
          11LL);
        goto LABEL_59;
      }
      DXGALLOCATIONREFERENCE::MoveAssign(v13, &v60);
      v13 += 8;
      v61 = ++AllocationList;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v60, v32);
    }
    v33 = (v13 - v79) >> 3;
    *(_QWORD *)v67 = v33;
    if ( v54 )
    {
      v51 = *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL);
      v52 = *((_DWORD *)v17 + 110);
      HostProcess = DXGPROCESS::GetHostProcess(v73);
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v51 + 4240),
        HostProcess,
        v52,
        v69[4],
        v67[0],
        (const struct DXGALLOCATIONREFERENCE *)v79,
        &v64);
      AllocationList = v61;
      v13 = v79;
    }
    else
    {
      v34 = v33;
      v13 = v79;
      DXGDEVICE::Evict(v17, (struct DXGALLOCATIONREFERENCE *)v79, v34, v69[4], &v64);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v75);
    NumAllocations = (unsigned int)(v70 - v66);
    v70 = NumAllocations;
    v25 = v64;
    v23 = v74;
  }
  if ( v62 )
  {
    p_NumBytesToTrim = &v59->NumBytesToTrim;
    if ( (unsigned __int64)&v59->NumBytesToTrim >= MmUserProbeAddress )
      p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
    *p_NumBytesToTrim = v64;
  }
  else
  {
    v12->NumBytesToTrim = v25;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v81);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v71);
  if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v78);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v36);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v56);
  return 0LL;
}
