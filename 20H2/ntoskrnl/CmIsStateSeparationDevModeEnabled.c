/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x14086A3CC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return CmStateSeparationDevMode != 0;
}
