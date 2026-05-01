/*
 * XREFs of ??1AppInventoryData@@QEAA@XZ @ 0x18045EE64
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18045F060 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 *     _ComputeAppIdFromExePath_::_1_::dtor$1 @ 0x18045F0FF (_ComputeAppIdFromExePath_--_1_--dtor$1.c)
 *     _GetAppInventoryData_::_1_::dtor$0 @ 0x18045F322 (_GetAppInventoryData_--_1_--dtor$0.c)
 *     ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18045F35C (-GetDisplayNameFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PE.c)
 *     _GetDisplayNameFromExePath_::_1_::dtor$4 @ 0x18045F5BE (_GetDisplayNameFromExePath_--_1_--dtor$4.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall AppInventoryData::~AppInventoryData(AppInventoryData *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
