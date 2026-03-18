/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0125AD8
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C0024320 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0123720 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014ABF4 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C017B1A8 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C017DA5C (DpiFdoInitializeGpuVirtualization.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01832A8 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0187764 (DpiGetMonitorColorimetryOverride.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C01952E4 (DpiQueryDisplayIDDescriptor.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C020C090 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C020C354 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C0221034 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0221D74 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023E810 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02CA180 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02CA3F0 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0009868 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00098E0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0246AE8 (-VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v11; // rsi
  struct DXGTHREAD *v12; // rax
  int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v24; // rax
  unsigned __int8 v25; // cl
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-39h] BYREF
  __int64 v30; // [rsp+28h] [rbp-31h]
  char v31; // [rsp+30h] [rbp-29h]
  _BYTE v32[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v33[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 5000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5000);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 5000LL);
  if ( *((_BYTE *)this + 209) )
  {
    LODWORD(v16) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo((DXGADAPTER *)((char *)this + 4240), a2);
  }
  else
  {
    Current = DXGPROCESS::GetCurrent(v6, v5);
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32, Current);
    if ( (a2->Flags.Value & 1) == 0 )
      a2->Flags.Value ^= (a2->Flags.Value ^ (unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(Current, this)) & 1;
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 1091, 1u);
    CurrentIrql = KeGetCurrentIrql();
    v11 = 0LL;
    if ( CurrentIrql < 2u && (v12 = DXGTHREAD::GetCurrent(v9, v8), (v11 = v12) != 0LL) )
      v13 = *((_DWORD *)v12 + 8);
    else
      v13 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v33, this);
    v16 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 45))(*((_QWORD *)this + 34), a2);
    if ( v33[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v24[3] = 275LL;
      v24[4] = 16LL;
      v24[5] = this;
      v24[6] = CurrentIrql;
      v25 = KeGetCurrentIrql();
      v24[7] = v25;
      WdLogEvent5_WdCriticalError(v24);
    }
    if ( v11 && *((_DWORD *)v11 + 8) != v13 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v14);
      v26[3] = 275LL;
      v26[4] = 38LL;
      v27 = *((int *)v11 + 8);
      v26[7] = 0LL;
      v26[5] = v27;
      v26[6] = v13;
      WdLogEvent5_WdCriticalError(v26);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1091);
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
    v17[3] = v16;
    v17[4] = a2->Type;
    v17[5] = a2->InputDataSize;
    v17[6] = a2->OutputDataSize;
    WdLogEvent5_WdEvent(v17);
    if ( (_DWORD)v16 != -1073741811 && (_DWORD)v16 != -1073741822 && (_DWORD)v16 != -1073741801 && (_DWORD)v16 )
    {
      v28 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v28 + 24) = v16;
      WdLogEvent5_WdError(v28);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v20);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v29);
  return (unsigned int)v16;
}
