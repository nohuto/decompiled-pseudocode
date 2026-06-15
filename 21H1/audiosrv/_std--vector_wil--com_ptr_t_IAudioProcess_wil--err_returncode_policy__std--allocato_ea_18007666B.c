/*
 * XREFs of _std::vector_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__const_&__::_1_::catch$60 @ 0x18007666B
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180058BB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     _CxxThrowException_0 @ 0x180074B37 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_IAudioProcess_wil::err_returncode_policy__const____::_1_::catch_60(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 32));
  std::_Deallocate<16,0>(*(void **)(a2 + 40), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
