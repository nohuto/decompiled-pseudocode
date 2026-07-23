/*
 * XREFs of ExVerifySuite @ 0x1403B36F0
 * Callers:
 *     MmWriteTriageInformation @ 0x1405372BC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1407943CC (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A4A130 (ExpUpdateProductSuiteTypeInRegistry.c)
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
