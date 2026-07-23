/*
 * XREFs of NtTraceControl @ 0x1800A0660
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x1800016FC (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x1800019A0 (EtwReplyNotification.c)
 *     EtwpSetProviderTraits @ 0x180042B38 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042EBC (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x180045160 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x18004EBD0 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180050530 (EtwSendNotification.c)
 *     EtwEventActivityIdControl @ 0x18005B690 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007D960 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x1800813B8 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x180081418 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x180089D00 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008BEA0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x1801105C0 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110A90 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x180110D64 (EtwpRegisterPrivateSession.c)
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
