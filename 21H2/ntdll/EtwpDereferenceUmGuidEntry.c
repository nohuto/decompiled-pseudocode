/*
 * XREFs of EtwpDereferenceUmGuidEntry @ 0x180047D08
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180043554 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800452B0 (EtwDeliverDataBlock.c)
 *     EtwNotificationUnregister @ 0x1800514F0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x180047DB4 (EtwpAcquireGuidEntryExclusive.c)
 */

LOGICAL __fastcall EtwpDereferenceUmGuidEntry(PRTL_BALANCED_NODE Node, __int64 a2)
{
  LOGICAL result; // eax
  _RTL_BALANCED_NODE *v4; // r8

  result = _InterlockedExchangeAdd((volatile signed __int32 *)&Node[2].Left + 1, 0xFFFFFFFF);
  if ( result == 1 )
  {
    EtwpAcquireGuidEntryExclusive(Node, a2);
    RtlAcquireSRWLockExclusive(&EtwpProvLock);
    RtlRbRemoveNode(&EtwpGuidEntryTable, Node);
    RtlReleaseSRWLockExclusive(&EtwpProvLock);
    LODWORD(Node[2].Children[0]) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)&Node[1].16);
    v4 = Node[7].Children[0];
    if ( v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Node);
  }
  return result;
}
