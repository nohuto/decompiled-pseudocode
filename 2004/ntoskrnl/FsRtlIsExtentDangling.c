/*
 * XREFs of FsRtlIsExtentDangling @ 0x140889170
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x1408CCAF8 (MiIsExtentDangling.c)
 */

__int64 __fastcall FsRtlIsExtentDangling(__int64 a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0LL);
}
