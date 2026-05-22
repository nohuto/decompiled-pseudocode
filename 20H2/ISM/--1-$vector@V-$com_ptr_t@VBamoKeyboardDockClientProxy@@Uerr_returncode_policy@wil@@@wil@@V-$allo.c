/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180125EF8
 * Callers:
 *     _KeyboardDockServer::KeyboardDockServer_::_1_::dtor$1 @ 0x180050A7B (_KeyboardDockServer--KeyboardDockServer_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$1 @ 0x180132E77 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$4 @ 0x180132E8F (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$4.c)
 *     _PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor$0 @ 0x180132F70 (_PenEventsDispatcherPrincipal--GetClientsForProcess_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x1801330EA (_PenEventsDispatcherPrincipal--GetShellClients_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged_::_1_::dtor$0 @ 0x18013326E (_PenEventsDispatcherPrincipal--NotifyHotkeyRegistrationChanged_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F070 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy.c)
 */

void __fastcall std::vector<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 *v1; // rdi

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(
      v1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
