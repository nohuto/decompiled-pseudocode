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

int __thiscall EtwpDereferenceUmGuidEntry(unsigned int this)
{
  int result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(this + 36));
  if ( !result )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(this + 28));
    *(_DWORD *)(this + 32) = NtCurrentTeb()->ClientId.UniqueThread;
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode((int)&EtwpGuidEntryTable, this);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(this + 32) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(this + 28));
    if ( *(_DWORD *)(this + 148) )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(this + 148));
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, this);
  }
  return result;
}
