/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800091B0
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180017CE0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002B428 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D1E0C (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180002C64 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180072050 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800D15A0 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  SIZE_T v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 *v15; // rsi
  __int64 v16; // rcx
  __int64 *v17; // r8
  __int64 *v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v22; // [rsp+88h] [rbp+20h]

  v6 = ((__int64)a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  v22 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v15 = (__int64 *)(v14 + 8 * v6);
  v16 = *a3;
  *v15 = *a3;
  if ( v16 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(
      v16,
      v13);
  v17 = (__int64 *)a1[1];
  v18 = (__int64 *)*a1;
  if ( a2 == v17 )
  {
    v19 = (_QWORD *)v14;
    while ( v18 != v17 )
    {
      v20 = *v18;
      *v18 = 0LL;
      *v19++ = v20;
      ++v18;
    }
  }
  else
  {
    std::_Uninitialized_move<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
      v18,
      a2,
      v14);
    std::_Uninitialized_move<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> *,wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
      a2,
      a1[1],
      v15 + 1);
  }
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
      (_QWORD *)*a1,
      (_QWORD *)a1[1]);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v14;
  a1[1] = v14 + 8 * v8;
  a1[2] = v14 + v22;
  return v15;
}
