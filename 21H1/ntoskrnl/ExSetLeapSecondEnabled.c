/*
 * XREFs of ExSetLeapSecondEnabled @ 0x140946F94
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F2F30 (ZwSetValueKey.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140791690 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 */

__int64 __fastcall ExSetLeapSecondEnabled(char a1)
{
  NTSTATUS LeapSecondDataRegistryKeyHandle; // edi
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  Data = 0;
  KeyHandle = 0LL;
  LeapSecondDataRegistryKeyHandle = ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle);
  if ( LeapSecondDataRegistryKeyHandle >= 0 )
  {
    Data = a1 != 0;
    LeapSecondDataRegistryKeyHandle = ZwSetValueKey(
                                        KeyHandle,
                                        (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
                                        0,
                                        4u,
                                        &Data,
                                        4u);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)LeapSecondDataRegistryKeyHandle;
}
