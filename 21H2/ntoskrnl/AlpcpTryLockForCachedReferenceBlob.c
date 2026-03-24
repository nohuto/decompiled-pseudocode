/*
 * XREFs of AlpcpTryLockForCachedReferenceBlob @ 0x1405E9260
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x1405E2A50 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpReceiveMessagePort @ 0x1405E8BC0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

char __fastcall AlpcpTryLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax
  signed __int64 BugCheckParameter4; // rax

  v2 = KeAbPreAcquire(BugCheckParameter2 - 16, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 - 16), 0LL) )
  {
    if ( v2 )
      KeAbPostReleaseEx(BugCheckParameter2 - 16, v2);
    return 0;
  }
  else
  {
    if ( v2 )
      *(_BYTE *)(v2 + 26) |= 1u;
    *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL)
                       + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x27uLL, BugCheckParameter4);
    return 1;
  }
}
