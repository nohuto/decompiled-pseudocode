/*
 * XREFs of _RtlpQueryDiskSpacePolicy@8 @ 0x4B389C18
 * Callers:
 *     _RtlQueryResourcePolicy@16 @ 0x4B2AFE50 (_RtlQueryResourcePolicy@16.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 *     _StringCbPrintfW @ 0x4B334D60 (_StringCbPrintfW.c)
 *     _RtlpQueryDiskSpacePolicyByHandle@8 @ 0x4B389D13 (_RtlpQueryDiskSpacePolicyByHandle@8.c)
 */

NTSTATUS __fastcall RtlpQueryDiskSpacePolicy(STRSAFE_LPCWSTR pszFormat, _DWORD *a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // esi
  size_t v4; // [esp-Ch] [ebp-254h]
  int v5; // [esp-8h] [ebp-250h]
  int v6; // [esp-4h] [ebp-24Ch]
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-23Ch] BYREF
  _BYTE v8[8]; // [esp+14h] [ebp-234h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+1Ch] [ebp-22Ch] BYREF
  HANDLE FileHandle; // [esp+34h] [ebp-214h] BYREF
  wchar_t pszDest[262]; // [esp+38h] [ebp-210h] BYREF

  FileHandle = 0;
  if ( BYTE2(RtlpUserPolicies) )
  {
    DiskSpacePolicyByHandle = 0;
    *a2 = BYTE2(RtlpUserPolicies);
  }
  else
  {
    HIDWORD(v4) = L"\\??\\%s";
    LODWORD(v4) = 520;
    StringCbPrintfW(pszDest, v4, pszFormat);
    RtlUnicodeStringInitWorker((int)v8, pszDest, v5, v6);
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    DiskSpacePolicyByHandle = NtCreateFile(
                                &FileHandle,
                                0x100080u,
                                &ObjectAttributes,
                                &IoStatusBlock,
                                0,
                                0,
                                7u,
                                1u,
                                0x20u,
                                0,
                                0);
    if ( DiskSpacePolicyByHandle >= 0 )
    {
      DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle);
      if ( DiskSpacePolicyByHandle >= 0 )
        DiskSpacePolicyByHandle = 0;
    }
    if ( FileHandle )
      NtClose(FileHandle);
  }
  return DiskSpacePolicyByHandle;
}
