/*
 * XREFs of PopThermalWriteShutdownToRegistry @ 0x140569F48
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C1368 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalProcessUsermodeEvent @ 0x1408E3508 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     PopOpenThermalLoggingKey @ 0x1403C853C (PopOpenThermalLoggingKey.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PopThermalWriteShutdownToRegistry(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-10h] BYREF
  int Data; // [rsp+80h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+28h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  ValueName = 0LL;
  v7 = 0LL;
  result = PopOpenThermalLoggingKey(0, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ShutdownOccurred");
    RtlInitUnicodeString(&ValueName, L"ShutdownSource");
    RtlInitUnicodeString(&v7, L"ShutdownTemperature");
    Data = 1;
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    if ( !PopThermalCriticalShutdownReported )
    {
      if ( a1 )
        result = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      if ( a2 )
        result = ZwSetValueKey(KeyHandle, &v7, 0, 4u, a2, 4u);
    }
    PopThermalCriticalShutdownReported = 1;
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
