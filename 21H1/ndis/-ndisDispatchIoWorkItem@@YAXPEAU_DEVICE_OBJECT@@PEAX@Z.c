/*
 * XREFs of ?ndisDispatchIoWorkItem@@YAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0039B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDispatchIoWorkItem(PDEVICE_OBJECT DeviceObject, void (__fastcall **Context)(_QWORD))
{
  Context[4](Context[5]);
}
