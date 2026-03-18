/*
 * XREFs of ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800CE278
 * Callers:
 *     ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x18008ED40 (--_GCProcessAttribution@@UEAAPEAXI@Z.c)
 *     ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800E3870 (-EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObs.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x180154E84 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator() @ 0x18015500C (_lambda_73f2a4da0cca98f221385d01cc2cbc64_--operator().c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180091A94 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

CProcessAttributionManager::Record *__fastcall CProcessAttributionManager::Record::`scalar deleting destructor'(
        CProcessAttributionManager::Record *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 16);
  operator delete(this);
  return this;
}
