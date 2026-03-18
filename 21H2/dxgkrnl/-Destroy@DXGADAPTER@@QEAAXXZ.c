/*
 * XREFs of ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B9738 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000EF68 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x1C0044A20 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiReportAdapter @ 0x1C01FC5E0 (DpiReportAdapter.c)
 *     ?SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C021C024 (-SetWarpAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C02BA328 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C02BAA6C (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ @ 0x1C02BAB6C (-DestroyPhysicalObjectsForHardwareReservedRanges@DXGADAPTER@@AEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BFA44 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C3330 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C030BFE4 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030CB8C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C03482EC (-ReleaseSessionAdapterOrdinal@DXGSESSIONDATA@@QEAAXK@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C03516A8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0362480 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0373C6C (-VmBusSendAdapterStop@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 *     ?VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z @ 0x1C0374638 (-VmBusSendCloseAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXI@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C0386FF4 (DpiFreeAdapterInfo.c)
 */

void __fastcall DXGADAPTER::Destroy(DXGADAPTER *this, struct _LUID *a2)
{
  int v2; // eax
  int v3; // esi
  DXGGLOBAL *Global; // rax
  ADAPTER_DISPLAY *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  void (__fastcall *v8)(_QWORD); // rax
  void (__fastcall *v9)(_QWORD); // rax
  __int64 v10; // r9
  int updated; // eax
  __int64 v12; // rbx
  unsigned int v13; // edx
  struct _LUID *v14; // rdx
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v16; // rcx
  unsigned int v17; // r9d
  __int64 v18; // rcx
  DXGGLOBAL *v19; // rax
  int v20; // [rsp+C0h] [rbp-68h]
  int v21; // [rsp+D8h] [rbp-50h]
  _BYTE v22[16]; // [rsp+100h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+130h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 109);
  v3 = *((_DWORD *)this + 386);
  *((_BYTE *)this + 208) = 1;
  if ( (v2 & 0x10) != 0 && !*((_QWORD *)this + 349) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
    if ( *((DXGADAPTER **)DXGGLOBAL_GetGlobal() + 123) == this )
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::SetWarpAdapter(Global, 0LL);
      DXGADAPTER::ReleaseReference(this);
    }
    if ( v22[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  }
  v6 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 349);
  if ( v6 )
    ADAPTER_DISPLAY::Destroy(v6);
  v7 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
  if ( v7 )
    ADAPTER_RENDER::Destroy(v7);
  v8 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 226);
  if ( v8 )
  {
    v8(*((_QWORD *)this + 224));
    memset((char *)this + 1784, 0, 0xB8uLL);
  }
  v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 250);
  if ( v9 )
  {
    v9(*((_QWORD *)this + 248));
    memset((char *)this + 1976, 0, 0x70uLL);
  }
  if ( *((_BYTE *)this + 4488) )
  {
    v23 = 0;
    if ( DXGADAPTER::IsAdapterSessionized(this, a2, &v23, 0LL) )
      updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_STOP, 0LL, 0LL, v10, &v23, 0, 0);
    else
      updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_STOP, 0LL, 0LL, v10, 0LL, 0, 0);
    if ( updated < 0 )
    {
      v12 = updated;
      WdLogSingleEntry2(2LL, this, updated);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to send Stop WNF for Adapter=0x%I64x with Status=0x%I64x",
        (__int64)this,
        v12,
        0LL,
        0LL,
        0LL);
    }
    *((_BYTE *)this + 4488) = 0;
  }
  DpiFreeAdapterInfo((char *)this + 1488);
  DXGADAPTER::DestroyPhysicalAdapterData(this);
  DXGADAPTER::DestroyPhysicalObjectsForHardwareReservedRanges(this);
  memset((char *)this + 280, 0, 0x4B8uLL);
  memset((char *)this + 1488, 0, 0x128uLL);
  if ( *((_BYTE *)this + 209) )
  {
    v13 = *((_DWORD *)this + 1108);
    if ( v13 )
    {
      DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCloseAdapter((DXGADAPTER *)((char *)this + 4344), v13);
      *((_DWORD *)this + 1108) = 0;
    }
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendAdapterStop((DXGADAPTER *)((char *)this + 4344));
    DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGADAPTER *)((char *)this + 4344));
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) >= 0x16u )
      DXGADAPTER::DeleteRegistryKeys(this);
  }
  v14 = (struct _LUID *)*((unsigned int *)this + 60);
  if ( (_DWORD)v14 != -1 )
  {
    DXGGLOBAL::ReleaseAdapterOrdinal(*((DXGGLOBAL **)this + 2), (unsigned int)v14);
    *((_DWORD *)this + 60) = -1;
  }
  if ( *((_DWORD *)this + 61) != -1 )
  {
    v23 = 0;
    DXGADAPTER::IsAdapterSessionized(this, v14, &v23, 0LL);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *(DXGSESSIONMGR **)(*((_QWORD *)this + 2) + 976LL),
                                       v23);
    if ( SessionDataForSpecifiedSession )
    {
      DXGSESSIONDATA::ReleaseSessionAdapterOrdinal(SessionDataForSpecifiedSession, *((_DWORD *)this + 61));
      *((_DWORD *)this + 61) = -1;
    }
  }
  v16 = *((_QWORD *)this + 27);
  if ( v16 )
  {
    DpiReportAdapter(v16, (__int64)this);
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)this + 535);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        v18 = v17 >> 14;
        LOBYTE(v18) = v18 & 7;
        McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
          v18,
          &EventDestroyAdapter,
          v17 >> 31,
          *((_QWORD *)this + 27),
          (char)this,
          v3,
          *((_QWORD *)this + 261),
          *((_DWORD *)this + 524),
          *((_QWORD *)this + 263),
          *((_DWORD *)this + 528),
          *((_DWORD *)this + 529),
          *((_DWORD *)this + 531),
          *((_DWORD *)this + 532),
          *((_DWORD *)this + 533),
          *((_DWORD *)this + 536),
          *((_DWORD *)this + 530),
          *((_DWORD *)this + 534),
          v17,
          (v17 >> 10) & 0xF,
          v18,
          (v17 >> 17) & 7,
          (v17 & 0x80000000) != 0,
          *((_DWORD *)this + 537),
          *((_DWORD *)this + 538),
          v20,
          *((_DWORD *)this + 540),
          *((_DWORD *)this + 541),
          v21,
          0,
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
    v19 = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::SetVirtualRenderAdapter(v19, 0LL);
    if ( *((_BYTE *)this + 211) )
      DXGVAILOBJECT::NotifyVailAdapter(0);
  }
}
