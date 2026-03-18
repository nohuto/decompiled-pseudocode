/*
 * XREFs of IoSynchronousCallDriver @ 0x14031D280
 * Callers:
 *     FsRtlGetFileExtents @ 0x1404ED460 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1406C9BB0 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E01B0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406E02D0 (FsRtlMdlReadEx.c)
 *     WmipGetFilePDO @ 0x140789624 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140791480 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1408903A0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140890440 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x1408EF9E0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408EFB70 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408EFBF8 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408EFD7C (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x140211330 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
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
