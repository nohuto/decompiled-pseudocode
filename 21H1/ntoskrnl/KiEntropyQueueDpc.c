/*
 * XREFs of KiEntropyQueueDpc @ 0x1403146F0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403F7370 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F7550 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F76A0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403F77F0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1403FB7D0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FB930 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 34536, 0LL, 0LL, 0LL, 0);
  return result;
}
