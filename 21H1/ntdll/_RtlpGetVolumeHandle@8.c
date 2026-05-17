/*
 * XREFs of _RtlpGetVolumeHandle@8 @ 0x4B389B86
 * Callers:
 *     _RtlpDiskSpeedInitialize@12 @ 0x4B389B30 (_RtlpDiskSpeedInitialize@12.c)
 *     _RtlpQueryDiskWriteConstraintPolicy@8 @ 0x4B389DE4 (_RtlpQueryDiskWriteConstraintPolicy@8.c)
 * Callees:
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 *     _StringCbPrintfW @ 0x4B334D60 (_StringCbPrintfW.c)
 */

NTSTATUS __fastcall RtlpGetVolumeHandle(unsigned __int16 *a1, HANDLE *a2)
{
  NTSTATUS result; // eax
  int v4; // [esp-8h] [ebp-58h]
  int v5; // [esp-4h] [ebp-54h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-44h] BYREF
  _BYTE v7[8]; // [esp+14h] [ebp-3Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+1Ch] [ebp-34h] BYREF
  HANDLE FileHandle; // [esp+34h] [ebp-1Ch] BYREF
  wchar_t pszDest[10]; // [esp+38h] [ebp-18h] BYREF

  v5 = *a1;
  FileHandle = 0;
  StringCbPrintfW(pszDest, 0x14u, L"\\??\\%C:");
  RtlUnicodeStringInitWorker((int)v7, pszDest, v4, v5);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = NtCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0, 0, 7u, 1u, 0x20u, 0, 0);
  if ( result >= 0 )
  {
    *a2 = FileHandle;
    return 0;
  }
  return result;
}
