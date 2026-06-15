/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800027C4
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180008D08 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002ADA8 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D09D0 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800D0ACC (--1-$vector@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800D0B20 (--1CAudioSessionManagerProvider@@UEAA@XZ.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D123C (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 *     ?_Destroy@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1800D14B8 (-_Destroy@-$vector@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release();
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
