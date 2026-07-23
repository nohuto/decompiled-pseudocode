/*
 * XREFs of _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpGenerateIFEOKeyFilterId@4 @ 0x4B3424DE (_RtlpGenerateIFEOKeyFilterId@4.c)
 */

NTSTATUS __fastcall RtlpCreateIFEOKeyFilterKey(HANDLE *a1, void *a2, ACCESS_MASK DesiredAccess, int a4)
{
  HANDLE v4; // eax
  NTSTATUS v7; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-3Ch] BYREF
  _UNICODE_STRING GuidString; // [esp+24h] [ebp-24h] BYREF
  ULONG Disposition; // [esp+2Ch] [ebp-1Ch] BYREF
  HANDLE KeyHandle; // [esp+30h] [ebp-18h] BYREF
  GUID Guid; // [esp+34h] [ebp-14h] BYREF

  v4 = 0;
  Disposition = 1;
  KeyHandle = 0;
  while ( 1 )
  {
    if ( v4 )
      NtClose(v4);
    v7 = RtlpGenerateIFEOKeyFilterId(&Guid);
    if ( v7 < 0 )
      break;
    v7 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
    if ( v7 < 0 )
      break;
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &GuidString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v7 = ZwCreateKey(&KeyHandle, DesiredAccess, &ObjectAttributes, 0, 0, 0, &Disposition);
    RtlFreeAnsiString(&GuidString);
    if ( v7 < 0 )
      break;
    v4 = KeyHandle;
    if ( Disposition != 2 )
    {
      *a1 = KeyHandle;
      return v7;
    }
  }
  return v7;
}
