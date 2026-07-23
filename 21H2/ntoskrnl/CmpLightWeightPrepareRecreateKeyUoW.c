/*
 * XREFs of CmpLightWeightPrepareRecreateKeyUoW @ 0x1405CD868
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1405E1934 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14071F800 (HvpMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareRecreateKeyUoW(__int64 a1)
{
  return (unsigned __int8)HvpMarkCellDirty(
                            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                            *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL));
}
