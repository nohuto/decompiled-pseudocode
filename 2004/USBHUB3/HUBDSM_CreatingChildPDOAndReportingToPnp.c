/*
 * XREFs of HUBDSM_CreatingChildPDOAndReportingToPnp @ 0x1C0020C50
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CreatePdo @ 0x1C007A930 (HUBPDO_CreatePdo.c)
 */

__int64 __fastcall HUBDSM_CreatingChildPDOAndReportingToPnp(__int64 a1)
{
  return HUBPDO_CreatePdo(*(_QWORD *)(a1 + 960));
}
