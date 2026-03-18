/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C0018618
 * Callers:
 *     VidSchSyncPriorityDevice @ 0x1C00A6820 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  ((void (__fastcall *)(DXGDEVICE *))DxgCoreInterface[8])(this);
}
