/*
 * XREFs of ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x14005FE18
 * Callers:
 *     ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005FB84 (--$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@-$AtomicObjBase@UClockingSec.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005E104 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Setp@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@AEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@U?$integral_constant@_N$0A@@1@@Z @ 0x14005FCC8 (--$_Setp@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 */

void __fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  volatile signed __int32 *v3; // rdi
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::_Setp<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
    &v4,
    a2);
  v3 = *(volatile signed __int32 **)(a1 + 8);
  *(_OWORD *)a1 = v4;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v3);
    }
  }
}
