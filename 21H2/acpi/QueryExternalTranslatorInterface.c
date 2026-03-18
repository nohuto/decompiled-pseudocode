/*
 * XREFs of QueryExternalTranslatorInterface @ 0x1C009EFFC
 * Callers:
 *     AcpiCheckExternalConnection @ 0x1C00918BC (AcpiCheckExternalConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     RegisterExternalTranslatorInterface @ 0x1C009F2F0 (RegisterExternalTranslatorInterface.c)
 */

__int64 QueryExternalTranslatorInterface()
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r14
  _DWORD *Pool2; // rdi
  NTSTATUS Status; // ebx
  PDEVICE_OBJECT *v3; // rsi
  __int64 v4; // rcx
  PIRP v5; // rax
  NTSTATUS Driver; // eax
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-1h] BYREF
  void *FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID Object; // [rsp+F8h] [rbp+6Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  FileHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString.Buffer = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&ResourceHubDeviceName;
  memset(&Event, 0, sizeof(Event));
  AttachedDeviceReference = 0LL;
  Pool2 = 0LL;
  IoStatusBlock = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  if ( Status == -1073741772 )
  {
    if ( !LOBYTE(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
LABEL_29:
      if ( DestinationString.Buffer )
        ExFreePoolWithTag(DestinationString.Buffer, 0x58706341u);
      return (unsigned int)Status;
    }
    Driver = ZwLoadDriver((PUNICODE_STRING)&ResourceHubDriver);
    if ( Driver < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      OpenOptions[0] = Driver;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        0xEu,
        (__int64)&WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
        *(_QWORD *)OpenOptions);
    }
    Status = ZwOpenFile(&FileHandle, 0x100003u, &ObjectAttributes, &IoStatusBlock, 3u, 0x10u);
  }
  if ( Status < 0 )
    goto LABEL_29;
  Object = 0LL;
  Status = ObReferenceObjectByHandle(FileHandle, 0x100003u, 0LL, 0, &Object, 0LL);
  v3 = (PDEVICE_OBJECT *)Object;
  ZwClose(FileHandle);
  if ( Status < 0 )
    goto LABEL_14;
  AttachedDeviceReference = IoGetAttachedDeviceReference(v3[1]);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 120LL, 1483760449LL);
  if ( Pool2
    && (DestinationString.MaximumLength = 42,
        (DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, 42LL, 1483760449LL)) != 0LL) )
  {
    RtlCopyUnicodeString(&DestinationString, &ResourceHubDeviceName);
    memset(Pool2, 0, 0x78uLL);
    *Pool2 = 65656;
    *((_WORD *)Pool2 + 16) = 80;
    v4 = *(_QWORD *)(RootDeviceExtension + 768);
    *((_QWORD *)Pool2 + 11) = AcpiExternalInterfaceUnload;
    *((_QWORD *)Pool2 + 13) = AcpiAllocateGsivForSecondaryInterrupt;
    *((_QWORD *)Pool2 + 12) = &AcpiGetFullyQualifiedBiosName;
    *((_QWORD *)Pool2 + 10) = v4;
    *((_QWORD *)Pool2 + 14) = AcpiUpdateInterruptProperties;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v5 = IoBuildDeviceIoControlRequest(
           0x2AC028u,
           AttachedDeviceReference,
           Pool2,
           0x78u,
           Pool2,
           0x78u,
           0,
           &Event,
           &IoStatusBlock);
    if ( !v5 )
    {
LABEL_20:
      Status = -1073741811;
      goto LABEL_14;
    }
    v5->IoStatus.Status = -1073741637;
    Status = IofCallDriver(AttachedDeviceReference, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( *((_WORD *)Pool2 + 1) && *(_WORD *)Pool2 >= 0x78u && *((_QWORD *)Pool2 + 7) )
      {
        RegisterExternalTranslatorInterface(Pool2, v3, &DestinationString);
        goto LABEL_14;
      }
      goto LABEL_20;
    }
  }
  else
  {
    Status = -1073741670;
  }
LABEL_14:
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  if ( Status < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x58706341u);
    goto LABEL_29;
  }
  return (unsigned int)Status;
}
