/*
 * XREFs of _RtlpGetNtProductTypeFromRegistry@4 @ 0x4B36374F
 * Callers:
 *     _RtlGetNtProductType@4 @ 0x4B2B05F0 (_RtlGetNtProductType@4.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __thiscall RtlpGetNtProductTypeFromRegistry(_DWORD *this)
{
  NTSTATUS v2; // esi
  ULONG ResultLength; // [esp+10h] [ebp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+14h] [ebp-74h] BYREF
  _UNICODE_STRING v6; // [esp+2Ch] [ebp-5Ch] BYREF
  _UNICODE_STRING v7; // [esp+34h] [ebp-54h] BYREF
  _UNICODE_STRING String2; // [esp+3Ch] [ebp-4Ch] BYREF
  _UNICODE_STRING ValueName; // [esp+44h] [ebp-44h] BYREF
  _DWORD v10[2]; // [esp+4Ch] [ebp-3Ch] BYREF
  _UNICODE_STRING String1; // [esp+54h] [ebp-34h] BYREF
  HANDLE KeyHandle; // [esp+5Ch] [ebp-2Ch] BYREF
  _BYTE KeyValueInformation[4]; // [esp+60h] [ebp-28h] BYREF
  int v14; // [esp+64h] [ebp-24h]
  unsigned int v15; // [esp+68h] [ebp-20h]
  char v16; // [esp+6Ch] [ebp-1Ch] BYREF

  ValueName.Length = 22;
  v7.MaximumLength = 18;
  v6.MaximumLength = 18;
  String2.Length = 10;
  String2.MaximumLength = 12;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v10;
  v7.Length = 16;
  v6.Length = 16;
  v10[0] = 8650882;
  v10[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions";
  ValueName.MaximumLength = 24;
  ValueName.Buffer = L"ProductType";
  v7.Buffer = L"LanmanNt";
  v6.Buffer = L"ServerNt";
  String2.Buffer = L"WinNt";
  KeyHandle = 0;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v2 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    v2 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x24u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( v14 != 1 || v15 < 2 )
        goto LABEL_11;
      String1.MaximumLength = v15;
      String1.Buffer = (wchar_t *)&v16;
      String1.Length = v15 - 2;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *this = 1;
        goto LABEL_12;
      }
      if ( RtlEqualUnicodeString(&String1, &v7, 1u) )
      {
        *this = 2;
        goto LABEL_12;
      }
      if ( RtlEqualUnicodeString(&String1, &v6, 1u) )
        *this = 3;
      else
LABEL_11:
        v2 = -1073739509;
    }
  }
LABEL_12:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v2;
}
