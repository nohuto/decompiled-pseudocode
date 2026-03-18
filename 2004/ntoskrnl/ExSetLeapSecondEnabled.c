/*
 * XREFs of ExSetLeapSecondEnabled @ 0x140948288
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403F41C0 (ZwSetValueKey.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x1407941E0 (ExpGetLeapSecondDataRegistryKeyHandle.c)
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
