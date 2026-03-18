/*
 * XREFs of ExVerifySuite @ 0x1403CCF10
 * Callers:
 *     MmWriteTriageInformation @ 0x14059388C (MmWriteTriageInformation.c)
 *     PsLocateSystemDlls @ 0x1408455C8 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B1D10C (ExpUpdateProductSuiteTypeInRegistry.c)
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
