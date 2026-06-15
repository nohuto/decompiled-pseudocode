/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180010920
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BD00 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800055F4 (WPP_SF_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___ @ 0x180012AF8 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_e.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  __int64 result; // rax
  const char *v7; // r9
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  _QWORD *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAudioSessionInfo *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  if ( *((_DWORD *)this + 122) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids);
    }
    return 0LL;
  }
  try
  {
    if ( (*(unsigned int (**)(void))(*(_QWORD *)a2 + 40LL))() )
      return 0LL;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v11 + 56LL))(v11)
      && !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v11 + 48LL))(v11) )
    {
      if ( a4 == AudioSessionStateActive )
      {
        v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
        v9[1] = v11;
        *v9 = *((_QWORD *)this + 8);
        *((_QWORD *)this + 8) = v9;
      }
      else
      {
        if ( a4 )
          return 0LL;
        v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
        std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_ec276c8d07c939ab0e4b590e5bf4eac5___(
          (char *)this + 64,
          &v11);
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      return 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x112,
                           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           v7);
  }
  return result;
}
