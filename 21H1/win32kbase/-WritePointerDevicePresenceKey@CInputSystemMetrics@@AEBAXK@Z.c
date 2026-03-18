/*
 * XREFs of ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C0023900
 * Callers:
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C0023704 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1C0023770 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01C045C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputSystemMetrics::WritePointerDevicePresenceKey(CInputSystemMetrics *this, int a2)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+67h] BYREF
  int Data; // [rsp+B0h] [rbp+6Fh] BYREF

  Data = a2;
  KeyHandle = this;
  if ( gProtocolType != -1 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC");
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    if ( ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 1u, 0LL) < 0
      || (ValueName = 0LL,
          RtlInitUnicodeString(&ValueName, L"DeviceKind"),
          v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u),
          ZwClose(KeyHandle),
          v3 < 0) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    }
  }
}
