/*
 * XREFs of ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0183644
 * Callers:
 *     ?DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z @ 0x1C01C99F0 (-DxgkCddEvict@@YAJIEPEAU_D3DKMT_EVICT@@PEAD@Z.c)
 *     DxgkEvict @ 0x1C01E4E60 (DxgkEvict.c)
 *     ?VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036CD00 (-VmBusEvict@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0009904 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C002B26C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C002B798 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01668C0 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C01D8414 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C01DCAB0 (-Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C033633C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0377334 (-VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERE.c)
 */

__int64 __fastcall DxgkEvictInternal(struct _D3DKMT_EVICT *a1, int a2, char *a3)
{
  DXGPROCESS *Current; // r8
  struct _D3DKMT_EVICT *v6; // rax
  struct _D3DKMT_EVICT *v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF **v10; // rsi
  struct DXGDEVICE *v11; // rdi
  __int64 v12; // r9
  int v13; // ebx
  char *NumAllocations; // rdx
  unsigned int *AllocationList; // rbx
  unsigned int *v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned int *v19; // rax
  unsigned int v20; // eax
  ULONG_PTR Count; // r8
  __int64 v22; // rsi
  unsigned int v23; // r8d
  _QWORD *p_NumBytesToTrim; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const wchar_t *v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  struct D3DDDI_EVICT_FLAGS v34; // ebx
  unsigned int v35; // edi
  unsigned int HostProcess; // eax
  char v37; // [rsp+50h] [rbp-248h]
  struct DXGDEVICE *v38; // [rsp+58h] [rbp-240h] BYREF
  int v39; // [rsp+60h] [rbp-238h] BYREF
  __int64 v40; // [rsp+68h] [rbp-230h]
  char v41; // [rsp+70h] [rbp-228h]
  struct _D3DKMT_EVICT *v42; // [rsp+78h] [rbp-220h]
  unsigned int *v43; // [rsp+80h] [rbp-218h]
  int v44; // [rsp+88h] [rbp-210h]
  struct _EX_RUNDOWN_REF *v45; // [rsp+90h] [rbp-208h] BYREF
  struct DXGDEVICE *v46; // [rsp+98h] [rbp-200h] BYREF
  struct DXGALLOCATIONREFERENCE *v47; // [rsp+A0h] [rbp-1F8h]
  unsigned __int64 v48; // [rsp+A8h] [rbp-1F0h] BYREF
  char *v49; // [rsp+B0h] [rbp-1E8h]
  unsigned int v50; // [rsp+B8h] [rbp-1E0h]
  int v51; // [rsp+BCh] [rbp-1DCh]
  unsigned int v52[2]; // [rsp+C0h] [rbp-1D8h]
  struct _D3DKMT_EVICT *v53; // [rsp+C8h] [rbp-1D0h]
  struct D3DDDI_EVICT_FLAGS *v54; // [rsp+D0h] [rbp-1C8h]
  _BYTE v55[16]; // [rsp+D8h] [rbp-1C0h] BYREF
  unsigned int *v56; // [rsp+E8h] [rbp-1B0h]
  DXGPROCESS *v57; // [rsp+F0h] [rbp-1A8h]
  unsigned int *v58; // [rsp+F8h] [rbp-1A0h]
  _BYTE v59[24]; // [rsp+100h] [rbp-198h] BYREF
  __int128 v60; // [rsp+118h] [rbp-180h] BYREF
  __int128 v61; // [rsp+128h] [rbp-170h]
  struct DXGALLOCATIONREFERENCE *v62; // [rsp+140h] [rbp-158h] BYREF
  char v63; // [rsp+148h] [rbp-150h] BYREF
  int v64; // [rsp+1C8h] [rbp-D0h]
  _BYTE v65[160]; // [rsp+1D0h] [rbp-C8h] BYREF

  v49 = a3;
  v44 = a2;
  v42 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2116;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2116);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2116);
  Current = DXGPROCESS::GetCurrent();
  v57 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v28 = L"Invalid process context, returning 0x%I64x";
