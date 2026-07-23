/*
 * XREFs of NtTraceControl @ 0x1800A0E90
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x1800016FC (EtwpReceiveReplyDataBlock.c)
 *     EtwReplyNotification @ 0x1800019A0 (EtwReplyNotification.c)
 *     EtwpSetProviderTraits @ 0x180042B48 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x180042ECC (EtwpRegisterProvider.c)
 *     EtwpNotificationThread @ 0x180045170 (EtwpNotificationThread.c)
 *     EtwEventWriteEndScenario @ 0x18004FD30 (EtwEventWriteEndScenario.c)
 *     EtwSendNotification @ 0x180051690 (EtwSendNotification.c)
 *     EtwEventActivityIdControl @ 0x18005CC10 (EtwEventActivityIdControl.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18007E400 (EtwpRegisterTpNotificationOnce.c)
 *     EtwpGetMaxLogger @ 0x180081DD8 (EtwpGetMaxLogger.c)
 *     EtwpTrackProviderBinary @ 0x180081E38 (EtwpTrackProviderBinary.c)
 *     EtwEventWriteStartScenario @ 0x18008A400 (EtwEventWriteStartScenario.c)
 *     EtwRegisterSecurityProvider @ 0x18008C5A0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x180110930 (EtwpUseDescriptorType.c)
 *     EtwpDemuxUmTraceHandle @ 0x180110E00 (EtwpDemuxUmTraceHandle.c)
 *     EtwpRegisterPrivateSession @ 0x1801110D4 (EtwpRegisterPrivateSession.c)
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

  result = 453;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
