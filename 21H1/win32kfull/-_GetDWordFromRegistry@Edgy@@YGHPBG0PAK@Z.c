/*
 * XREFs of ?_GetDWordFromRegistry@Edgy@@YGHPBG0PAK@Z @ 0x16E702
 * Callers:
 *     ?_GetForceLegacyModeFromRegistry@Edgy@@YGHXZ @ 0x16E899 (-_GetForceLegacyModeFromRegistry@Edgy@@YGHXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall Edgy::_GetDWordFromRegistry(
        Edgy *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  int v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-4Ch] BYREF
  struct _UNICODE_STRING ValueName; // [esp+20h] [ebp-34h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-2Ch] BYREF
  ULONG ResultLength; // [esp+30h] [ebp-24h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-20h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+38h] [ebp-1Ch] BYREF
  int v12; // [esp+3Ch] [ebp-18h]
  int v13; // [esp+40h] [ebp-14h]
  int v14; // [esp+44h] [ebp-10h]

  v4 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Edgy");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  KeyHandle = 0;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 0;
    ValueName.Buffer = 0;
    RtlInitUnicodeString(&ValueName, L"forcelegacy");
    ResultLength = 20;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v12 == 4
      && v13 == 4 )
    {
      v4 = 1;
      *(_DWORD *)this = v14;
    }
    ZwClose(KeyHandle);
  }
  return v4;
}
