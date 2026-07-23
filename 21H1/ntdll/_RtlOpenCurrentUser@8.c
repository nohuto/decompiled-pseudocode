/*
 * XREFs of _RtlOpenCurrentUser@8 @ 0x4B2AD730
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFormatCurrentUserKeyPath@4 @ 0x4B2D3860 (_RtlFormatCurrentUserKeyPath@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __cdecl RtlOpenCurrentUser(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v2; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-20h] BYREF
  _UNICODE_STRING CurrentUserKeyPath; // [esp+28h] [ebp-8h] BYREF

  v2 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v2 >= 0 )
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 1600;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v2 = ZwOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
    RtlFreeAnsiString(&CurrentUserKeyPath);
  }
  if ( v2 == -1073741772 )
  {
    RtlInitUnicodeString(&CurrentUserKeyPath, (PCWSTR)L"\\Registry\\User\\.Default");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &CurrentUserKeyPath;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 1600;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    return ZwOpenKey(CurrentUserKey, DesiredAccess, &ObjectAttributes);
  }
  return v2;
}
