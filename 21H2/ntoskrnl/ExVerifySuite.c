/*
 * XREFs of ExVerifySuite @ 0x1403AF8B0
 * Callers:
 *     MmWriteTriageInformation @ 0x140538FFC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140798CF0 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4308C (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > (PhoneNT|BackOffice) )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
