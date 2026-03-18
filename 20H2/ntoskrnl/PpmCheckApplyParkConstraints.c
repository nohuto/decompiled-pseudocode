/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403C17F8
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1407B5AA0 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408FBAF4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408FBBF4 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CE48 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
