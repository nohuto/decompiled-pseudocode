/*
 * XREFs of _GetEasTimeout@0 @ 0xD89EE
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?CalcScreenSaverTimeout@@YGXPAU_UNICODE_STRING@@K@Z @ 0xD899E (-CalcScreenSaverTimeout@@YGXPAU_UNICODE_STRING@@K@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __stdcall GetEasTimeout()
{
  int v0; // esi
  unsigned int v1; // edi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-40h] BYREF
  ULONG ResultLength; // [esp+28h] [ebp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-24h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-1Ch] BYREF
  _BYTE KeyValueInformation[4]; // [esp+38h] [ebp-18h] BYREF
  int v8; // [esp+3Ch] [ebp-14h]
  int v9; // [esp+40h] [ebp-10h]
  unsigned int v10; // [esp+44h] [ebp-Ch]

  v0 = 0;
  ResultLength = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v1 = -1;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\EAS\\Policies");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"7");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v8 == 4
      && v9 == 4
      && v10 )
    {
      v1 = v10;
      v0 = 1;
    }
    ZwClose(KeyHandle);
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
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"InactivityTimeoutSecs");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v8 == 4
      && v9 == 4
      && v10 )
    {
      if ( v10 < v1 )
        v1 = v10;
      v0 = 1;
    }
    ZwClose(KeyHandle);
  }
  return v0 != 0 ? v1 : 0;
}
