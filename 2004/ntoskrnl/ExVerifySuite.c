/*
 * XREFs of ExVerifySuite @ 0x1403B0D80
 * Callers:
 *     MmWriteTriageInformation @ 0x1405338EC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1407866BC (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A43E90 (ExpUpdateProductSuiteTypeInRegistry.c)
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
