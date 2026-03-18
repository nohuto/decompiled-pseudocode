/*
 * XREFs of ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0216178
 * Callers:
 *     DxgkSuspendMemorySegments @ 0x1C02169CC (DxgkSuspendMemorySegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendMemorySegments(ADAPTER_RENDER *this)
{
  int v2; // edi

  ADAPTER_RENDER::FlushScheduler((__int64)this, 6, 0xFFFFFFFF, 1);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 104LL))(*((_QWORD *)this + 81));
  if ( v2 < 0 )
    ADAPTER_RENDER::FlushScheduler((__int64)this, 7, 0xFFFFFFFF, 1);
  return (unsigned int)v2;
}
