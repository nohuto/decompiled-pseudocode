/*
 * XREFs of GetNlsTablePath @ 0x1C027E714
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C00F4524 (ConvertToAndFromWideChar.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     StringCchCatW @ 0x1C027E8A8 (StringCchCatW.c)
 *     StringCchCopyW @ 0x1C027E910 (StringCchCopyW.c)
 */

__int64 __fastcall GetNlsTablePath(unsigned int a1, wchar_t *a2)
{
  unsigned int v2; // ebx
  wchar_t *v5; // rdi
  size_t v6; // rdx
  ULONG Length; // [rsp+30h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t Dst[20]; // [rsp+80h] [rbp+17h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v5 = (wchar_t *)PALLOCMEM2(0x220uLL, 1936485959LL, 1);
    if ( v5 )
    {
      swprintf_s(Dst, 0x14uLL, L"%d", a1);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v5, Length, &Length) >= 0
        && StringCchCopyW(a2, 0x104uLL, L"\\SystemRoot\\System32\\") >= 0 )
      {
        LOBYTE(v2) = StringCchCatW(a2, v6, v5 + 6) >= 0;
      }
      Win32FreePool(v5);
    }
    ZwClose(KeyHandle);
  }
  return v2;
}
