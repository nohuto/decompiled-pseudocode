/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403BF1E8
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1407A5360 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408F4BF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F4CF4 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037A398 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
