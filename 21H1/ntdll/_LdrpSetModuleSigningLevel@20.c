/*
 * XREFs of _LdrpSetModuleSigningLevel@20 @ 0x4B333D52
 * Callers:
 *     _LdrpMapDllNtFileName@8 @ 0x4B2DE4D7 (_LdrpMapDllNtFileName@8.c)
 *     _LdrpValidateIntegrityContinuity@12 @ 0x4B333DBC (_LdrpValidateIntegrityContinuity@12.c)
 * Callees:
 *     _NtCompareSigningLevels@8 @ 0x4B2F3340 (_NtCompareSigningLevels@8.c)
 *     _ZwGetCachedSigningLevel@24 @ 0x4B2F3880 (_ZwGetCachedSigningLevel@24.c)
 *     _NtSetCachedSigningLevel@20 @ 0x4B2F4210 (_NtSetCachedSigningLevel@20.c)
 */

NTSTATUS __fastcall LdrpSetModuleSigningLevel(
        HANDLE File,
        int a2,
        PULONG Flags,
        SE_SIGNING_LEVEL SecondSigningLevel,
        _BYTE *a5)
{
  SE_SIGNING_LEVEL *v5; // edi
  NTSTATUS CachedSigningLevel; // esi
  HANDLE SourceFiles; // [esp+Ch] [ebp-4h] BYREF

  SourceFiles = File;
  v5 = (SE_SIGNING_LEVEL *)(a2 + 164);
  *a5 = 0;
  CachedSigningLevel = ZwGetCachedSigningLevel(File, Flags, (PSE_SIGNING_LEVEL)(a2 + 164), 0, 0, 0);
  if ( CachedSigningLevel < 0 || NtCompareSigningLevels(*v5, SecondSigningLevel) < 0 )
  {
    CachedSigningLevel = NtSetCachedSigningLevel(0x804u, SecondSigningLevel, &SourceFiles, 1u, SourceFiles);
    if ( CachedSigningLevel < 0 )
      *a5 = 1;
    else
      *v5 = SecondSigningLevel;
  }
  return CachedSigningLevel;
}
