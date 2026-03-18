/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x1406A4720
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1406A42E0 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x1406A45F8 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14072E6CC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
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
