/*
 * XREFs of _EtwpDereferenceUmGuidEntry@4 @ 0x4B2EE4C1
 * Callers:
 *     _EtwDeliverDataBlock@4 @ 0x4B2AE4B0 (_EtwDeliverDataBlock@4.c)
 *     _EtwpUpdateEnableInfoAndCallback@8 @ 0x4B2B0D5F (_EtwpUpdateEnableInfoAndCallback@8.c)
 *     _EtwNotificationUnregister@12 @ 0x4B2D99D0 (_EtwNotificationUnregister@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 */

LOGICAL __thiscall EtwpDereferenceUmGuidEntry(_RTL_SRWLOCK *BaseAddress)
{
  LOGICAL result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)&BaseAddress[9]);
  if ( !result )
  {
    RtlAcquireSRWLockExclusive(BaseAddress + 7);
    BaseAddress[8].0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)NtCurrentTeb()->ClientId.UniqueThread;
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, (PRTL_BALANCED_NODE)BaseAddress);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    BaseAddress[8].Value = 0;
    RtlReleaseSRWLockExclusive(BaseAddress + 7);
    if ( BaseAddress[37].Value )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress[37].Ptr);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
