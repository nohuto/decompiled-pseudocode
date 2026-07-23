/*
 * XREFs of RtlSetActiveTimeBias @ 0x140793BA8
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405DFA64 (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1406C9EC0 (RtlpGetTimeZoneInfoHandle.c)
 *     RtlWriteRegistryValue @ 0x1407038F0 (RtlWriteRegistryValue.c)
 */

int __fastcall RtlSetActiveTimeBias(int a1)
{
  int result; // eax
  int RegistryValues; // ebx
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+C0h] [rbp+67h] BYREF
  int v5; // [rsp+C8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF

  ValueData = a1;
  Handle = 0LL;
  v5 = 0;
  result = RtlpGetTimeZoneInfoHandle(1, &Handle);
  if ( result >= 0 )
  {
    memset(v3, 0, 0x70uLL);
    v3[3] = &v5;
    LODWORD(v3[1]) = 292;
    v3[2] = L"ActiveTimeBias";
    LODWORD(v3[4]) = 0x4000000;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v3, 0LL);
    if ( RegistryValues < 0 || v5 != ValueData )
      RegistryValues = RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"ActiveTimeBias", 4u, &ValueData, 4u);
    ZwClose(Handle);
    return RegistryValues;
  }
  return result;
}
