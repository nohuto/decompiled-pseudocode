/*
 * XREFs of _RtlpCheckRelativeDrive@4 @ 0x4B32D619
 * Callers:
 *     _RtlGetFullPathName_Ustr@24 @ 0x4B2C8CA0 (_RtlGetFullPathName_Ustr@24.c)
 * Callees:
 *     _RtlSetThreadErrorMode@8 @ 0x4B2AB560 (_RtlSetThreadErrorMode@8.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpResetDriveEnvironment@4 @ 0x4B32D76C (_RtlpResetDriveEnvironment@4.c)
 */

NTSTATUS __thiscall RtlpCheckRelativeDrive(void *this)
{
  NTSTATUS v3; // esi
  int v4; // [esp+10h] [ebp-268h] BYREF
  char *v5; // [esp+14h] [ebp-264h]
  unsigned int v6; // [esp+18h] [ebp-260h] BYREF
  HANDLE FileHandle; // [esp+1Ch] [ebp-25Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-258h] BYREF
  UNICODE_STRING DestinationString; // [esp+38h] [ebp-240h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+40h] [ebp-238h] BYREF
  WCHAR SourceString[2]; // [esp+48h] [ebp-230h] BYREF
  wchar_t v12[2]; // [esp+4Ch] [ebp-22Ch] BYREF
  _DWORD v13[2]; // [esp+50h] [ebp-228h] BYREF
  char v14; // [esp+58h] [ebp-220h] BYREF

  SourceString[0] = 61;
  SourceString[1] = (unsigned __int16)this;
  wcscpy(v12, L":");
  RtlInitUnicodeString(&DestinationString, SourceString);
  v13[0] = *(_DWORD *)L"\\??\\";
  v13[1] = *(_DWORD *)L"?\\";
  v5 = &v14;
  v4 = 34078720;
  if ( RtlQueryEnvironmentVariable_U(0, &DestinationString.Length, (int)&v4) < 0 )
  {
    *(_WORD *)v5 = (_WORD)this;
    *((_WORD *)v5 + 1) = 58;
    *((_WORD *)v5 + 2) = 92;
    *((_WORD *)v5 + 3) = 0;
    LOWORD(v4) = 6;
    return RtlpResetDriveEnvironment(this);
  }
  LOWORD(v4) = v4 + 8;
  HIWORD(v4) = 544;
  v5 = (char *)v13;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v4;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  RtlSetThreadErrorMode(0x10u, &v6);
  v3 = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlSetThreadErrorMode(v6, 0);
  if ( v3 < 0 )
    return RtlpResetDriveEnvironment(this);
  return NtClose(FileHandle);
}
