/*
 * XREFs of ?DestroyVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAXXZ @ 0x1C03623F4
 * Callers:
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1C030A8B0 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0361A90 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0364904 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C005CB9C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C03623B8 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::DestroyVmBusChannel(DXG_GUEST_GLOBAL_VMBUS *this)
{
  struct VMBCHANNEL__ *v2; // rdi
  struct DXGGLOBAL *Global; // rax
  _BYTE v4[40]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v4,
    (DXG_GUEST_GLOBAL_VMBUS *)((char *)this + 16),
    *((_QWORD *)this + 3) != (_QWORD)KeGetCurrentThread());
  v2 = *(struct VMBCHANNEL__ **)this;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 68) = 0;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
  if ( v2 )
  {
    DestroyVmBusChannel(v2);
    v5 = 0;
    Global = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))GlobalVmBusStatChangeCallback,
      (__int64)&v5,
      1LL);
  }
}
