/*
 * XREFs of ?Acquire@ReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAAJV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@@Z @ 0x140068E18
 * Callers:
 *     ?AcquireReadAccess@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@QEAA?AVReadAccess@12@XZ @ 0x140068F6C (-AcquireReadAccess@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x140066D74 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x140068D38 (--4-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@A.c)
 *     ?_AcquireRead@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@util@@IEAAJAEAPEBUClockingSection@@AEA_N@Z @ 0x14006B614 (-_AcquireRead@-$AtomicObjBase@UClockingSection@@V-$AtomicObj@UClockingSection@@VReaderLockPolicy.c)
 *     ?reset@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ @ 0x14006B7CC (-reset@-$shared_ptr@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXXZ.c)
 */

__int64 __fastcall util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::ReadAccess::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rsi
  volatile signed __int32 *v6; // rbx

  if ( *(_QWORD *)a1 )
  {
    v4 = -2147024891;
  }
  else
  {
    v5 = (_QWORD *)(a1 + 8);
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=((_QWORD *)(a1 + 8), a2);
    if ( *v5 )
    {
      v4 = util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::_AcquireRead(
             *v5,
             a1,
             a1 + 28);
      if ( v4 < 0 )
        std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset(v5);
    }
    else
    {
      v4 = -2147024809;
    }
  }
  *(_DWORD *)(a1 + 24) = v4;
  v6 = (volatile signed __int32 *)a2[1];
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
  }
  return (unsigned int)v4;
}
