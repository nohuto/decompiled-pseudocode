/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00F05E8
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C0024270 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EE230 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014D494 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C0167B90 (DpiQueryDisplayIDDescriptor.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0169F78 (DpiGetMonitorColorimetryOverride.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016DC78 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0172B1C (DpiFdoInitializeGpuVirtualization.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0177C34 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C0208FF0 (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C02092B4 (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C021DF94 (-QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C021ECD4 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023B6B0 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C02C6BC0 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C02C6E30 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 * Callees:
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000A0C8 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A10C (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C02438B8 (-VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v7; // rsi
  struct DXGTHREAD *v8; // rax
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v20; // rax
  unsigned __int8 v21; // cl
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-39h] BYREF
  __int64 v26; // [rsp+28h] [rbp-31h]
  char v27; // [rsp+30h] [rbp-29h]
  _BYTE v28[24]; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v29[8]; // [rsp+50h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-1h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 5000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5000);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 5000LL);
  if ( *((_BYTE *)this + 209) )
  {
    LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo((DXGADAPTER *)((char *)this + 4208), a2);
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v28, Current);
    if ( (a2->Flags.Value & 1) == 0 )
      a2->Flags.Value ^= (a2->Flags.Value ^ (unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(Current, this)) & 1;
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 1081, 1u);
    CurrentIrql = KeGetCurrentIrql();
    v7 = 0LL;
    if ( CurrentIrql < 2u && (v8 = DXGTHREAD::GetCurrent(), (v7 = v8) != 0LL) )
      v9 = *((_DWORD *)v8 + 8);
    else
      v9 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v29, this);
    v12 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 45))(*((_QWORD *)this + 34), a2);
    if ( v29[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
      v20[3] = 275LL;
      v20[4] = 16LL;
      v20[5] = this;
      v20[6] = CurrentIrql;
      v21 = KeGetCurrentIrql();
      v20[7] = v21;
      WdLogEvent5_WdCriticalError(v20);
    }
    if ( v7 && *((_DWORD *)v7 + 8) != v9 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
      v22[3] = 275LL;
      v22[4] = 38LL;
      v23 = *((int *)v7 + 8);
      v22[7] = 0LL;
      v22[5] = v23;
      v22[6] = v9;
      WdLogEvent5_WdCriticalError(v22);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1081);
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
    v13[3] = v12;
    v13[4] = a2->Type;
    v13[5] = a2->InputDataSize;
    v13[6] = a2->OutputDataSize;
    WdLogEvent5_WdEvent(v13);
    if ( (_DWORD)v12 != -1073741811 && (_DWORD)v12 != -1073741822 && (_DWORD)v12 != -1073741801 && (_DWORD)v12 )
    {
      v24 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v24 + 24) = v12;
      WdLogEvent5_WdError(v24);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v16);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v25);
  return (unsigned int)v12;
}
