/*
 * XREFs of IoSynchronousCallDriver @ 0x140245250
 * Callers:
 *     FsRtlGetFileExtents @ 0x140540EA0 (FsRtlGetFileExtents.c)
 *     WmipGetFilePDO @ 0x1406C1BD4 (WmipGetFilePDO.c)
 *     IoForwardIrpSynchronously @ 0x1406C1CD0 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E4AF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406E4C10 (FsRtlMdlReadEx.c)
 *     PopAcquireCoolingInterface @ 0x1408296B8 (PopAcquireCoolingInterface.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x1409303C0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140930460 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x140994C10 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x140994DA0 (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x140994E28 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x140994FAC (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
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
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&SmKmGenericCompletion;
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
