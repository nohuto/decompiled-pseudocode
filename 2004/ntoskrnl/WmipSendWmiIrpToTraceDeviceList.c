/*
 * XREFs of WmipSendWmiIrpToTraceDeviceList @ 0x1407AF2F4
 * Callers:
 *     WmiTraceRundownNotify @ 0x1407AF204 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x14092FF48 (WmiSetNetworkNotify.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x140271820 (IoAllocateIrp.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     IoFreeIrp @ 0x140290A30 (IoFreeIrp.c)
 *     IoInitializeIrp @ 0x140334050 (IoInitializeIrp.c)
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 */

__int64 __fastcall WmipSendWmiIrpToTraceDeviceList(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rbp
  unsigned int v8; // ebx
  __int16 StackSize; // di
  CCHAR v10; // r14
  PIRP Irp; // rsi
  USHORT v12; // di

  v6 = a2;
  v8 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  StackSize = WmipServiceDeviceObject->StackSize;
  v10 = StackSize + 1;
  KeReleaseMutex(&WmipSMMutex, 0);
  Irp = IoAllocateIrp((unsigned __int8)StackSize + 1, 0);
  if ( Irp )
  {
    if ( (_DWORD)v6 )
    {
      v12 = 72 * StackSize + 280;
      do
      {
        IoInitializeIrp(Irp, v12, v10);
        --Irp->Tail.Overlay.CurrentStackLocation;
        --Irp->CurrentLocation;
        Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = WmipServiceDeviceObject;
        Irp->Tail.Overlay.Thread = KeGetCurrentThread();
        WmipForwardWmiIrp(Irp, a3, *(_DWORD *)(*(_QWORD *)a1 + 56LL), 0LL, a4, a5);
        a1 += 16LL;
        --v6;
      }
      while ( v6 );
      v8 = 0;
    }
    IoFreeIrp(Irp);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
