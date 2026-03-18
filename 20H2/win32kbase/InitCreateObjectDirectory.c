/*
 * XREFs of InitCreateObjectDirectory @ 0x1C0292F28
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C008DFF4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ApiSetEditionCreateDefaultWindowStation @ 0x1C008FC50 (ApiSetEditionCreateDefaultWindowStation.c)
 */

__int64 InitCreateObjectDirectory()
{
  int DefaultWindowStation; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      19,
      (__int64)&WPP_658ee5f6f19939820aaea989098c75e5_Traceguids);
  RtlInitUnicodeString(&DestinationString, szWindowStationDirectory);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = (PVOID)gpsdInitWinSta;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  DefaultWindowStation = ZwCreateDirectoryObject(&ghWinstaDirectory, 4u, &ObjectAttributes);
  if ( DefaultWindowStation >= 0 )
    DefaultWindowStation = ApiSetEditionCreateDefaultWindowStation();
  Win32FreePool(gpsdInitWinSta);
  gpsdInitWinSta = 0LL;
  return (unsigned int)DefaultWindowStation;
}
