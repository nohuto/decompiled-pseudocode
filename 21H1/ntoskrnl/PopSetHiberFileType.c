/*
 * XREFs of PopSetHiberFileType @ 0x1408E2D1C
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopSetHiberFileSize @ 0x1408E2C0C (PopSetHiberFileSize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x1403A4870 (PopOpenKey.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     PopValidateHiberFileSize @ 0x14075F7EC (PopValidateHiberFileSize.c)
 *     PopCalculateHiberFileSize @ 0x140779018 (PopCalculateHiberFileSize.c)
 */

__int64 __fastcall PopSetHiberFileType(int a1, __int64 *a2)
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
  if ( ((unsigned int)PopHiberFileSizePercent < 0x28 || a1 == 2) && (unsigned int)(a1 - 1) <= 1 )
  {
    v3 = PopHiberFileType;
    PopHiberFileType = a1;
    PopCalculateHiberFileSize(&v9, 0LL);
    v4 = v9;
    v5 = PopValidateHiberFileSize(v9, 0LL, 0LL);
    if ( v5 < 0
      || (v5 = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u), v5 < 0)
      || (RtlInitUnicodeString(&DestinationString, L"HiberFileType"),
          v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberFileType, 4u),
          ZwClose(KeyHandle),
          v5 < 0) )
    {
      PopHiberFileType = v3;
    }
    else
    {
      PopHiberFileTypeReg = PopHiberFileType;
      if ( a2 )
        *a2 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
