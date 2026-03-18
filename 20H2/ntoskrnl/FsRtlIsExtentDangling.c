/*
 * XREFs of FsRtlIsExtentDangling @ 0x14088ECC0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsExtentDangling @ 0x1408D2938 (MiIsExtentDangling.c)
 */

__int64 __fastcall FsRtlIsExtentDangling(__int64 a1, __int64 a2)
{
  return MiIsExtentDangling(a1, a2, 0LL);
}
