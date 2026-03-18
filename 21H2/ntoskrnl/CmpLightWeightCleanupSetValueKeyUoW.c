/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x14065DDC4
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x14065CFD4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14065D320 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14065DC44 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140346D64 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
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
