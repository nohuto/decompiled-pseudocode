/*
 * XREFs of _GetNlsTablePath@8 @ 0x1DA3A5
 * Callers:
 *     _ConvertToAndFromWideChar@24 @ 0xDFDA8 (_ConvertToAndFromWideChar@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _StringCchCatW@12 @ 0x1DA4B1 (_StringCchCatW@12.c)
 *     _StringCchCopyW@12 @ 0x1DA4E7 (_StringCchCopyW@12.c)
 */

int __thiscall GetNlsTablePath(void *this)
{
  int v1; // ebx
  wchar_t *v2; // esi
  size_t v4; // [esp+0h] [ebp-68h]
  size_t v5; // [esp+0h] [ebp-68h]
  const wchar_t *v6; // [esp+4h] [ebp-64h]
  const wchar_t *v7; // [esp+4h] [ebp-64h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-58h] BYREF
  void *v9; // [esp+28h] [ebp-40h]
  struct _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-3Ch] BYREF
  ULONG Length; // [esp+34h] [ebp-34h] BYREF
  void *KeyHandle; // [esp+38h] [ebp-30h] BYREF
  wchar_t Dst[20]; // [esp+3Ch] [ebp-2Ch] BYREF

  v1 = 0;
  v9 = this;
  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v2 = (wchar_t *)PALLOCMEM2(0x220u, 1936485959, 1);
    if ( v2 )
    {
      _swprintf_s(Dst, 0x14u, L"%d", v9);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v2, Length, &Length) >= 0
        && StringCchCopyW((STRSAFE_LPWSTR)L"\\SystemRoot\\System32\\", v4, v6) >= 0 )
      {
        LOBYTE(v1) = StringCchCatW(v2 + 6, v5, v7) >= 0;
      }
      Win32FreePool(v2);
    }
    ZwClose(KeyHandle);
  }
  return v1;
}
