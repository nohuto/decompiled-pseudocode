/*
 * XREFs of HalpAcpiInitSystem @ 0x140A554B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaSwapP0NodeToFront @ 0x1403BBA90 (HalpNumaSwapP0NodeToFront.c)
 *     HalpAcpiDetectPiix4 @ 0x140AF8A58 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPrmCacheInit @ 0x140AF8ACC (HalpAcpiPrmCacheInit.c)
 *     HalpAcpiPopulateTableCache @ 0x140AF8B84 (HalpAcpiPopulateTableCache.c)
 *     HalpAuditAcpiTables @ 0x140AF8BF8 (HalpAuditAcpiTables.c)
 *     HalpAcpiInitDiscard @ 0x140AF9204 (HalpAcpiInitDiscard.c)
 */

__int64 __fastcall HalpAcpiInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  switch ( a1 )
  {
    case 7:
      HalpAcpiLoaderBlock = a3;
      HalpAcpiInitDiscard(a3);
      return v3;
    case 12:
      HalpNumaSwapP0NodeToFront();
      return v3;
    case 17:
      HalpAuditAcpiTables(a3);
      return v3;
  }
  if ( a1 != 23 )
  {
    if ( a1 != 28 )
      return v3;
    return (unsigned int)HalpAcpiDetectPiix4();
  }
  result = HalpAcpiPrmCacheInit();
  if ( (int)result >= 0 )
    return (unsigned int)HalpAcpiPopulateTableCache();
  return result;
}
