/*
 * XREFs of IopCheckStackForTransactionSupport @ 0x14039184C
 * Callers:
 *     IopRetrieveTransactionParameters @ 0x140601200 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 */

__int64 __fastcall IopCheckStackForTransactionSupport(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // dl

  v1 = a1;
  if ( (*(_DWORD *)(a1 + 48) & 0x40000) == 0 )
  {
    v3 = KeAcquireQueuedSpinLock(0xAuLL);
    do
    {
      if ( (*(_DWORD *)(v1 + 48) & 0x40000) != 0 )
        break;
      v1 = *(_QWORD *)(v1 + 312);
      if ( v1 )
        v1 = *(_QWORD *)(v1 + 48);
    }
    while ( v1 );
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  }
  return v1;
}
