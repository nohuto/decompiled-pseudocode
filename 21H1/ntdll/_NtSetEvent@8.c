/*
 * XREFs of _NtSetEvent@8 @ 0x4B2F2A40
 * Callers:
 *     _RtlpTpWaitRundown@4 @ 0x4B2A81AB (_RtlpTpWaitRundown@4.c)
 *     _RtlpTpTimerQueueRundown@4 @ 0x4B2A8BFD (_RtlpTpTimerQueueRundown@4.c)
 *     _RtlpTpTimerRundown@4 @ 0x4B2A8D8D (_RtlpTpTimerRundown@4.c)
 *     _TppCallbackEpilog@4 @ 0x4B2B6183 (_TppCallbackEpilog@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0 (_RtlpUnWaitCriticalSectionEx@8.c)
 *     _LdrpProcessInitializationComplete@0 @ 0x4B2E645A (_LdrpProcessInitializationComplete@0.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _EtwpSynchronizeWithLogger@8 @ 0x4B2EDB44 (_EtwpSynchronizeWithLogger@8.c)
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 *     _RtlpProcessReflectionStartup@4 @ 0x4B3354D0 (_RtlpProcessReflectionStartup@4.c)
 *     _RtlpWnfMetaCallbackProc@16 @ 0x4B33C720 (_RtlpWnfMetaCallbackProc@16.c)
 *     _RtlpUnWaitCriticalSection@4 @ 0x4B34ABA0 (_RtlpUnWaitCriticalSection@4.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x4B364D91 (RtlpHeapTrkSyncWithDiagnoser.c)
 *     _RtlpRtlpCtSelfSubscribeCallback@28 @ 0x4B369F70 (_RtlpRtlpCtSelfSubscribeCallback@28.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  return Wow64SystemServiceCall();
}
