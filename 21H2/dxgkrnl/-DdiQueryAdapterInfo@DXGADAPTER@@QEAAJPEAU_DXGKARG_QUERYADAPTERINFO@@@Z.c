/*
 * XREFs of ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C016BE48
 * Callers:
 *     DXGADAPTER_DdiQueryAdapterInfo @ 0x1C002B130 (DXGADAPTER_DdiQueryAdapterInfo.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01D00EC (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7F8C (DpiFdoInitializeGpuVirtualization.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0200238 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C020FEC0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C02176F4 (DpiGetMonitorColorimetryOverride.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1C021B2C4 (DpiQueryDisplayIDDescriptor.c)
 *     ?GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z @ 0x1C022242C (-GetNodePerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_NODE_PERFDATA@@@Z.c)
 *     ?GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z @ 0x1C02BB8DC (-GetAdapterPerfData@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATA@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036B450 (-VmBusDdiQueryAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay @ 0x1C038AA48 (DpiFdoQueryAdapterInfoIntegratedDisplay.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1C038AC68 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C000A488 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A4D0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C037643C (-VmBusSendDdiQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::DdiQueryAdapterInfo(DXGADAPTER *this, struct _DXGKARG_QUERYADAPTERINFO *a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rdi
  KIRQL CurrentIrql; // al
  __int64 v7; // r12
  struct DXGTHREAD *v8; // r14
  struct DXGTHREAD *v9; // rax
  int v10; // r15d
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  KIRQL v16; // al
  int v17; // [rsp+50h] [rbp-39h] BYREF
  __int64 v18; // [rsp+58h] [rbp-31h]
  char v19; // [rsp+60h] [rbp-29h]
  _BYTE v20[24]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE v21[8]; // [rsp+80h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-1h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 5000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5000);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 5000);
  if ( *((_BYTE *)this + 209) )
  {
    LODWORD(v11) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDdiQueryAdapterInfo((DXGADAPTER *)((char *)this + 4344), a2);
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v20, Current);
    if ( (a2->Flags.Value & 1) == 0 && Current )
      a2->Flags.Value ^= (a2->Flags.Value ^ (unsigned __int8)DXGPROCESS::IsVmProcessOrVmValidation(Current, this)) & 1;
    DXGADAPTER::AcquireDdiSync((__int64)this, 1);
    _InterlockedAdd((volatile signed __int32 *)this + 1121, 1u);
    CurrentIrql = KeGetCurrentIrql();
    v7 = CurrentIrql;
    v8 = 0LL;
    if ( CurrentIrql < 2u && (v9 = DXGTHREAD::GetCurrent(), (v8 = v9) != 0LL) )
      v10 = *((_DWORD *)v9 + 12);
    else
      v10 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v21, this);
    v11 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_QUERYADAPTERINFO *))this + 56))(*((_QWORD *)this + 35), a2);
    if ( v21[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( (_BYTE)v7 != KeGetCurrentIrql() )
    {
      v16 = KeGetCurrentIrql();
      WdLogSingleEntry5(0LL, 275LL, 16LL, this, v7, v16);
    }
    if ( v8 )
    {
      v12 = *((int *)v8 + 12);
      if ( (_DWORD)v12 != v10 )
        WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v10, 0LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)this + 1121);
    WdLogSingleEntry4(4LL, v11, a2->Type, a2->InputDataSize, a2->OutputDataSize);
    if ( (_DWORD)v11 != -1073741811 && (_DWORD)v11 != -1073741822 && (_DWORD)v11 != -1073741801 && (_DWORD)v11 )
    {
      WdLogSingleEntry1(2LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGADAPTER::ReleaseDdiSync(this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
  return (unsigned int)v11;
}
