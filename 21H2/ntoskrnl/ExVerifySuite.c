/*
 * XREFs of ExVerifySuite @ 0x1403AF740
 * Callers:
 *     MmWriteTriageInformation @ 0x140538DBC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140798AF0 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4208C (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
