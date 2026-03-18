/*
 * XREFs of KiEndThreadAccountingPeriod @ 0x1402B9660
 * Callers:
 *     KiScanInterruptObjectList @ 0x140421050 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140421230 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140421380 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1404214D0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404226D0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140423360 (KxIsrLinkage.c)
 *     KiHvInterruptSubDispatch @ 0x1404270A0 (KiHvInterruptSubDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140427200 (KiVmbusInterruptSubDispatch.c)
 *     KiSwInterrupt @ 0x140427360 (KiSwInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x140428980 (KiIpiInterruptSubDispatch.c)
 *     KxDispatchInterrupt @ 0x140428BA0 (KxDispatchInterrupt.c)
 * Callees:
 *     KiEndThreadAccountingPeriodEx @ 0x1402B9680 (KiEndThreadAccountingPeriodEx.c)
 */

__int64 __fastcall KiEndThreadAccountingPeriod(__int64 a1, __int64 a2, __int64 a3)
{
  return KiEndThreadAccountingPeriodEx(a1, a2, a3, 0LL);
}
