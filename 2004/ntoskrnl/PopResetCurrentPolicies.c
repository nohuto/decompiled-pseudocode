/*
 * XREFs of PopResetCurrentPolicies @ 0x140785428
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopThermalZoneAdd @ 0x140783680 (PopThermalZoneAdd.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140784A20 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x140784FD4 (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x1408E99E0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408EA210 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408EA488 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403A5434 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopApplyPolicy @ 0x14078550C (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1407BFA50 (PopDefaultPolicy.c)
 */

__int64 PopResetCurrentPolicies()
{
  __int64 result; // rax
  NTSTATUS v1; // ebx
  __int64 v2; // r9
  __int64 Length; // [rsp+20h] [rbp-E0h]
  PULONG ResultLength; // [rsp+28h] [rbp-D8h]
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD KeyValueInformation[32]; // [rsp+50h] [rbp-B0h] BYREF

  KeyHandle = 0LL;
  LODWORD(v5) = 0;
  DestinationString = 0LL;
  memset(KeyValueInformation, 0, 0xF8uLL);
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemPowerPolicy");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0xF8u,
           (PULONG)&v5);
    if ( v1 < 0 )
    {
      PopDefaultPolicy((char *)&KeyValueInformation[1] + 4);
      v2 = 232LL;
    }
    else
    {
      v2 = (unsigned int)(v5 - 12);
    }
    LODWORD(v5) = v2;
    ((void (__fastcall *)(_QWORD, _QWORD, char *, __int64, __int64, PULONG, __int64, HANDLE, _QWORD, wchar_t *, _QWORD, _QWORD))PopApplyPolicy)(
      0LL,
      0LL,
      (char *)&KeyValueInformation[1] + 4,
      v2,
      Length,
      ResultLength,
      v5,
      KeyHandle,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      KeyValueInformation[0],
      KeyValueInformation[1]);
    ZwClose(KeyHandle);
    return (unsigned int)v1;
  }
  return result;
}
