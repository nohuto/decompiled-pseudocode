/*
 * XREFs of ?DdiDestroyContext@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C002CA6C
 * Callers:
 *     VidSchTerminateContext @ 0x1C0098F20 (VidSchTerminateContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyContext(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[24])(this, a2);
}
