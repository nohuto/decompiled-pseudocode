/*
 * XREFs of ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1C035EBC4
 * Callers:
 *     ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C035E660 (-DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0372240 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(DXGK_VIRTUAL_GPU_PARAV *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 92, 0xFFFFFFFF) == 1 )
  {
    if ( this )
      (**(void (__fastcall ***)(DXGK_VIRTUAL_GPU_PARAV *, __int64))this)(this, 1LL);
  }
}
