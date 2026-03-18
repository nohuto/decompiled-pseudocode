/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x14025ECF0
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     PiUEventHandleRegistration @ 0x1406801D8 (PiUEventHandleRegistration.c)
 *     PiDqIrpQueryCreate @ 0x1406A0E7C (PiDqIrpQueryCreate.c)
 *     SeAuditHandleCreation @ 0x1406DD13C (SeAuditHandleCreation.c)
 *     HalpSetSystemInformation @ 0x14071F2E0 (HalpSetSystemInformation.c)
 *     EtwpRegisterSecurityProvider @ 0x1407BF0E0 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408E2F30 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x14092F354 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14092F63C (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x14093AB08 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
