/*
 * XREFs of ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C002CA90
 * Callers:
 *     VidSchTerminateDevice @ 0x1C0098CB0 (VidSchTerminateDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyDevice(ADAPTER_RENDER *this, void *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, void *))DxgCoreInterface[17])(this, a2);
}
