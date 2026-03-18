/*
 * XREFs of PpmCheckApplyResetNotification @ 0x1405751F0
 * Callers:
 *     PpmPostProcessMediaBuffering @ 0x1408F8648 (PpmPostProcessMediaBuffering.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x14037CE48 (PpmCheckCustomRun.c)
 */

__int64 PpmCheckApplyResetNotification()
{
  return PpmCheckCustomRun(5);
}
