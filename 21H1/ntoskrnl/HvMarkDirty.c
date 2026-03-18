/*
 * XREFs of HvMarkDirty @ 0x140877518
 * Callers:
 *     CmpFlushHive @ 0x140664FA8 (CmpFlushHive.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 * Callees:
 *     HvpMarkDirty @ 0x140699C70 (HvpMarkDirty.c)
 */

char __fastcall HvMarkDirty(ULONG_PTR a1, int a2, unsigned int a3)
{
  return HvpMarkDirty(a1, a2, a3, 0);
}
