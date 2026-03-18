/*
 * XREFs of IoSynchronousCallDriver @ 0x14030EE80
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404E95A0 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1406D3F30 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406EA010 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406EA130 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140778C14 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14077B090 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140889530 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408895D0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x1408E8B50 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408E8CE0 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408E8D68 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408E8EEC (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393216;
  v6[1] = v6;
  v6[0] = v6;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
  CurrentStackLocation[-1].Context = Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
