/*
 * XREFs of ?bDwmDesktopOverlaysEnabled@@YGHXZ @ 0xE207E
 * Callers:
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall bDwmDesktopOverlaysEnabled()
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-430h] BYREF
  ULONG ResultLength; // [esp+20h] [ebp-418h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-414h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-40Ch] BYREF
  _BYTE KeyValueInformation[1028]; // [esp+30h] [ebp-408h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
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
    RtlInitUnicodeString(&DestinationString, L"EnableDesktopOverlays");
    ZwQueryValueKey(
      KeyHandle,
      &DestinationString,
      KeyValuePartialInformation,
      KeyValueInformation,
      0x400u,
      &ResultLength);
    ZwClose(KeyHandle);
  }
  return 1;
}
