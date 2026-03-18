/*
 * XREFs of ?bDwmDeviceBitmapsEnabledForMultiAdapter@@YGHXZ @ 0xE2254
 * Callers:
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall bDwmDeviceBitmapsEnabledForMultiAdapter()
{
  BOOL v0; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-430h] BYREF
  ULONG ResultLength; // [esp+20h] [ebp-418h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-414h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-40Ch] BYREF
  _BYTE KeyValueInformation[4]; // [esp+30h] [ebp-408h] BYREF
  int v7; // [esp+34h] [ebp-404h]
  int v8; // [esp+3Ch] [ebp-3FCh]

  *(_DWORD *)&DestinationString.Length = 0;
  v0 = 1;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\DWM");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"DisableDeviceBitmapsForMultiAdapter");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v7 == 4 )
    {
      v0 = v8 == 0;
    }
    ZwClose(KeyHandle);
  }
  return v0;
}
