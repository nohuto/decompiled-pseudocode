/*
 * XREFs of _ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch$0 @ 0x140036502
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14001F427 (_CxxThrowException_0.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400362C8 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned_long_CpuManager::HandleRegistrations::ListValue_ATL::CElementTraits_unsigned_long__ATL::CElementTraits_CpuManager::HandleRegistrations::ListValue___::SetAt_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
    *(_QWORD *)(a2 + 80),
    *(_QWORD *)(a2 + 104));
  throw;
}
