/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C035E500
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C000C1D8 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005C4B8 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C005C578 (-SetVirtualGpu@DXGDEVICE@@QEAAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ @ 0x1C0362480 (-DestroyVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXXZ.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::DestroyVirtualGpu(DXGK_VIRTUAL_GPU_PARAV *this)
{
  DXGPROCESS *v2; // rcx
  __int64 v3; // rax
  char *v4; // rsi
  char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v2 = (DXGPROCESS *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( *((_QWORD *)this + 13) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)this + 7, 0);
      DXGPUSHLOCK::AcquireExclusive(v9);
      v3 = *(_QWORD *)this;
      v10 = 2;
      (*(void (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, _QWORD, _QWORD))(v3 + 16))(this, 0LL, 0LL);
      DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      v4 = (char *)this + 320;
      while ( 1 )
      {
        v5 = *(char **)v4;
        if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
          __fastfail(3u);
        *(_QWORD *)v4 = v6;
        *(_QWORD *)(v6 + 8) = v4;
        *((_QWORD *)this + 37) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 288, 0LL);
        KeLeaveCriticalRegion();
        if ( v5 == v4 )
          break;
        DXGDEVICE::SetVirtualGpu((DXGDEVICE *)(v5 - 120), 0LL);
        DXGPUSHLOCK::AcquireExclusive((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 288));
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      DXGVIRTUALMACHINE::RemoveVirtualGpu(*((struct _KTHREAD ***)this + 13), (struct _LIST_ENTRY *)((char *)this + 136));
      *((_QWORD *)this + 13) = 0LL;
      v2 = (DXGPROCESS *)*((_QWORD *)this + 12);
    }
    DXGPROCESS::ReleaseReference(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::DestroyVmBusChannel((DXGK_VIRTUAL_GPU_PARAV *)((char *)this + 176));
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
  {
    operator delete(*(void **)(v7 + 32));
    *(_QWORD *)(*((_QWORD *)this + 20) + 32LL) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
}
