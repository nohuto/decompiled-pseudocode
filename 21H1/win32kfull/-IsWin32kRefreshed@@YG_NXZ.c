/*
 * XREFs of ?IsWin32kRefreshed@@YG_NXZ @ 0xED308
 * Callers:
 *     _InitializeWin32PoolTracking@0 @ 0xEBEE8 (_InitializeWin32PoolTracking@0.c)
 * Callees:
 *     _Win32FileInfo@12 @ 0xDEF22 (_Win32FileInfo@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

char __stdcall IsWin32kRefreshed()
{
  char v0; // bl
  WCHAR *PoolWithTag; // esi
  ULONG v2; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-70h] BYREF
  UNICODE_STRING String1; // [esp+28h] [ebp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+30h] [ebp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+38h] [ebp-48h] BYREF
  ULONGLONG Value; // [esp+40h] [ebp-40h] BYREF
  struct _UNICODE_STRING String; // [esp+48h] [ebp-38h] BYREF
  ULONG Length; // [esp+50h] [ebp-30h] BYREF
  void *KeyHandle; // [esp+54h] [ebp-2Ch] BYREF
  unsigned __int16 Data[18]; // [esp+58h] [ebp-28h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  v0 = 1;
  KeyHandle = 0;
  Length = 0;
  Value = 0LL;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0;
  *(_DWORD *)&String1.Length = 0;
  String1.Buffer = 0;
  if ( Win32FileInfo(L"\\systemroot\\system32\\win32k.sys", &Value, 0) )
  {
    String.Buffer = Data;
    String.Length = 0;
    String.MaximumLength = 34;
    if ( RtlInt64ToUnicodeString(Value, 0x10u, &String) >= 0 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\WINDOWS");
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Win32kLastWriteTime");
        Length = 46;
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPoolSession, 0x2Eu, 0x746C7355u);
        if ( PoolWithTag )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &Length) < 0 )
            goto LABEL_11;
          v2 = Length;
          if ( *((_DWORD *)PoolWithTag + 2) >> 1 < Length )
          {
            v2 = *((_DWORD *)PoolWithTag + 2) >> 1;
            Length = v2;
          }
          if ( v2 > 1
            && PoolWithTag[6]
            && (PoolWithTag[v2 + 5] = 0,
                RtlInitUnicodeString(&String1, PoolWithTag + 6),
                !RtlCompareUnicodeString(&String1, &String, 0)) )
          {
            v0 = 0;
          }
          else
          {
LABEL_11:
            if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, Data, 2 * wcslen(Data) + 2) >= 0 )
              ZwFlushKey(KeyHandle);
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
