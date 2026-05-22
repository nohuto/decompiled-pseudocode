/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F5C0
 * Callers:
 *     _std::vector_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__const_&__::_1_::catch$33 @ 0x18010F711 (_std--vector_wil--com_ptr_t_PenEventsClientCustomProxy_wil--err_exception_policy__std--allocator.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18010F820 (--$_Uninitialized_move@PEAV-$com_ptr_t@VBamoPenDevicePrincipal@@Uerr_returncode_policy@wil@@@wil.c)
 *     ??1MPCConstantManagerClient@@UEAA@XZ @ 0x180111564 (--1MPCConstantManagerClient@@UEAA@XZ.c)
 *     ?CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ @ 0x180113024 (-CleanupPrincipals@MPCConstantManagerClient@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180119630 (-_Change_array@-$vector@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     _std::vector_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoPenDevicePrincipal_wil::err_returncode_policy____::_1_::catch$34 @ 0x18012525F (_std--vector_wil--com_ptr_t_BamoPenDevicePrincipal_wil--err_returncode_policy__std--allocator_wi.c)
 *     ??1?$vector@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180126448 (--1-$vector@V-$com_ptr_t@VBamoKeyboardDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 *     ??1KeyboardDockServer@@UEAA@XZ @ 0x18012649C (--1KeyboardDockServer@@UEAA@XZ.c)
 *     ??_G?$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18012EF70 (--_G-$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z.c)
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x1801331F0 (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801336B0 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoKeyboardDockClientProxy,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
