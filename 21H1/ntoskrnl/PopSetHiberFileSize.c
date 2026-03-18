/*
 * XREFs of PopSetHiberFileSize @ 0x1408E2C0C
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x1403A4870 (PopOpenKey.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x14075F7EC (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x140779018 (PopCalculateHiberFileSize.c)
 *     PopSetHiberFileType @ 0x1408E2D1C (PopSetHiberFileType.c)
 */

__int64 __fastcall PopSetHiberFileSize(unsigned int a1, __int64 *a2)
{
  int v3; // edi
  __int64 v4; // rbp
  int v5; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = 0LL;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  if ( a1 > 0x64 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v3 = PopHiberFileSizePercent;
    PopHiberFileSizePercent = a1;
    PopCalculateHiberFileSize(&v9, 0LL);
    v4 = v9;
    v5 = PopValidateHiberFileSize(v9, 0LL, 0LL);
    if ( v5 < 0
      || (unsigned int)PopHiberFileSizePercent >= 0x28 && (v5 = PopSetHiberFileType(2LL, 0LL), v5 < 0)
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileSizePercent"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileSizePercent, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileSizePercent = v3;
    }
    else if ( a2 )
    {
      *a2 = v4;
    }
  }
  return (unsigned int)v5;
}
