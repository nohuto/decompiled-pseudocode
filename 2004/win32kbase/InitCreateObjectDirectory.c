/*
 * XREFs of InitCreateObjectDirectory @ 0x1C0293A10
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ApiSetEditionCreateDefaultWindowStation @ 0x1C002C150 (ApiSetEditionCreateDefaultWindowStation.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
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
      (__int64)&WPP_343d128d714e312b04193adc3f9faf5c_Traceguids);
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
