/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C02782A0
 * Callers:
 *     ?VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024C2B0 (-VmBusUpdateAllocationProperty@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0008348 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000AAC0 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000E83C (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000E890 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001DB10 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024550 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0024CA0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C021C3E4 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 *     ?VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGINGQUEUE@@PEBVDXGALLOCATION@@PEAUD3DDDI_UPDATEALLOCPROPERTY@@@Z @ 0x1C024939C (-VmBusSendUpdateAllocationProperty@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBVDXGPROCESS@@PEBVDXGPAGIN.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v9; // rax
  __int64 v10; // rdx
  char CurrentThreadPreviousMode; // al
  D3DDDI_UPDATEALLOCPROPERTY *v12; // rdi
  D3DDDI_UPDATEALLOCPROPERTY *v13; // rax
  unsigned int PropertyMaskValue; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGPAGINGQUEUE *v17; // r13
  __int64 v18; // rax
  DXGPAGINGQUEUE *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r9
  int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  ADAPTER_RENDER *v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int updated; // eax
  ULONG64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // esi
  _QWORD *v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  bool v62; // [rsp+30h] [rbp-168h]
  int v63; // [rsp+38h] [rbp-160h] BYREF
  __int64 v64; // [rsp+40h] [rbp-158h]
  char v65; // [rsp+48h] [rbp-150h]
  struct DXGALLOCATION *v66; // [rsp+50h] [rbp-148h] BYREF
  DXGPAGINGQUEUE *v67; // [rsp+58h] [rbp-140h] BYREF
  _BYTE v68[16]; // [rsp+60h] [rbp-138h] BYREF
  struct DXGPAGINGQUEUE *v69[2]; // [rsp+70h] [rbp-128h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v70; // [rsp+80h] [rbp-118h] BYREF
  _DWORD v71[4]; // [rsp+98h] [rbp-100h] BYREF
  D3DDDI_UPDATEALLOCPROPERTY v72; // [rsp+A8h] [rbp-F0h] BYREF
  _BYTE v73[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v63 = -1;
  v64 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2132);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2132LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
    goto LABEL_6;
  CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
  v62 = CurrentThreadPreviousMode == 1;
  v7 = 0LL;
  memset(&v72, 0, sizeof(v72));
  v12 = &v72;
  if ( CurrentThreadPreviousMode == 1 )
  {
    v7 = MmUserProbeAddress;
    v13 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
    if ( a1 >= MmUserProbeAddress )
      v13 = (D3DDDI_UPDATEALLOCPROPERTY *)MmUserProbeAddress;
    v72 = *v13;
  }
  else
  {
    v12 = (D3DDDI_UPDATEALLOCPROPERTY *)a1;
  }
  PropertyMaskValue = v12->PropertyMaskValue;
  if ( PropertyMaskValue >= 0x10 || !PropertyMaskValue )
  {
LABEL_6:
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    goto LABEL_46;
  }
  v69[0] = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v67, v12->hPagingQueue, Current, v69, 1);
  v17 = v69[0];
  if ( !v69[0] )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v12->hPagingQueue;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    goto LABEL_17;
  }
  v20 = *((_QWORD *)v69[0] + 2);
  v69[1] = (struct DXGPAGINGQUEUE *)v20;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68,
    (struct DXGDEVICE *)v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, v20, 0, v21, 0);
  v22 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v73, 0LL);
  if ( v22 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
    if ( v67 )
      DXGPAGINGQUEUE::ReleaseReference(v67, v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v23);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v63);
    return (unsigned int)v22;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v66, v12->hAllocation);
  if ( !v66 )
  {
    v29 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v29 + 24) = v12->hAllocation;
LABEL_28:
    WdLogEvent5_WdError(v29);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v66, v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
