/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1406E2F30
 * Callers:
 *     RtlpGetBootStatusPath @ 0x140396314 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A3D9AC (BapdpProcessVsmKeyBlobs.c)
 *     PpDevCfgInit @ 0x140A4A920 (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x14031A8A0 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
