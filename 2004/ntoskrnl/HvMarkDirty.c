/*
 * XREFs of HvMarkDirty @ 0x140878808
 * Callers:
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 * Callees:
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, unsigned int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
