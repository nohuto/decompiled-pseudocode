/*
 * XREFs of HalpAcpiInitSystem @ 0x1409A2BD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpNumaSwapP0NodeToFront @ 0x1403BB2D4 (HalpNumaSwapP0NodeToFront.c)
 *     HalpAcpiInitDiscard @ 0x140A62548 (HalpAcpiInitDiscard.c)
 *     HalpAuditAcpiTables @ 0x140A63D30 (HalpAuditAcpiTables.c)
 *     HalpAcpiPopulateTableCache @ 0x140A6435C (HalpAcpiPopulateTableCache.c)
 */

__int64 __fastcall HalpAcpiInitSystem(int a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  switch ( a1 )
  {
    case 7:
      HalpAcpiInitDiscard(a3);
      break;
    case 12:
      HalpNumaSwapP0NodeToFront();
      break;
    case 17:
      HalpAuditAcpiTables(a3);
      break;
    case 23:
      return (unsigned int)HalpAcpiPopulateTableCache();
  }
  return v3;
}
