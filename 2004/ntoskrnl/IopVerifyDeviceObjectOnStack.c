/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x140340D44
 * Callers:
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCheckTopDeviceHint @ 0x1406E7014 (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, char a3)
{
  KIRQL v3; // al

  v3 = 0;
  if ( a3 )
    v3 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    if ( a1 == a2 )
    {
      if ( a3 )
        KeReleaseQueuedSpinLock(0xAuLL, v3);
      return 1;
    }
    a1 = *(_QWORD *)(a1 + 24);
  }
  while ( a1 );
  if ( a3 )
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  return 0;
}
