/*
 * XREFs of CmpAddDockingInfo @ 0x140A573A4
 * Callers:
 *     CmpCreateHardwareProfiles @ 0x140A56F1C (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x140A915DC (CmpAddAliasEntry.c)
 * Callees:
 *     NtSetValueKey @ 0x14066DEB0 (NtSetValueKey.c)
 */

int __fastcall CmpAddDockingInfo(HANDLE KeyHandle, __int64 a2)
{
  int result; // eax
  int Data; // [rsp+48h] [rbp+10h] BYREF

  Data = *(unsigned __int16 *)(a2 + 4);
  result = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpStrDockingStateString, 0, 4u, &Data, 4u);
  if ( result >= 0 )
  {
    Data = *(unsigned __int16 *)(a2 + 6);
    result = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpStrCapabilitiesString, 0, 4u, &Data, 4u);
    if ( result >= 0 )
    {
      Data = *(_DWORD *)(a2 + 8);
      result = NtSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpStrDockIdString, 0, 4u, &Data, 4u);
      if ( result >= 0 )
      {
        Data = *(_DWORD *)(a2 + 12);
        return NtSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpStrSerialNumberString, 0, 4u, &Data, 4u);
      }
    }
  }
  return result;
}
