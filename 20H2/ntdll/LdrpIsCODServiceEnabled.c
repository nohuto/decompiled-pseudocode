/*
 * XREFs of LdrpIsCODServiceEnabled @ 0x1800CEF7C
 * Callers:
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800CED10 (LdrpCheckComponentOnDemandEtwEvent.c)
 * Callees:
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKeyEx @ 0x18009F4A0 (NtOpenKeyEx.c)
 */

bool LdrpIsCODServiceEnabled()
{
  bool v0; // bl
  int v2; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-38h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+10h] BYREF

  v2 = 13500620;
  v3 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\Compatibility Assistant\\";
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v2;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKeyEx(&KeyHandle, 0x20119u, &ObjectAttributes, 0) >= 0;
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0;
}
