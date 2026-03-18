/*
 * XREFs of KiEntropyQueueDpc @ 0x140322F90
 * Callers:
 *     KiScanInterruptObjectList @ 0x1403FD6C0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1403FD8A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1403FD9F0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1403FDB40 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterruptSubDispatch @ 0x140402750 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1404028B0 (KiVmbusInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 34536, 0LL, 0LL, 0LL, 0);
  return result;
}
