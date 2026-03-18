/*
 * XREFs of PiDevCfgOpenDeviceMigrationKey @ 0x1408A4010
 * Callers:
 *     PiDevCfgMigrateRootDevice @ 0x1408A3F1C (PiDevCfgMigrateRootDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405E13D4 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgOpenDeviceMigrationKey(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  int CachedContextBaseKey; // ebx
  HANDLE v6; // rax
  void *v8; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v8 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v8);
  if ( CachedContextBaseKey >= 0 )
  {
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    DestinationString.Buffer = L"Control\\DeviceMigration\\Devices";
    ObjectAttributes.RootDirectory = v8;
    *(_DWORD *)&DestinationString.Length = 4194366;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( CachedContextBaseKey >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v6 = KeyHandle;
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      *a3 = 0LL;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      CachedContextBaseKey = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)CachedContextBaseKey;
}
