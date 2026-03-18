/*
 * XREFs of IopPoHandleIrp @ 0x1403A374C
 * Callers:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     IopfCallDriver @ 0x1403B51C4 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x1403A379C (PoHandleIrp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
