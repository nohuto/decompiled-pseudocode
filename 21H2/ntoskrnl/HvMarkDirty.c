/*
 * XREFs of HvMarkDirty @ 0x14087BE60
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 * Callees:
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
