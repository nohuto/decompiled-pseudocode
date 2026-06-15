/*
 * XREFs of ??_E?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@UEAAPEAXI@Z @ 0x140068DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@UEAA@XZ @ 0x140068B3C (--1-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@uti.c)
 */

void *__fastcall util::AtomicObj<ClockingSection,util::ReaderLockPolicy>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::~AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
