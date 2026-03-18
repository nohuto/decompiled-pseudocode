/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C032C2A0
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382CE0 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000955C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C000BC60 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000BED0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000EF98 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB14 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C002BAC8 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C02CDE10 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C037EDC4 (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r14
  const wchar_t *v9; // r9
  char CurrentThreadPreviousMode; // al
  D3DDDI_UPDATEALLOCPROPERTY *v11; // rbx
  D3DDDI_UPDATEALLOCPROPERTY *v12; // rax
  unsigned int PropertyMaskValue; // eax
  struct DXGPAGINGQUEUE *v14; // r13
  DXGPAGINGQUEUE *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r9
  int v18; // r12d
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // r8
  ADAPTER_RENDER *v23; // r9
  _QWORD *v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rsi
  const wchar_t *v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // sf
  int updated; // eax
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // r8
  bool v40; // [rsp+50h] [rbp-168h]
  int v41; // [rsp+58h] [rbp-160h] BYREF
  __int64 v42; // [rsp+60h] [rbp-158h]
  char v43; // [rsp+68h] [rbp-150h]
  struct DXGALLOCATION *v44; // [rsp+70h] [rbp-148h] BYREF
  DXGPAGINGQUEUE *v45; // [rsp+78h] [rbp-140h] BYREF
  _BYTE v46[16]; // [rsp+80h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v47[2]; // [rsp+90h] [rbp-128h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v48; // [rsp+A0h] [rbp-118h] BYREF
  _DWORD v49[4]; // [rsp+B8h] [rbp-100h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v50; // [rsp+C8h] [rbp-F0h] BYREF
  _BYTE v51[160]; // [rsp+F0h] [rbp-C8h] BYREF

  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2132);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2132);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v9 = L"Invalid process context, returning 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_47;
  }
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v40 = CurrentThreadPreviousMode == 1;
  memset(&v50, 0, sizeof(v50));
  v11 = &v50;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v12 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
    if ( a1 >= MmUserProbeAddress )
      v12 = (D3DDDI_UPDATEALLOCPROPERTY *)MmUserProbeAddress;
    v50 = *v12;
  }
  else
  {
    v11 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
  }
  PropertyMaskValue = v11->PropertyMaskValue;
  if ( PropertyMaskValue >= 0x10 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v9 = L"Invalid use of reserve, returning 0x%I64x";
    goto LABEL_7;
  }
  if ( !PropertyMaskValue )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v9 = L"Invalid use of property mask. Must set at least one property, returning 0x%I64x";
    goto LABEL_7;
  }
  v47[0] = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v45, v11->hPagingQueue, Current, v47, 1);
  v14 = v47[0];
  if ( !v47[0] )
  {
    WdLogSingleEntry2(2LL, v11->hPagingQueue, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hPagingQueue (0x%I64x) specified, returning 0x%I64x",
      v11->hPagingQueue,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  v16 = *((_QWORD *)v47[0] + 2);
  v47[1] = (struct DXGPAGINGQUEUE *)v16;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46,
    (struct DXGDEVICE *)v16);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v51, v16, 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v51, 0LL);
  if ( v18 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46);
    if ( v45 )
      DXGPAGINGQUEUE::ReleaseReference(v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v41);
    return (unsigned int)v18;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v44, v11->hAllocation);
  if ( !v44 )
  {
    WdLogSingleEntry1(2LL, v11->hAllocation);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hAllocation 0x%x",
      v11->hAllocation,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46);
LABEL_20:
    v15 = v45;
    if ( !v45 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v22 = *((_QWORD *)v44 + 1);
  if ( v22 != v16 )
  {
    WdLogSingleEntry2(2LL, v16, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch between paging queue device 0x%p and allocation device 0x%p",
      v16,
      *((_QWORD *)v44 + 1),
      0LL,
      0LL,
      0LL);
    goto LABEL_31;
  }
  v23 = *(ADAPTER_RENDER **)(v16 + 16);
  v24 = (_QWORD *)*((_QWORD *)v23 + 2);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24[27] + 64LL) + 40LL) + 28LL) < 0x6002u )
  {
    v25 = 1108LL;
    v26 = -1073741637LL;
    WdLogSingleEntry2(2LL, -1073741637LL, 1108LL);
    v27 = L"Driver version is less then WDDM 2.1 RS1.3, on 0x%I64x";
LABEL_36:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v26, v25, 0LL, 0LL, 0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46);
    if ( v45 )
      DXGPAGINGQUEUE::ReleaseReference(v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return (unsigned int)v26;
    LOBYTE(v28) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_68:
    if ( v30 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v41);
    return (unsigned int)v26;
  }
  if ( (*(_BYTE *)(v16 + 1869) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v24 + 543),
                Current,
                v14,
                v44,
                v11);
    goto LABEL_59;
  }
  if ( !v24[136] )
  {
    v25 = 1120LL;
    v26 = -1073741822LL;
    WdLogSingleEntry2(2LL, -1073741822LL, 1120LL);
    v27 = L"KMD has not exposed ValidateUpdateAllocationProperty, it is null, returning 0x%I64x";
    goto LABEL_36;
  }
  v32 = *((_QWORD *)v44 + 3);
  if ( !v32 )
  {
    WdLogSingleEntry1(2LL, v44);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGALLOCATION 0x%I64x has NULL VIDMM_ALLOC assigned to it",
      (__int64)v44,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46);
    v15 = v45;
    if ( !v45 )
    {
LABEL_47:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( v43 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v41);
      }
      return 3221225485LL;
    }
LABEL_46:
    DXGPAGINGQUEUE::ReleaseReference(v15);
    goto LABEL_47;
  }
  v48.hAllocation = (HANDLE)*((_QWORD *)v44 + 4);
  v48.Flags.Value = v11->Flags.Value;
  v48.PreferredSegment.Value = v11->PreferredSegment.Value;
  v48.SupportedSegmentSet = v11->SupportedSegmentSet;
  v48.PropertyMaskValue = v11->PropertyMaskValue;
  v35 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v23, &v48, (__int64)v24);
  v36 = v35;
  if ( v35 >= 0 )
  {
    v49[2] = v11->Flags.0;
    v49[1] = v11->PreferredSegment.0;
    v49[0] = v11->SupportedSegmentSet;
    v49[3] = v11->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 648LL)
                                                                                                 + 8LL)
                                                                                     + 216LL))(
                *(_QWORD *)(*(_QWORD *)(v16 + 16) + 656LL),
                *((_QWORD *)v14 + 4),
                v32,
                v49,
                &v11->PagingFenceValue);
LABEL_59:
    LODWORD(v26) = updated;
    if ( updated >= 0 && v40 )
    {
      v39 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v39 = (_QWORD *)MmUserProbeAddress;
      *v39 = v11->PagingFenceValue;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46);
    if ( v45 )
      DXGPAGINGQUEUE::ReleaseReference(v45);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return (unsigned int)v26;
    v30 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_68;
  }
  WdLogSingleEntry1(2LL, v35);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"KMD DDI ValidateUpdateAllocationProperty failed with status, 0x%I64x",
    v36,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v51);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v46);
  if ( v45 )
    DXGPAGINGQUEUE::ReleaseReference(v45);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v41);
  return (unsigned int)v36;
}
