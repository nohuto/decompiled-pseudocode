/*
 * XREFs of _std::vector_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__const_&__::_1_::catch$63 @ 0x18007D39A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180074B37 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800C4E34 (-_Destroy@-$vector@V-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IVolumeStrip_wil::err_returncode_policy__const____::_1_::catch_63(
        __int64 a1,
        __int64 a2)
{
  std::vector<wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>>::_Destroy(
    a1,
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
