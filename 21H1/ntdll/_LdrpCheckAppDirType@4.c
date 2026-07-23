/*
 * XREFs of _LdrpCheckAppDirType@4 @ 0x4B33145D
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10 (_NtQueryVolumeInformationFile@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

void __thiscall LdrpCheckAppDirType(_UNICODE_STRING *this)
{
  HANDLE FileHandle; // [esp+8h] [ebp-148h] BYREF
  int v2; // [esp+Ch] [ebp-144h] BYREF
  int v3[2]; // [esp+10h] [ebp-140h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+18h] [ebp-138h] BYREF
  _BYTE FsInformation[4]; // [esp+20h] [ebp-130h] BYREF
  int v6; // [esp+24h] [ebp-12Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-128h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+40h] [ebp-110h] BYREF
  char v9; // [esp+48h] [ebp-108h] BYREF

  v3[0] = 0x1000000;
  v6 = 0;
  v3[1] = (int)&v9;
  UnicodeString.Buffer = 0;
  FileHandle = 0;
  if ( RtlpDosPathNameToRelativeNtPathName(0, this, (unsigned __int16 *)v3, &UnicodeString, (int)&v2, 0, 0) >= 0 )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v2;
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0
      && NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation) >= 0 )
    {
      LdrpIllegalCWDDevices = (v6 & LdrpIllegalCWDDevices) == 0 ? LdrpIllegalCWDDevices : 0;
    }
  }
  if ( FileHandle )
    NtClose(FileHandle);
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
}
