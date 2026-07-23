/*
 * XREFs of _ZwTraceControl@24 @ 0x4B2F45B0
 * Callers:
 *     _EtwpNotificationThread@16 @ 0x4B2AE380 (_EtwpNotificationThread@16.c)
 *     _EtwpSetProviderTraits@16 @ 0x4B2B0AAD (_EtwpSetProviderTraits@16.c)
 *     _EtwpRegisterProvider@12 @ 0x4B2B0C39 (_EtwpRegisterProvider@12.c)
 *     _EtwpRegisterTpNotificationOnce@12 @ 0x4B2B1C90 (_EtwpRegisterTpNotificationOnce@12.c)
 *     _EtwEventActivityIdControl@8 @ 0x4B2DC160 (_EtwEventActivityIdControl@8.c)
 *     _EtwpGetMaxLogger@0 @ 0x4B2EC7A7 (_EtwpGetMaxLogger@0.c)
 *     _EtwRegisterSecurityProvider@0 @ 0x4B380690 (_EtwRegisterSecurityProvider@0.c)
 *     _EtwpTrackProviderBinary@8 @ 0x4B3808C0 (_EtwpTrackProviderBinary@8.c)
 *     _EtwpUseDescriptorType@16 @ 0x4B380958 (_EtwpUseDescriptorType@16.c)
 *     _EtwEventWriteEndScenario@20 @ 0x4B380AB0 (_EtwEventWriteEndScenario@20.c)
 *     _EtwEventWriteStartScenario@20 @ 0x4B380B90 (_EtwEventWriteStartScenario@20.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 *     _EtwpRegisterPrivateSession@12 @ 0x4B3818EE (_EtwpRegisterPrivateSession@12.c)
 *     _EtwReplyNotification@4 @ 0x4B382400 (_EtwReplyNotification@4.c)
 *     _EtwSendNotification@20 @ 0x4B382440 (_EtwSendNotification@20.c)
 *     _EtwpReceiveReplyDataBlock@36 @ 0x4B382527 (_EtwpReceiveReplyDataBlock@36.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwTraceControl(
        ETWTRACECONTROLCODE TraceControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
