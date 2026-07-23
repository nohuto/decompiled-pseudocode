/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x1405DF144
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     CmpReferenceKeyControlBlock @ 0x1405E09D4 (CmpReferenceKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpReferenceKeyControlBlockLockNotHeld(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v3; // rtt

  result = *(_QWORD *)BugCheckParameter2;
  while ( result )
  {
    if ( result == -1 )
      KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, result + 1, result);
    if ( v3 == result )
      return result;
  }
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  CmpReferenceKeyControlBlock(BugCheckParameter2);
  return CmpUnlockKcb(BugCheckParameter2);
}
