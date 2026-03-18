/*
 * XREFs of HalpPeiInterruptHandler @ 0x14051BE30
 * Callers:
 *     <none>
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14021294C (HalpCheckAndReportGhes.c)
 */

char __fastcall HalpPeiInterruptHandler(__int64 a1, __int64 a2)
{
  if ( HalpGenericPeiInitDone && a2 )
    HalpCheckAndReportGhes(a2);
  return 1;
}
