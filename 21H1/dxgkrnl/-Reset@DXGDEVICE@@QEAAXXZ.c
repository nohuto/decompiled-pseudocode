/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0252284
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02128F0 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1C0212F9C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1C024597C (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C02815CC (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *i; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v10; // rdx
  const struct _WNF_STATE_NAME *v11; // rdx
  unsigned int v12; // r9d
  DXG_GUEST_VIRTUALGPU_VMBUS *v13; // rcx
  struct DXGPROCESS *v14; // rdx
  DXGPROCESS *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[24]; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+40h] [rbp+8h] BYREF
  _D3DKMT_MARKDEVICEASERROR v21; // [rsp+48h] [rbp+10h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 1540LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 728LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  for ( i = (__int64 *)*((_QWORD *)this + 60); i != (__int64 *)((char *)this + 480) && i; i = (__int64 *)*i )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(i[2] + 16) + 16LL)) )
    {
      v8 = WdLogNewEntry5_WdAssertion(v7, v5);
      *(_QWORD *)(v8 + 24) = 226LL;
      WdLogEvent5_WdAssertion(v8);
    }
    *((_DWORD *)i + 8) = -1;
    *((_DWORD *)i + 7) = 2;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v5);
  v9 = (*((_BYTE *)this + 1869) & 1) == 0;
  v10 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 144) = 2;
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v10 + 616) + 8LL) + 576LL))(*((_QWORD *)this + 96)) )
      *((_DWORD *)this + 144) = 3;
    else
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL) + 208LL))(
        *((_QWORD *)this + 96),
        22LL);
  }
  else
  {
    v13 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v10 + 16) + 4208LL);
    v14 = (struct DXGPROCESS *)*((_QWORD *)this + 5);
    v21.hDevice = *((_DWORD *)this + 109);
    v21.Reason = 0x80000000;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(v13, v14, this, &v21);
  }
  v15 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v20 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v15, v11, &v20, v12) < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v18 + 24) = 1604LL;
    WdLogEvent5_WdError(v18);
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v16);
}
