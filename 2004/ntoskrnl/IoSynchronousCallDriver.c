/*
 * XREFs of IoSynchronousCallDriver @ 0x14034C550
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404E9BD0 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1406F6D20 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14070DD60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x14070DE80 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x14077B024 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140783A90 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A850 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14088A8F0 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x1408E9DD0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408E9F60 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408E9FE8 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408EA16C (PopBatteryReadTag.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x14028F780 (IofCallDriver.c)
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
