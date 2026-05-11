/*
 * XREFs of ?GetFilterInstance@CSidebandDevice@@AEAAJPEAPEAX@Z @ 0x1C000B3BC
 * Callers:
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C000B638 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall CSidebandDevice::GetFilterInstance(CSidebandDevice *this, void **a2)
{
  __int64 v4; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v6; // rdx
  signed int v7; // ebx
  unsigned __int16 v8; // r9
  PZZWSTR v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 FileAttributes; // [rsp+28h] [rbp-51h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+E0h] [rbp+67h] BYREF
  void *FileHandle; // [rsp+E8h] [rbp+6Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  SymbolicLinkList = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x3Eu,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids);
  v4 = *((_QWORD *)this + 4);
  *a2 = 0LL;
  DeviceInterfaces = IoGetDeviceInterfaces(
                       &USBSIDEBANDAUDIO_KSCATEGORY_AUDIO,
                       *(PDEVICE_OBJECT *)(v4 + 32),
                       0,
                       &SymbolicLinkList);
  v7 = DeviceInterfaces;
  if ( DeviceInterfaces < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    v8 = 63;
    goto LABEL_7;
  }
  v9 = SymbolicLinkList;
  v10 = 0LL;
  if ( SymbolicLinkList )
  {
    v11 = 512LL;
    do
    {
      if ( !*v9 )
        break;
      ++v9;
      --v11;
    }
    while ( v11 );
    v7 = v11 == 0 ? 0xC000000D : 0;
    if ( v11 )
      v10 = 512 - v11;
    else
      v10 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    v6 = 0LL;
  else
    v6 = 2 * v10;
  if ( v7 >= 0 )
  {
    if ( v6 )
    {
      RtlInitUnicodeString(&DestinationString, SymbolicLinkList);
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DeviceInterfaces = ZwCreateFile(
                           &FileHandle,
                           0xC0000000,
                           &ObjectAttributes,
                           &IoStatusBlock,
                           0LL,
                           0x80u,
                           3u,
                           3u,
                           0,
                           0LL,
                           0);
      v7 = DeviceInterfaces;
      if ( DeviceInterfaces >= 0 )
      {
        *a2 = FileHandle;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 66;
LABEL_7:
        LODWORD(FileAttributes) = DeviceInterfaces;
LABEL_8:
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v6,
          9u,
          v8,
          (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
          FileAttributes);
      }
    }
    else
    {
      v7 = -1073741275;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 65;
        goto LABEL_23;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = 64;
LABEL_23:
    LODWORD(FileAttributes) = v7;
    goto LABEL_8;
  }
LABEL_31:
  if ( SymbolicLinkList )
  {
    ExFreePool(SymbolicLinkList);
    SymbolicLinkList = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(FileAttributes) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      9u,
      0x43u,
      (__int64)&WPP_2758cf178eb33941c178507ca09d62b1_Traceguids,
      FileAttributes);
  }
  return (unsigned int)v7;
}
