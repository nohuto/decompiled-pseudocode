/*
 * XREFs of ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C009C594
 * Callers:
 *     ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C009C4E0 (-Initialize@CInputSystemMetrics@@SAJXZ.c)
 *     ForceUpdatePointerDeviceSystemMetrics @ 0x1C009C550 (ForceUpdatePointerDeviceSystemMetrics.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C01B838C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

NTSTATUS __fastcall CInputSystemMetrics::WriteSystemMetricsKey(void *a1, __int64 a2, int a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v5; // r8
  const WCHAR *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS v11; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+67h] BYREF
  int Data; // [rsp+B0h] [rbp+6Fh] BYREF

  Data = a2;
  KeyHandle = a1;
  result = 0xFFFF;
  if ( gProtocolType != -1 )
  {
    if ( a3 )
    {
      v5 = (unsigned int)(a3 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 2 )
          return MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, v5, a4);
        v6 = L"\\Registry\\Machine\\Software\\WowAA32Node\\Microsoft\\Windows\\Tablet PC";
      }
      else
      {
        v6 = L"\\Registry\\Machine\\Software\\Wow6432Node\\Microsoft\\Windows\\Tablet PC";
      }
    }
    else
    {
      v6 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC";
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v6);
    *(&ObjectAttributes.Length + 1) = 0;
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.RootDirectory = 0LL;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    if ( ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL) < 0 )
      return MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"IsTabletPC");
    v11 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    result = ZwClose(KeyHandle);
    if ( v11 < 0 )
      return MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
  }
  return result;
}
