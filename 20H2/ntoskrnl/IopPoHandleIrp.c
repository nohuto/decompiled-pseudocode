/*
 * XREFs of IopPoHandleIrp @ 0x1403981C4
 * Callers:
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     IopfCallDriver @ 0x14036FD44 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x140398214 (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
