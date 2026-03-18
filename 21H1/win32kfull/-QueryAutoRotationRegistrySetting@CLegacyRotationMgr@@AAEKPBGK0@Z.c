/*
 * XREFs of ?QueryAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEKPBGK0@Z @ 0xE775A
 * Callers:
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ @ 0xE7672 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __thiscall CLegacyRotationMgr::QueryAutoRotationRegistrySetting(
        CLegacyRotationMgr *this,
        PCWSTR a2,
        unsigned int a3,
        const unsigned __int16 *SourceString)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-4Ch] BYREF
  struct _UNICODE_STRING ValueName; // [esp+20h] [ebp-34h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-2Ch] BYREF
  ULONG ResultLength; // [esp+30h] [ebp-24h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-20h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+38h] [ebp-1Ch] BYREF
  int v12; // [esp+3Ch] [ebp-18h]
  unsigned int v13; // [esp+44h] [ebp-10h]

  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, a2);
    ResultLength = 20;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v12 == 4 )
    {
      a3 = v13;
    }
    ZwClose(KeyHandle);
  }
  return a3;
}
