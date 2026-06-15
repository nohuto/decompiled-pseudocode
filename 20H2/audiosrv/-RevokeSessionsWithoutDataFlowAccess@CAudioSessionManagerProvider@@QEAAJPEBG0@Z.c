/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D123C
 * Callers:
 *     ?HandleAccessChangeNotification@@YAJPEBG0@Z @ 0x1800D0EBC (-HandleAccessChangeNotification@@YAJPEBG0@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800027C4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180008D08 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180071690 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800CFE8C (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::RevokeSessionsWithoutDataFlowAccess(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r15
  const unsigned __int16 *v4; // r12
  __int64 *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  volatile int *v8; // rdx
  const char *v9; // r9
  __int64 *v10; // r14
  __int64 *v11; // r13
  __int64 *v12; // rdi
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  __int64 *i; // r14
  int v16; // eax
  bool v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v10 = (__int64 *)*((_QWORD *)this + 7);
  v11 = (__int64 *)*((_QWORD *)this + 8);
  v12 = 0LL;
  try
  {
    while ( v10 != v11 )
    {
      v13 = *v10;
      if ( *(_DWORD *)(*v10 + 312) == 1 )
      {
        if ( v6 == v12 )
        {
          std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
            (__int64 *)&v19,
            v12,
            v10);
          v6 = v20;
          v12 = (__int64 *)*((_QWORD *)&v19 + 1);
        }
        else
        {
          *v12 = v13;
          if ( v13 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(
              v13,
              v8);
          *((_QWORD *)&v19 + 1) = ++v12;
        }
      }
      ++v10;
    }
    if ( v7 )
      LeaveCriticalSection(v7);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x184,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      v9);
    v3 = a3;
    v4 = a2;
    v6 = v20;
    v12 = (__int64 *)*((_QWORD *)&v19 + 1);
  }
  v14 = (_QWORD *)v19;
  for ( i = (__int64 *)v19; i != v12; ++i )
  {
    v16 = CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(*i, v4, v3, (__int64)v9, v18);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        392LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v16);
  }
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(v14, v12);
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(((char *)v6 - (char *)v14) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0LL;
}
