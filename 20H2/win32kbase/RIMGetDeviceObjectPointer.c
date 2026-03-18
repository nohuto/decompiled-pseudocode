/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C006EE58
 * Callers:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0009DCC (RIMRegOpenDeviceInstanceKey.c)
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     rimOnPnpArrived @ 0x1C00240B8 (rimOnPnpArrived.c)
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01563A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMDeliverConfigRequest @ 0x1C016156C (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0162364 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C01626C0 (RIMSetDeviceIdleTimeout.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0034894 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  int v7; // edx
  NTSTATUS v8; // ebx
  struct _FILE_OBJECT *v9; // rcx
  void *FileHandle; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v15[4]; // [rsp+90h] [rbp+7h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.SecurityQualityOfService = v15;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v15[2] = 257;
  v15[0] = 12;
  v15[1] = 2;
  v8 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v8 < 0 )
    goto LABEL_7;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v8 < 0 )
  {
    ZwClose(FileHandle);
  }
  else
  {
    v9 = (struct _FILE_OBJECT *)Object;
    *a5 = Object;
    *a6 = IoGetRelatedDeviceObject(v9);
    *a4 = FileHandle;
  }
  if ( v8 < 0 )
  {
LABEL_7:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_ddd(
        (_DWORD)gRimLog,
        v7,
        1,
        34,
        (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
        0,
        3,
        v8);
    }
  }
  return (unsigned int)v8;
}
