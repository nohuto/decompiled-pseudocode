/*
 * XREFs of CmpReferenceKeyControlBlockLockNotHeld @ 0x1406BCD00
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     CmpUnlockKcb @ 0x1406F2B40 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlock @ 0x140719888 (CmpReferenceKeyControlBlock.c)
 */

double __fastcall CmpReferenceKeyControlBlockLockNotHeld(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v1; // rax
  signed __int64 v3; // rtt
  double result; // xmm0_8

  v1 = *(_QWORD *)BugCheckParameter2;
  while ( v1 )
  {
    if ( v1 == -1 )
      KeBugCheckEx(0x51u, 0x24uLL, BugCheckParameter2, 0LL, 0LL);
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v1 + 1, v1);
    if ( v3 == v1 )
      return result;
  }
  ExAcquirePushLockSharedEx(BugCheckParameter2 + 48, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 56));
  CmpReferenceKeyControlBlock(BugCheckParameter2);
  return CmpUnlockKcb(BugCheckParameter2);
}
