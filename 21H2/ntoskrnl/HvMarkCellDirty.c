/*
 * XREFs of HvMarkCellDirty @ 0x14087D6D0
 * Callers:
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpCheckKey @ 0x1407C6580 (CmpCheckKey.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409242A4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x14071F300 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
