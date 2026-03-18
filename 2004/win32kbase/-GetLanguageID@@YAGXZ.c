/*
 * XREFs of ?GetLanguageID@@YAGXZ @ 0x1C0023040
 * Callers:
 *     InitializeGreCSRSS @ 0x1C0022BF0 (InitializeGreCSRSS.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

__int64 GetLanguageID(void)
{
  unsigned __int16 v0; // di
  WCHAR *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  ULONG Value; // [rsp+98h] [rbp+28h] BYREF
  void *KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v0 = 1033;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v1 = (WCHAR *)PALLOCMEM2(0x220uLL);
    if ( v1 )
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v1, Length, &Length) >= 0 )
      {
        Value = 0;
        RtlInitUnicodeString(&DestinationString, v1 + 6);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
        v0 = Value;
      }
      Win32FreePool(v1);
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
