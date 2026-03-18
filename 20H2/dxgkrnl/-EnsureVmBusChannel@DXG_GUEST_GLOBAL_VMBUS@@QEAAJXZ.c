/*
 * XREFs of ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C023948C
 * Callers:
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0268208 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0237044 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C0237830 (-DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(struct VMBCHANNEL__ **this)
{
  bool v2; // zf
  struct _DEVICE_OBJECT *v4; // rdx
  int VmBusChannel; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, this + 1, 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  v2 = *((_BYTE *)this + 56) == 0;
  v12 = 2;
  if ( v2 )
  {
    DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_GUEST_GLOBAL_VMBUS *)this);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    VmBusChannel = DXG_GUEST_GLOBAL_VMBUS::CreateVmBusChannel(this, v4);
    v8 = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = v8;
      WdLogEvent5_WdError(v9);
    }
    return (unsigned int)v8;
  }
  else
  {
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
    return 0LL;
  }
}
