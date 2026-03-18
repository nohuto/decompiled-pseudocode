/*
 * XREFs of IopPoHandleIrp @ 0x140395134
 * Callers:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IopfCallDriver @ 0x14036D4A4 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140395184 (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopPoHandleIrp(IRP *a1)
{
  if ( (unsigned __int8)PoHandleIrp(a1) )
    return 0LL;
  else
    return ((__int64 (__fastcall *)(PDEVICE_OBJECT, IRP *))a1->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[a1->Tail.Overlay.CurrentStackLocation->MajorFunction])(
             a1->Tail.Overlay.CurrentStackLocation->DeviceObject,
             a1);
}
