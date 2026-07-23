/*
 * XREFs of ExVerifySuite @ 0x1403AB100
 * Callers:
 *     MmWriteTriageInformation @ 0x14053329C (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140781030 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A3E62C (ExpUpdateProductSuiteTypeInRegistry.c)
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
