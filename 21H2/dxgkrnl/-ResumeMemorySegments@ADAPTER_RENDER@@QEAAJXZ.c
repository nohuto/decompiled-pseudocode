/*
 * XREFs of ?ResumeMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02C4878
 * Callers:
 *     DxgkResumeMemorySegments @ 0x1C02C5480 (DxgkResumeMemorySegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ @ 0x1C02C40A8 (-PageInAllDevices@ADAPTER_RENDER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResumeMemorySegments(ADAPTER_RENDER *this)
{
  unsigned int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 81) + 8LL) + 112LL))(*((_QWORD *)this + 82));
  ADAPTER_RENDER::PageInAllDevices(this);
  ADAPTER_RENDER::FlushScheduler((__int64)this, 7u, 0xFFFFFFFF, 1);
  return v2;
}
