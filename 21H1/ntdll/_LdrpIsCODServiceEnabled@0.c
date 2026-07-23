/*
 * XREFs of _LdrpIsCODServiceEnabled@0 @ 0x4B32FCAA
 * Callers:
 *     _LdrpCheckComponentOnDemandEtwEvent@4 @ 0x4B32FAB2 (_LdrpCheckComponentOnDemandEtwEvent@4.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKeyEx@16 @ 0x4B2F3B80 (_ZwOpenKeyEx@16.c)
 */

bool __stdcall LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-24h] BYREF
  _DWORD v3[2]; // [esp+1Ch] [ebp-Ch] BYREF
  HANDLE KeyHandle; // [esp+24h] [ebp-4h] BYREF

  v3[0] = 13500620;
  KeyHandle = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  v3[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v0 = ZwOpenKeyEx(&KeyHandle, 0x20119u, &ObjectAttributes, 0) >= 0;
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0;
}
