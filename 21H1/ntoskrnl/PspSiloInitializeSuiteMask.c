/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x1409027FC
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140902A0C (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     ExGetSuiteMask @ 0x1407A8890 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x140902678 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140902714 (PspSiloGetSuiteMaskStringFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeSuiteMask(__int64 a1)
{
  int SuiteMaskStringFromRegistry; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  UnicodeString = 0LL;
  SuiteMaskStringFromRegistry = PspSiloGetSuiteMaskStringFromRegistry(&UnicodeString);
  if ( SuiteMaskStringFromRegistry >= 0 )
  {
    SuiteMaskStringFromRegistry = PspSiloGetMultiUserTsFromRegistry(&v5);
    if ( SuiteMaskStringFromRegistry >= 0 )
      *(_DWORD *)(a1 + 20) = ExGetSuiteMask((__int64)UnicodeString.Buffer, v5);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return (unsigned int)SuiteMaskStringFromRegistry;
}
