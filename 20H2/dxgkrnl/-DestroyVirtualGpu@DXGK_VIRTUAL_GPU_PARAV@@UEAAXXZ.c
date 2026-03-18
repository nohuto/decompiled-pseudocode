/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C02346F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006654 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003F558 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C003F618 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C02378B4 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_PARAV *this, __int64 a2)
{
  DXGPROCESS *v3; // rcx
  __int64 v4; // rax
  char *v5; // rsi
  char *v6; // rdi
  __int64 v7; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v3 = (DXGPROCESS *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    if ( *((_QWORD *)this + 13) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)this + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v9);
      v4 = *(_QWORD *)this;
      v10 = 2;
      (*(void (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, _QWORD, _QWORD))(v4 + 16))(this, 0LL, 0LL);
      DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 264));
      v5 = (char *)this + 296;
      while ( 1 )
      {
        v6 = *(char **)v5;
        if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
          __fastfail(3u);
        *(_QWORD *)v5 = v7;
        *(_QWORD *)(v7 + 8) = v5;
        *((_QWORD *)this + 34) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 264, 0LL);
        KeLeaveCriticalRegion();
        if ( v6 == v5 )
          break;
        DXGDEVICE::SetVirtualGpu((DXGDEVICE *)(v6 - 120), 0LL);
        DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 264));
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
      *((_QWORD *)this + 13) = 0LL;
      v3 = (DXGPROCESS *)*((_QWORD *)this + 12);
    }
    DXGPROCESS::ReleaseReference(v3, a2);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 168));
}
