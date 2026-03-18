/*
 * XREFs of RtlOpenCurrentUser @ 0x140777D90
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A132C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14068F280 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
    RtlFreeAnsiString(&UnicodeString);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&UnicodeString, L"\\Registry\\User\\.Default");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 1600;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  return (unsigned int)v4;
}
