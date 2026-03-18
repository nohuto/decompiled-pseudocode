/*
 * XREFs of CmpAddDockingInfo @ 0x140A56D24
 * Callers:
 *     CmpCreateHardwareProfiles @ 0x140A5689C (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x140A8B8CC (CmpAddAliasEntry.c)
 * Callees:
 *     NtSetValueKey @ 0x1405E3650 (NtSetValueKey.c)
 */

__int64 __fastcall CmpAddDockingInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-10h]
  size_t Sizea; // [rsp+28h] [rbp-10h]
  size_t Sizeb; // [rsp+28h] [rbp-10h]
  size_t Sizec; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v9) = *(unsigned __int16 *)(a2 + 4);
  LODWORD(Size) = 4;
  result = NtSetValueKey(a1, (unsigned __int64)&CmpStrDockingStateString, 0, 4u, &v9, Size);
  if ( (int)result >= 0 )
  {
    LODWORD(v9) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(Sizea) = 4;
    result = NtSetValueKey(a1, (unsigned __int64)&CmpStrCapabilitiesString, 0, 4u, &v9, Sizea);
    if ( (int)result >= 0 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 8);
      LODWORD(Sizeb) = 4;
      result = NtSetValueKey(a1, (unsigned __int64)&CmpStrDockIdString, 0, 4u, &v9, Sizeb);
      if ( (int)result >= 0 )
      {
        LODWORD(v9) = *(_DWORD *)(a2 + 12);
        LODWORD(Sizec) = 4;
        return NtSetValueKey(a1, (unsigned __int64)&CmpStrSerialNumberString, 0, 4u, &v9, Sizec);
      }
    }
  }
  return result;
}
