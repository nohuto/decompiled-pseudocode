/*
 * XREFs of ??4?$shared_ptr@V?$AtomicObj@UClockingSection@@VReaderLockPolicy@util@@@util@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x14006005C
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006170C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x140061F28 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x14005E104 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<util::AtomicObj<ClockingSection,util::ReaderLockPolicy>>::operator=(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx

  v2 = a2[1];
  a2[1] = 0LL;
  v4 = *a2;
  *a2 = 0LL;
  v5 = (volatile signed __int32 *)a1[1];
  *a1 = v4;
  a1[1] = v2;
  if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v5);
  }
  return a1;
}
