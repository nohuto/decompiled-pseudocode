/*
 * XREFs of MiSplitDriverPage @ 0x1408C4F04
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, unsigned __int64 a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
