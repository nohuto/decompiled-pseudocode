/*
 * XREFs of _CheckEasPolicyChange@0 @ 0x143551
 * Callers:
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall CheckEasPolicyChange()
{
  int v0; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-30h] BYREF
  ULONG ResultLength; // [esp+28h] [ebp-28h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-24h] BYREF
  int KeyInformation; // [esp+30h] [ebp-20h] BYREF
  int v7; // [esp+34h] [ebp-1Ch]
  int v8; // [esp+38h] [ebp-18h]
  int v9; // [esp+3Ch] [ebp-14h]
  int v10; // [esp+40h] [ebp-10h]
  int v11; // [esp+44h] [ebp-Ch]

  v0 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  KeyHandle = 0;
  ResultLength = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\EAS\\Policies");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  KeyInformation = 0;
  v7 = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwQueryKey(KeyHandle, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(KeyHandle);
  }
  if ( dword_2756F8 != KeyInformation || dword_2756FC != v7 )
  {
    dword_2756F8 = KeyInformation;
    dword_2756FC = v7;
    return 1;
  }
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  KeyInformation = 0;
  v7 = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ZwQueryKey(KeyHandle, KeyBasicInformation, &KeyInformation, 0x18u, &ResultLength);
    ZwClose(KeyHandle);
  }
  if ( dword_2756F0 != KeyInformation || dword_2756F4 != v7 )
  {
    dword_2756F0 = KeyInformation;
    dword_2756F4 = v7;
    return 1;
  }
  return v0;
}
