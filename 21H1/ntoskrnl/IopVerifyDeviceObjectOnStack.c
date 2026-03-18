/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x140303F74
 * Callers:
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCheckTopDeviceHint @ 0x1406C671C (IopCheckTopDeviceHint.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
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
