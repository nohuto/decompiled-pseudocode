/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x1407A91A0
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14074E474 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReceiveMessagePort @ 0x1407A8B00 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  signed __int64 BugCheckParameter4; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2 - 16, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}
