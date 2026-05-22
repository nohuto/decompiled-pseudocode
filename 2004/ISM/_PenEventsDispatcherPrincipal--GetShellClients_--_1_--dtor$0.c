/*
 * XREFs of _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x18013317A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180125F88 (--1-$vector@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 */

void __fastcall PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 120));
  }
}
