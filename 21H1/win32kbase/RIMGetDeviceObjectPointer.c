/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C00A2F44
 * Callers:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00221DC (RIMRegOpenDeviceInstanceKey.c)
 *     RIMGetDeviceParent @ 0x1C00222C4 (RIMGetDeviceParent.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C015EC50 (RIMEnableMonitorMappingForDevice.c)
 *     RIMDeliverConfigRequest @ 0x1C0169E24 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C016AC14 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C016AF70 (RIMSetDeviceIdleTimeout.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C016FF48 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0064264 (WPP_RECORDER_SF_ddd.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  NTSTATUS v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-61h]
  int v11; // [rsp+30h] [rbp-59h]
  NTSTATUS v12; // [rsp+38h] [rbp-51h]
  void *FileHandle; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  _DWORD v17[4]; // [rsp+90h] [rbp+7h] BYREF

  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.SecurityQualityOfService = v17;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v17[2] = 257;
  v17[0] = 12;
  v17[1] = 2;
  v7 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 < 0 )
    goto LABEL_7;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
  if ( v7 < 0 )
  {
    ZwClose(FileHandle);
  }
  else
  {
    v8 = (struct _FILE_OBJECT *)Object;
    *a5 = Object;
    *a6 = IoGetRelatedDeviceObject(v8);
    *a4 = FileHandle;
  }
  if ( v7 < 0 )
  {
LABEL_7:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = v7;
      v11 = 3;
      OpenOptions[0] = 0;
      WPP_RECORDER_SF_ddd(
        (__int64)gRimLog,
        4u,
        1u,
        0x22u,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        *(_QWORD *)OpenOptions,
        v11,
        v12);
    }
  }
  return (unsigned int)v7;
}
