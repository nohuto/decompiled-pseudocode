/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1403C0178
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1407A7AB0 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1408F5EE4 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1408F5FE4 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037B118 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
