/*
 * XREFs of ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C4D14
 * Callers:
 *     DxgkSuspendMemorySegments @ 0x1C02C58A8 (DxgkSuspendMemorySegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendMemorySegments(ADAPTER_RENDER *this)
{
  int v2; // edi

  ADAPTER_RENDER::FlushScheduler((__int64)this, 6u, 0xFFFFFFFF, 1);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 81) + 8LL) + 104LL))(*((_QWORD *)this + 82));
  if ( v2 < 0 )
    ADAPTER_RENDER::FlushScheduler((__int64)this, 7u, 0xFFFFFFFF, 1);
  return (unsigned int)v2;
}
