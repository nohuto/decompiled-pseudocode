/*
 * XREFs of _ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::NewNode_::_1_::catch$0 @ 0x1400458CC
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14001F427 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_unsigned___int64_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy__ATL::CElementTraits_unsigned___int64__ATL::CElementTraits_wil::com_ptr_t_ICPAudioHistoryControl_wil::err_returncode_policy_____::NewNode_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}
