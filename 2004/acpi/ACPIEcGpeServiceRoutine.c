/*
 * XREFs of ACPIEcGpeServiceRoutine @ 0x1C0053310
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x1C00535C4 (AcpiEcCommonDpcHandler.c)
 */

char __fastcall ACPIEcGpeServiceRoutine(__int64 a1, __int64 a2)
{
  AcpiEcCommonDpcHandler(a2);
  return 1;
}
