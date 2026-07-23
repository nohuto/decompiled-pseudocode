/*
 * XREFs of NtTraceControl @ 0x1800A0900
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x1800016FC (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x1800019A0 (EtwReplyNotification.c)
 *     EtwpSetProviderTraits @ 0x180042B88 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042F0C (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x1800451B0 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x18004EC20 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180050580 (EtwSendNotification.c)
 *     EtwEventActivityIdControl @ 0x18005B6E0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007DA60 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x1800814B8 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x180081518 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x180089E00 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008BFA0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180110AD0 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110FA0 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x180111274 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTraceControl(
        ETWTRACECONTROLCODE FunctionCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 451;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
