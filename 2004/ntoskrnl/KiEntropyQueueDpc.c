/*
 * XREFs of KiEntropyQueueDpc @ 0x140352500
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403F8600 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403F87E0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403F8930 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403F8A80 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x1403FCA60 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1403FCBC0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 34536, 0LL, 0LL, 0LL, 0);
  return result;
}
