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
  _UNICODE_STRING Value; // [esp+10h] [ebp-268h] BYREF
  ULONG OldMode; // [esp+18h] [ebp-260h] BYREF
  HANDLE FileHandle; // [esp+1Ch] [ebp-25Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+20h] [ebp-258h] BYREF
  _UNICODE_STRING DestinationString; // [esp+38h] [ebp-240h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+40h] [ebp-238h] BYREF
  WCHAR SourceString[2]; // [esp+48h] [ebp-230h] BYREF
  wchar_t v11[2]; // [esp+4Ch] [ebp-22Ch] BYREF
  _DWORD v12[2]; // [esp+50h] [ebp-228h] BYREF
  char v13; // [esp+58h] [ebp-220h] BYREF

  SourceString[0] = 61;
  SourceString[1] = (__int16)this;
  wcscpy(v11, L":");
  RtlInitUnicodeString(&DestinationString, SourceString);
  v12[0] = *(_DWORD *)L"\\??\\";
  v12[1] = *(_DWORD *)L"?\\";
  Value.Buffer = (wchar_t *)&v13;
  *(_DWORD *)&Value.Length = 34078720;
  if ( RtlQueryEnvironmentVariable_U(0, &DestinationString, &Value) < 0 )
  {
    *Value.Buffer = (unsigned __int16)this;
    Value.Buffer[1] = 58;
    Value.Buffer[2] = 92;
    Value.Buffer[3] = 0;
    Value.Length = 6;
    return RtlpResetDriveEnvironment(this);
  }
  Value.Length += 8;
  Value.MaximumLength = 544;
  Value.Buffer = (wchar_t *)v12;
  ObjectAttributes.ObjectName = &Value;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  RtlSetThreadErrorMode(0x10u, &OldMode);
  v3 = NtOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u);
  RtlSetThreadErrorMode(OldMode, 0);
  if ( v3 < 0 )
    return RtlpResetDriveEnvironment(this);
  return NtClose(FileHandle);
}
