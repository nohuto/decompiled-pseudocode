/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x140211210
 * Callers:
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     PiDqIrpQueryCreate @ 0x1406461E8 (PiDqIrpQueryCreate.c)
 *     SeAuditHandleCreation @ 0x1406D3078 (SeAuditHandleCreation.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     HalpSetSystemInformation @ 0x14072F190 (HalpSetSystemInformation.c)
 *     EtwpRegisterSecurityProvider @ 0x1407D0DE0 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408E9DC0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x140936434 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14093671C (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x140941BD8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
