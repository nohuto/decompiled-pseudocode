/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x140658158
 * Callers:
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140658030 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14071E93C (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x1406989DC (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      HvFreeCell(a1, v4);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
