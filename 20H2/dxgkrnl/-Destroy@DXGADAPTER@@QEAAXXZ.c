/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020AFF4
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017775C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C020A0C0 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020E8D4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006568 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer @ 0x1C00390F8 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer.c)
 *     DpiReportAdapter @ 0x1C01768C0 (DpiReportAdapter.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0197CD4 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C020AD64 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C020B454 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C021033C (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02146F0 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C02378B4 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0269D28 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026A880 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02B4488 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C02C5174 (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, struct _LUID *a2)
{
  int v2; // eax
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v9; // rcx
  ADAPTER_RENDER *v10; // rcx
  void (__fastcall *v11)(_QWORD); // rax
  void (__fastcall *v12)(_QWORD); // rax
  __int64 v13; // r9
  int updated; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  DXGGLOBAL *v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-158h]
  int v28; // [rsp+C0h] [rbp-C0h]
  int v29; // [rsp+D8h] [rbp-A8h]
  __int64 v30; // [rsp+100h] [rbp-80h] BYREF
  __int64 v31; // [rsp+108h] [rbp-78h]
  int v32; // [rsp+110h] [rbp-70h]
  int v33; // [rsp+118h] [rbp-68h]
  unsigned int v34; // [rsp+140h] [rbp-40h] BYREF

  v2 = *((_DWORD *)this + 87);
  v3 = *((_DWORD *)this + 362);
  *((_BYTE *)this + 208) = 1;
  if ( (v2 & 0x10) != 0 && !*((_QWORD *)this + 337) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v30, (__int64)a2);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v30);
    if ( *((DXGADAPTER **)DXGGLOBAL::GetGlobal(v6, v5) + 103) == this )
    {
      Global = DXGGLOBAL::GetGlobal(v7, (__int64)a2);
      DXGGLOBAL::SetWarpAdapter(Global, 0LL);
      DXGADAPTER::ReleaseReference(this);
    }
    if ( (_BYTE)v31 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v30, (__int64)a2);
  }
  v9 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 337);
  if ( v9 )
    ADAPTER_DISPLAY::Destroy(v9);
  v10 = (ADAPTER_RENDER *)*((_QWORD *)this + 338);
  if ( v10 )
    ADAPTER_RENDER::Destroy(v10);
  v11 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 214);
  if ( v11 )
  {
    v11(*((_QWORD *)this + 212));
    memset((char *)this + 1688, 0, 0xB8uLL);
  }
  v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 238);
  if ( v12 )
  {
    v12(*((_QWORD *)this + 236));
    memset((char *)this + 1880, 0, 0x70uLL);
  }
  if ( *((_BYTE *)this + 4368) )
  {
    v34 = 0;
    if ( DXGADAPTER::IsAdapterSessionized(this, a2, &v34, 0LL) )
      updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_STOP, 0LL, 0LL, v13, &v34, 0, 0);
    else
      updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_STOP, 0LL, 0LL, v13, 0LL, 0, 0);
    v17 = updated;
    if ( updated < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v18 + 32) = v17;
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdError(v18);
    }
    *((_BYTE *)this + 4368) = 0;
  }
  DpiFreeAdapterInfo((char *)this + 1392);
  DXGADAPTER::DestroyPhysicalAdapterData(this);
  memset((char *)this + 272, 0, 0x460uLL);
  memset((char *)this + 1392, 0, 0x128uLL);
  if ( *((_BYTE *)this + 209) )
  {
    v19 = *((_DWORD *)this + 1078);
    if ( v19 )
    {
      v30 = 0LL;
      v31 = 0LL;
      v32 = 15;
      v33 = v19;
      DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        (DXGADAPTER *)((char *)this + 4240),
        (struct DXGKVMB_COMMAND_BASE *)&v30,
        0x20u,
        0LL,
        0LL,
        v27);
      *((_DWORD *)this + 1078) = 0;
    }
    v30 = 0LL;
    v31 = 0LL;
    v32 = 30;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
      (DXGADAPTER *)((char *)this + 4240),
      (struct DXGKVMB_COMMAND_BASE *)&v30,
      0x18u,
      0LL,
      0LL,
      v27);
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 4240));
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v21, v20) + 408) >= 0x16u )
      DXGADAPTER::DeleteRegistryKeys(this);
  }
  v22 = *((unsigned int *)this + 58);
  if ( (_DWORD)v22 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), v22);
    *((_DWORD *)this + 58) = -1;
  }
  v23 = *((_QWORD *)this + 27);
  if ( v23 )
  {
    DpiReportAdapter(v23, (__int64)this);
    if ( bTracingEnabled )
    {
      v24 = *((_DWORD *)this + 511);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v25 = v24 >> 14;
        LOBYTE(v25) = v25 & 7;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer(
          v25,
          &EventDestroyAdapter,
          v24 >> 31,
          *((_QWORD *)this + 27),
          (char)this,
          v3,
          *((_QWORD *)this + 249),
          *((_DWORD *)this + 500),
          *((_QWORD *)this + 251),
          *((_DWORD *)this + 504),
          *((_DWORD *)this + 505),
          *((_DWORD *)this + 507),
          *((_DWORD *)this + 508),
          *((_DWORD *)this + 509),
          *((_DWORD *)this + 512),
          *((_DWORD *)this + 506),
          *((_DWORD *)this + 510),
          v24,
          (v24 >> 10) & 0xF,
          v25,
          (v24 >> 17) & 7,
          (v24 & 0x80000000) != 0,
          *((_DWORD *)this + 513),
          *((_DWORD *)this + 514),
          v28,
          *((_DWORD *)this + 516),
          *((_DWORD *)this + 517),
          v29,
          0,
          0,
          0);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 72));
    *((_DWORD *)this + 40) = 0;
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( *((_BYTE *)this + 209) )
  {
    v26 = DXGGLOBAL::GetGlobal(v23, v22);
    DXGGLOBAL::SetVirtualRenderAdapter(v26, 0LL);
    if ( *((_BYTE *)this + 211) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
