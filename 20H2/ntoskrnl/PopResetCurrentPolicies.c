/*
 * XREFs of PopResetCurrentPolicies @ 0x140793178
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopThermalZoneAdd @ 0x140791070 (PopThermalZoneAdd.c)
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     PdcPoReportButton @ 0x140792770 (PdcPoReportButton.c)
 *     PopChangeCapability @ 0x140792D24 (PopChangeCapability.c)
 *     PopThermalZoneRemove @ 0x1408EA580 (PopThermalZoneRemove.c)
 *     PopBatteryAdd @ 0x1408EF5F0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408EFE20 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1408F0098 (PopBatteryUpdateCompositeInformation.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x1403A7834 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopApplyPolicy @ 0x14079325C (PopApplyPolicy.c)
 *     PopDefaultPolicy @ 0x1407CE2E0 (PopDefaultPolicy.c)
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
