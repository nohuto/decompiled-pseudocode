/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C0021C78
 * Callers:
 *     VidSchTerminateDevice @ 0x1C0069070 (VidSchTerminateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[17])(this, a2);
}
