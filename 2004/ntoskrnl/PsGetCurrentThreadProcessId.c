/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x140205DD0
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405D243C (PiDqIrpQueryCreate.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     PiUEventHandleRegistration @ 0x1406F35B0 (PiUEventHandleRegistration.c)
 *     SeAuditHandleCreation @ 0x1406FFD94 (SeAuditHandleCreation.c)
 *     HalpSetSystemInformation @ 0x1407211A0 (HalpSetSystemInformation.c)
 *     EtwpRegisterSecurityProvider @ 0x1407C25E0 (EtwpRegisterSecurityProvider.c)
 *     PoShutdownBugCheck @ 0x1408E41B0 (PoShutdownBugCheck.c)
 *     EtwpDisallowedGuidAddition @ 0x140930604 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1409308EC (EtwpDisallowedGuidRemoval.c)
 *     EtwpRegisterPrivateSession @ 0x14093BDA8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
