/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1407068F0
 * Callers:
 *     RtlpGetBootStatusPath @ 0x140396F24 (RtlpGetBootStatusPath.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A43260 (BapdpProcessVsmKeyBlobs.c)
 *     PpDevCfgInit @ 0x140A5039C (PpDevCfgInit.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x140358350 (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
