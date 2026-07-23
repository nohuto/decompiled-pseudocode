/*
 * XREFs of CmpQueryHiveRedirectionFileList @ 0x140619CE8
 * Callers:
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmpInitializeSystemHivesLoad @ 0x140790B44 (CmpInitializeSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 */

bool __fastcall CmpQueryHiveRedirectionFileList(PUNICODE_STRING ValueName, PUNICODE_STRING Destination)
{
  NTSTATUS v5; // eax
  bool v6; // zf
  NTSTATUS v7; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR Source[250]; // [rsp+9Ch] [rbp-64h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( !CmStateSeparationEnabled )
    return 0;
  ResultLength = 512;
  if ( CmpHiveRedirectionFileListHandle )
    goto LABEL_7;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\registry\\machine\\system\\currentcontrolset\\control\\hiveredirectionlist");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v5 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
  v6 = v5 == 0;
  if ( v5 >= 0 )
  {
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveRedirectionFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
LABEL_7:
    v7 = ZwQueryValueKey(
           CmpHiveRedirectionFileListHandle,
           ValueName,
           KeyValuePartialInformation,
           KeyValueInformation,
           ResultLength,
           &ResultLength);
    v6 = v7 == 0;
    if ( v7 >= 0 )
      return RtlAppendUnicodeToString(Destination, Source) == 0;
  }
  return v6;
}
