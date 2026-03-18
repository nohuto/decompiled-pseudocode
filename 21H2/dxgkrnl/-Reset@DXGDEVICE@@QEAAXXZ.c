/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C02E73F8
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C02C4BD8 (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1C0329B74 (-Reset@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C03371C0 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C0379D14 (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  DXGOVERLAY *i; // rdi
  bool v3; // zf
  __int64 v4; // rdx
  const struct _WNF_STATE_NAME *v5; // rdx
  unsigned int v6; // r9d
  DXG_GUEST_VIRTUALGPU_VMBUS *v7; // rcx
  struct DXGPROCESS *v8; // rdx
  DXGPROCESS *v9; // rcx
  _BYTE v10[16]; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  _D3DKMT_MARKDEVICEASERROR v12; // [rsp+78h] [rbp+10h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 1592LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1592LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 744LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  for ( i = (DXGOVERLAY *)*((_QWORD *)this + 60); i != (DXGDEVICE *)((char *)this + 480) && i; i = *(DXGOVERLAY **)i )
    DXGOVERLAY::Reset(i);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  v3 = (*((_BYTE *)this + 1869) & 1) == 0;
  v4 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 144) = 2;
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 624) + 8LL) + 576LL))(*((_QWORD *)this + 96)) )
      *((_DWORD *)this + 144) = 3;
    else
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL) + 208LL))(
        *((_QWORD *)this + 96),
        22LL);
  }
  else
  {
    v7 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v4 + 16) + 4344LL);
    v8 = (struct DXGPROCESS *)*((_QWORD *)this + 5);
    v12.hDevice = *((_DWORD *)this + 109);
    v12.Reason = 0x80000000;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(v7, v8, this, &v12);
  }
  v9 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v11 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v9, v5, &v11, v6) < 0 )
  {
    WdLogSingleEntry1(2LL, 1656LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Reset.",
      1656LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
