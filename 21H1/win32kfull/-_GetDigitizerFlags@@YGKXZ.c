/*
 * XREFs of ?_GetDigitizerFlags@@YGKXZ @ 0xD5568
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __stdcall _GetDigitizerFlags()
{
  int v0; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-48h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+20h] [ebp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-28h] BYREF
  ULONG ResultLength; // [esp+30h] [ebp-20h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-1Ch] BYREF
  int KeyValueInformation; // [esp+38h] [ebp-18h] BYREF
  int v8; // [esp+3Ch] [ebp-14h]
  int v9; // [esp+40h] [ebp-10h]
  int v10; // [esp+44h] [ebp-Ch]
  int v11; // [esp+48h] [ebp-8h]

  v0 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  KeyHandle = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC\\");
  RtlInitUnicodeString(&ValueName, L"IsTabletPC");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    ResultLength = 0;
    KeyValueInformation = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && v8 == 4
      && v9 == 4 )
    {
      v0 = v10;
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