LABEL_48:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
LABEL_67:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v39);
    }
    return 3221225485LL;
  }
  v60 = 0LL;
  v61 = 0LL;
  if ( a2 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (struct _D3DKMT_EVICT *)MmUserProbeAddress;
    v60 = *(_OWORD *)&v6->hDevice;
    v61 = *(_OWORD *)&v6->Flags.0;
    v7 = (struct _D3DKMT_EVICT *)&v60;
    v53 = (struct _D3DKMT_EVICT *)&v60;
  }
  else
  {
    v7 = a1;
    v53 = a1;
  }
  v54 = (struct D3DDDI_EVICT_FLAGS *)v7;
  if ( !v7->NumAllocations )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v28 = L"Call to DxgkEvict contained no allocations, returning 0x%I64x";
    goto LABEL_48;
  }
  if ( !v7->AllocationList )
  {
    WdLogSingleEntry1(2LL, 780LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"AllocationList passed to DxgkEvict cannot be NULL.",
      780LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_67;
  }
  if ( v7->Flags.Value >= 4 )
  {
    WdLogSingleEntry1(2LL, 787LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Reserved flags passed to DxgkEvict should be all zeros.",
      787LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_67;
  }
  v62 = (struct DXGALLOCATIONREFERENCE *)&v63;
  v8 = 0LL;
  v9 = 16LL;
  do
  {
    *(_QWORD *)((char *)v62 + v8) = 0LL;
    v8 += 8LL;
    --v9;
  }
  while ( v9 );
  v64 = 16;
  v10 = (struct _EX_RUNDOWN_REF **)v62;
  v47 = v62;
  v46 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v7->hDevice, (struct _KTHREAD **)Current, &v46);
  v11 = v46;
  if ( !v46 )
  {
    WdLogSingleEntry1(3LL, v7->hDevice);
LABEL_63:
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v62);
    goto LABEL_67;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v55,
    v46);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v65, (__int64)v11, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v65, v49);
  if ( v13 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v55);
    if ( v38 && !_InterlockedDecrement64((volatile signed __int64 *)v38 + 8) )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v62);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v39);
    return (unsigned int)v13;
  }
  NumAllocations = (char *)v7->NumAllocations;
  v49 = NumAllocations;
  AllocationList = (unsigned int *)v7->AllocationList;
  v43 = AllocationList;
  v16 = &AllocationList[(_QWORD)NumAllocations];
  v58 = v16;
  if ( v16 < AllocationList )
  {
    WdLogSingleEntry1(3LL, NumAllocations);
LABEL_62:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v55);
    goto LABEL_63;
  }
  v37 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL) + 209LL);
  v17 = 0LL;
  v48 = 0LL;
  while ( AllocationList != v16 )
  {
    v18 = 16LL;
    if ( (unsigned int)NumAllocations < 0x10 )
      v18 = (unsigned int)NumAllocations;
    v51 = v18;
    v56 = &AllocationList[v18];
    *(_QWORD *)v52 = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v59, *(struct DXGPROCESS **)v52);
    while ( AllocationList != v56 )
    {
      if ( v44 )
      {
        v19 = AllocationList;
        if ( (unsigned __int64)AllocationList >= MmUserProbeAddress )
          v19 = (unsigned int *)MmUserProbeAddress;
        v20 = *v19;
        LODWORD(v43) = v20;
        v50 = v20;
        v7 = v53;
        v11 = v46;
      }
      else
      {
        v20 = *AllocationList;
        LODWORD(v43) = v20;
        v50 = v20;
      }
      DXGPROCESS::GetAllocationUnsafe(*(__int64 *)v52, (DXGALLOCATIONREFERENCE *)&v45, v20);
      if ( !v45 )
      {
        WdLogSingleEntry1(3LL, (unsigned int)v43);
        goto LABEL_61;
      }
      Count = v45[1].Count;
      if ( (struct DXGDEVICE *)Count != v11 )
      {
        WdLogSingleEntry2(3LL, v11, Count);
LABEL_61:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59);
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 624LL) + 8LL) + 208LL))(
          *((_QWORD *)v46 + 96),
          11LL);
        goto LABEL_62;
      }
      DXGALLOCATIONREFERENCE::MoveAssign(v10++, &v45);
      v43 = ++AllocationList;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
    }
    v22 = ((char *)v10 - (char *)v47) >> 3;
    *(_QWORD *)v52 = v22;
    if ( v37 )
    {
      v33 = *(_QWORD *)(*((_QWORD *)v11 + 2) + 16LL);
      v34.0 = (struct D3DDDI_EVICT_FLAGS::$E7212E13AE7D8E335D08FC594CA6B628::$D06293F7ED6D7321B9AED12FAD2D769E)v54[4].Value;
      v35 = *((_DWORD *)v11 + 110);
      HostProcess = DXGPROCESS::GetHostProcess(v57);
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v33 + 4344),
        HostProcess,
        v35,
        v34,
        v52[0],
        v47,
        &v48);
      v11 = v46;
      AllocationList = v43;
      v10 = (struct _EX_RUNDOWN_REF **)v47;
    }
    else
    {
      v23 = v22;
      v10 = (struct _EX_RUNDOWN_REF **)v47;
      DXGDEVICE::Evict(v11, v47, v23, v54[4], &v48);
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v59);
    LODWORD(NumAllocations) = (_DWORD)v49 - v51;
    v49 = (char *)(unsigned int)((_DWORD)v49 - v51);
    v17 = v48;
    v16 = v58;
  }
  if ( v44 )
  {
    p_NumBytesToTrim = &v42->NumBytesToTrim;
    if ( (unsigned __int64)&v42->NumBytesToTrim >= MmUserProbeAddress )
      p_NumBytesToTrim = (_QWORD *)MmUserProbeAddress;
    *p_NumBytesToTrim = v48;
  }
  else
  {
    v7->NumBytesToTrim = v17;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v65);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v55);
  if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
  PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(&v62);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v39);
  return 0LL;
}
