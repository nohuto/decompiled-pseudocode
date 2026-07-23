/*
 * XREFs of _ZwWaitForAlertByThreadId@8 @ 0x4B2F4680
 * Callers:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     @RtlpWaitOnAddressWithTimeout@16 @ 0x4B2DF875 (@RtlpWaitOnAddressWithTimeout@16.c)
 *     _RtlpWaitOnAddressRemoveWaitBlock@8 @ 0x4B2DF916 (_RtlpWaitOnAddressRemoveWaitBlock@8.c)
 *     _RtlpRunOnceWaitForInit@8 @ 0x4B2F28A3 (_RtlpRunOnceWaitForInit@8.c)
 *     _RtlSleepConditionVariableCS@12 @ 0x4B366010 (_RtlSleepConditionVariableCS@12.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwWaitForAlertByThreadId(PVOID Address, PLARGE_INTEGER Timeout)
{
  return Wow64SystemServiceCall();
}