LABEL_17:
    v19 = v67;
    if ( !v67 )
      goto LABEL_46;
    goto LABEL_45;
  }
  if ( *((_QWORD *)v66 + 1) != v20 )
  {
    v29 = WdLogNewEntry5_WdError(v28, v27);
    *(_QWORD *)(v29 + 24) = v20;
    *(_QWORD *)(v29 + 32) = *((_QWORD *)v66 + 1);
    goto LABEL_28;
  }
  v31 = *(ADAPTER_RENDER **)(v20 + 16);
  v32 = *((_QWORD *)v31 + 2);
  v33 = *(_QWORD *)(*(_QWORD *)(v32 + 216) + 64LL);
  v34 = *(_QWORD *)(v33 + 40);
  if ( *(_DWORD *)(v34 + 28) < 0x6002u )
  {
    v35 = WdLogNewEntry5_WdError(v34, v33);
    v36 = -1073741637LL;
    *(_QWORD *)(v35 + 32) = 1106LL;
LABEL_33:
    *(_QWORD *)(v35 + 24) = v36;
    WdLogEvent5_WdError(v35);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v66, v37);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
    if ( v67 )
      DXGPAGINGQUEUE::ReleaseReference(v67, v38);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v38);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v63);
    return (unsigned int)v36;
  }
  if ( (*(_BYTE *)(v20 + 1869) & 1) != 0 )
  {
    updated = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUpdateAllocationProperty(
                (struct _KTHREAD **)(v32 + 4208),
                (const struct DXGPROCESS *)Current,
                v17,
                v66,
                v12);
    goto LABEL_58;
  }
  if ( !*(_QWORD *)(v32 + 1000) )
  {
    v35 = WdLogNewEntry5_WdError(v34, v33);
    v36 = -1073741822LL;
    *(_QWORD *)(v35 + 32) = 1118LL;
    goto LABEL_33;
  }
  v43 = *((_QWORD *)v66 + 3);
  if ( !v43 )
  {
    v44 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v44 + 24) = v66;
    WdLogEvent5_WdError(v44);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v66, v45);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
    v19 = v67;
    if ( !v67 )
    {
LABEL_46:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v10);
      if ( v65 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v63);
      }
      return 3221225485LL;
    }
LABEL_45:
    DXGPAGINGQUEUE::ReleaseReference(v19, v10);
    goto LABEL_46;
  }
  v70.hAllocation = (HANDLE)*((_QWORD *)v66 + 4);
  v70.Flags.Value = v12->Flags.Value;
  v70.PreferredSegment.Value = v12->PreferredSegment.Value;
  v70.SupportedSegmentSet = v12->SupportedSegmentSet;
  v70.PropertyMaskValue = v12->PropertyMaskValue;
  v48 = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v31, &v70, v32);
  v51 = v48;
  if ( v48 >= 0 )
  {
    v71[2] = v12->Flags.0;
    v71[1] = v12->PreferredSegment.0;
    v71[0] = v12->SupportedSegmentSet;
    v71[3] = v12->0;
    updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _DWORD *, UINT64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 640LL)
                                                                                                 + 8LL)
                                                                                     + 216LL))(
                *(_QWORD *)(*(_QWORD *)(v20 + 16) + 648LL),
                *((_QWORD *)v17 + 4),
                v43,
                v71,
                &v12->PagingFenceValue);
LABEL_58:
    v57 = updated;
    if ( updated >= 0 && v62 )
    {
      v58 = (_QWORD *)(a1 + 24);
      v42 = MmUserProbeAddress;
      if ( a1 + 24 >= MmUserProbeAddress )
        v58 = (_QWORD *)MmUserProbeAddress;
      *v58 = v12->PagingFenceValue;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v66, v42);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
    if ( v67 )
      DXGPAGINGQUEUE::ReleaseReference(v67, v59);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v59);
    if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v63);
    return v57;
  }
  v52 = WdLogNewEntry5_WdError(v50, v49);
  *(_QWORD *)(v52 + 24) = v51;
  WdLogEvent5_WdError(v52);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v66, v53);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v68);
  if ( v67 )
    DXGPAGINGQUEUE::ReleaseReference(v67, v54);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v54);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v63);
  return (unsigned int)v51;
}
