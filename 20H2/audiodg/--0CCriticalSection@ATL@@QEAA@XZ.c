/*
 * XREFs of ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140016EF8
 * Callers:
 *     ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140016D2C (--0CCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ @ 0x1400651D8 (--0CSpatialCrossProcessBaseEndpoint@@IEAA@XZ.c)
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x1400686B4 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CCriticalSection::CCriticalSection(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return this;
}
