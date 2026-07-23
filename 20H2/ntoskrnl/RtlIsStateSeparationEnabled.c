/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406D9470
 * Callers:
 *     RtlpGetBootStatusPath @ 0x1403993A4 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A3B7B8 (CmFcManagerStartRuntimePhase.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A49500 (BapdpProcessVsmKeyBlobs.c)
 *     PpDevCfgInit @ 0x140A50A1C (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140328A68 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
