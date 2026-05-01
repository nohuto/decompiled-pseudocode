/*
 * XREFs of RmpClientConnectionInitialize @ 0x18000963C
 * Callers:
 *     RmpClientConnectToResourceManager @ 0x1800095B8 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     HamIpcChannelInitialize @ 0x1800096E0 (HamIpcChannelInitialize.c)
 *     memset_0 @ 0x18000AB30 (memset_0.c)
 */

__int64 __fastcall RmpClientConnectionInitialize(__int64 a1)
{
  __int64 *v2; // rax

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  memset_0((void *)(a1 + 24), 0, 0x50uLL);
  HamIpcChannelInitialize(
    RmpClientSubscriptionDeliverPayload,
    HampConnectionObjectCompareToObject,
    RmpClientCallbackCompareToPayload,
    a1 + 24);
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = (__int64 *)qword_1800246D8;
  if ( *(__int64 **)qword_1800246D8 != &RmpClientConnectionListHead )
    __fastfail(3u);
  *(_QWORD *)a1 = &RmpClientConnectionListHead;
  *(_QWORD *)(a1 + 8) = v2;
  *v2 = a1;
  qword_1800246D8 = a1;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
