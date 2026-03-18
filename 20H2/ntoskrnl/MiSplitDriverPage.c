/*
 * XREFs of MiSplitDriverPage @ 0x1408C75E4
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 */

__int64 __fastcall MiSplitDriverPage(__int64 a1, unsigned __int64 a2)
{
  return MiMakeDriverPagesPrivate(a1, a2, a2, 0);
}
