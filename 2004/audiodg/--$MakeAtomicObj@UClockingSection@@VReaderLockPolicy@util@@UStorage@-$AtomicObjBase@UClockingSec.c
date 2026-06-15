/*
 * XREFs of ??$MakeAtomicObj@UClockingSection@@VReaderLockPolicy@util@@UStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@3@@util@@YA?AV?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@PEAUStorage@?$AtomicObjBase@UClockingSection@@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@VAtomicObjState@3@VReaderLockPolicy@3@$$V@0@@Z @ 0x14005FB84
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006170C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140061F28 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140016EE8 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005E104 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAXPEAV?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@Z @ 0x14005FE18 (--$reset@V-$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@-$shared_ptr@V-$AtomicOb.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall util::MakeAtomicObj<ClockingSection,util::ReaderLockPolicy,util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::Storage>(
        _QWORD *a1,
        __int64 a2)
{
  char *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rdx
  std::_Ref_count_base *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-30h]

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2 )
  {
    v4 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      *(_QWORD *)v4 = &util::AtomicObjBase<ClockingSection,util::AtomicObj<ClockingSection,util::ReaderLockPolicy>,util::AtomicObjState,util::ReaderLockPolicy,>::`vftable';
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v4 + 8));
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 13) = 0;
      *((_QWORD *)v4 + 7) = a2;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 9) = 0LL;
      *(_QWORD *)v4 = &util::AtomicObj<ClockingSection,util::ReaderLockPolicy>::`vftable';
    }
    else
    {
      v4 = 0LL;
    }
    std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::reset<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>(
      a1,
      v4);
    if ( *a1 )
    {
      v5 = (volatile signed __int32 *)a1[1];
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 3);
        v5 = (volatile signed __int32 *)a1[1];
      }
      v6 = *a1;
      v10 = *a1;
      v7 = (_QWORD *)(*a1 + 64LL);
      if ( v5 )
      {
        _InterlockedIncrement(v5 + 3);
        v6 = v10;
      }
      *v7 = v6;
      v8 = (std::_Ref_count_base *)v7[1];
      v7[1] = v5;
      if ( v8 )
        std::_Ref_count_base::_Decwref(v8);
      if ( v5 )
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
