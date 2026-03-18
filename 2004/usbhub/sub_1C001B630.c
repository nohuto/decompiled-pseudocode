/*
 * XREFs of sub_1C001B630 @ 0x1C001B630
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

NTSTATUS __fastcall sub_1C001B630(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  PVOID DeviceExtension; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int MinorFunction; // ecx
  KIRQL v7; // al
  PDEVICE_OBJECT *v9; // rax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(a1, a1->DeviceExtension);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *((_DWORD *)DeviceExtension + 5) = MinorFunction;
  *((_BYTE *)DeviceExtension
  + (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 316, 1u) + 1) & 0xF)
  + 1268) = MinorFunction;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
  stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
  if ( *((_DWORD *)DeviceExtension + 314) && CurrentStackLocation->MinorFunction < 0x20u )
  {
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v7);
    return off_1C005E1A8[2 * CurrentStackLocation->MinorFunction](a1, a2);
  }
  else
  {
    stru_1C006B480.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v7);
    v9 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(v9[151], a2);
  }
}
