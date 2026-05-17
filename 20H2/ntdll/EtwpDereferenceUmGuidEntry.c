/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180050C48
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043594 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800452F0 (EtwDeliverDataBlock.c)
 *     EtwNotificationUnregister @ 0x1800503E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180050CD0 (EtwpAcquireGuidEntryExclusive.c)
 */

__int64 __fastcall EtwpDereferenceUmGuidEntry(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r8

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 52), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(a1, a2);
    RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, v4, v5, v6);
    RtlRbRemoveNode((unsigned __int64 *)&EtwpGuidEntryTable, a1);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    *(_DWORD *)(a1 + 48) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 40));
    v7 = *(_QWORD *)(a1 + 168);
    if ( v7 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  }
  return result;
}
