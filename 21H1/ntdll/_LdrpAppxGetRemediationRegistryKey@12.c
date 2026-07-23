/*
 * XREFs of _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD
 * Callers:
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 * Callees:
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _RtlStringCbCatW@12 @ 0x4B2EACE3 (_RtlStringCbCatW@12.c)
 *     _ZwOpenKeyEx@16 @ 0x4B2F3B80 (_ZwOpenKeyEx@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     RtlUnicodeStringInitWorker @ 0x4B32C921 (RtlUnicodeStringInitWorker.c)
 */

int __fastcall LdrpAppxGetRemediationRegistryKey(int a1, int a2, PHANDLE KeyHandle)
{
  int result; // eax
  int v6; // ecx
  int v7; // ecx
  ACCESS_MASK v8; // [esp-Ch] [ebp-258h]
  ULONG BufferLengthOut; // [esp+Ch] [ebp-240h] BYREF
  _BYTE v10[8]; // [esp+10h] [ebp-23Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-234h] BYREF
  WCHAR TargetPath[266]; // [esp+30h] [ebp-21Ch] BYREF

  result = RtlGetPersistedStateLocation(
             L"AppxStateChange",
             L"TargetNtPath",
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AppModel\\StateChange",
             LocationTypeRegistry,
             TargetPath,
             0x20Au,
             &BufferLengthOut);
  if ( result >= 0 )
  {
    if ( a1 != -1073740702 )
    {
      result = RtlUnicodeStringInitWorker(v6, v6);
      if ( result < 0 )
        return result;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
      v8 = 131097;
      goto LABEL_9;
    }
    result = RtlStringCbCatW(TargetPath, 0x20Au, (int)L"\\PackageList\\");
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(TargetPath, 0x20Au, a2);
      if ( result >= 0 )
      {
        result = RtlUnicodeStringInitWorker(v7, v7);
        if ( result >= 0 )
        {
          ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
          v8 = 131353;
LABEL_9:
          ObjectAttributes.Length = 24;
          ObjectAttributes.RootDirectory = 0;
          ObjectAttributes.Attributes = 64;
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          return ZwOpenKeyEx(KeyHandle, v8, &ObjectAttributes, 0);
        }
      }
    }
  }
  return result;
}
