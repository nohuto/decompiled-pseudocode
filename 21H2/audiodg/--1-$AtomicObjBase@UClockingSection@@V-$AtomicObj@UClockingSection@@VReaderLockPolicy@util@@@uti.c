/*
 * XREFs of ??1?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@UEAA@XZ @ 0x140068B3C
 * Callers:
 *     ??_E?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@UEAAPEAXI@Z @ 0x140068DB0 (--_E-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140066D74 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::~AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>(
        __int64 a1)
{
  bool v1; // zf
  std::_Ref_count_base *v3; // rcx

  v1 = *(_DWORD *)(a1 + 52) == 1;
  *(_QWORD *)a1 = &util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
  if ( v1 )
    operator delete(*(void **)(a1 + 56));
  v3 = *(std::_Ref_count_base **)(a1 + 72);
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
}
