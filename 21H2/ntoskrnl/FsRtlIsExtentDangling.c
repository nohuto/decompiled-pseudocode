/*
 * XREFs of FsRtlIsExtentDangling @ 0x14088C3C0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x1408D0258 (MiIsExtentDangling.c)
 */

__int64 __fastcall FsRtlIsExtentDangling(__int64 a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0LL);
}
