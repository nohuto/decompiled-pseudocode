/*
 * XREFs of MiSplitDriverPage @ 0x14096836C
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14031C290 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, unsigned __int64 a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
