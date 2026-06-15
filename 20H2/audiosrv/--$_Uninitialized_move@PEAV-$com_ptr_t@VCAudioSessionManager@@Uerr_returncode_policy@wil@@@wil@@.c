/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D09D0
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180008D08 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800027C4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}
