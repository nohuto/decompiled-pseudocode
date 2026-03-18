/*
 * XREFs of IopfCallDriver @ 0x1403B51C4
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x1403B51A0 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x14055969C (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140A802F0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140A80ACC (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140A80B3C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x1403A374C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopfCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *v2; // rax
  __int64 MajorFunction; // r9

  if ( --a2->CurrentLocation <= 0 )
    KeBugCheckEx(0x35u, (ULONG_PTR)a2, 0LL, 0LL, 0LL);
  v2 = a2->Tail.Overlay.CurrentStackLocation - 1;
  a2->Tail.Overlay.CurrentStackLocation = v2;
  MajorFunction = v2->MajorFunction;
  v2->DeviceObject = a1;
  if ( (_BYTE)MajorFunction == 22 && (unsigned __int8)(v2->MinorFunction - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *))a1->DriverObject->MajorFunction[MajorFunction])(a1);
}
