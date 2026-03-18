/*
 * XREFs of HvMarkDirty @ 0x14087E378
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 * Callees:
 *     HvpMarkDirty @ 0x140707D60 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
