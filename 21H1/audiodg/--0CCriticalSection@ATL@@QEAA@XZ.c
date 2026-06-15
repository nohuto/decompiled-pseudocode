/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140016EE8
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140016D1C (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x14005C6AC (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005FB84 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
