/*
 * XREFs of ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180017660
 * Callers:
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180011930 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014200 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016E00 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180008D08 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManager@@AEAPEBG@Z @ 0x18002B864 (--$MakeAndInitialize@VCAudioSessionManager@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180071690 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManager@@PEAPEAV3@@Z @ 0x1800D0A10 (--$query@VCAudioSessionManager@@V1@@default_query_policy@details@wil@@SAJPEAVCAudioSessionManage.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  _QWORD *v6; // r15
  _QWORD *i; // rbx
  int v8; // eax
  int v9; // eax
  const char *v10; // r9
  unsigned int v11; // ebx
  __int64 result; // rax
  __int64 *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned int v16; // r15d
  int lpString2; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  PCNZWCH lpString1; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+80h] [rbp+18h]

  lpString1 = a2;
  *a3 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v21 = v5;
  v6 = (_QWORD *)*((_QWORD *)this + 8);
  for ( i = (_QWORD *)*((_QWORD *)this + 7); i != v6; ++i )
  {
    v8 = CompareStringW(0x7Fu, 1u, lpString1, -1, *(PCNZWCH *)(*i + 296LL), -1);
    if ( v8 == 2 )
      break;
  }
  try
  {
    if ( i == *((_QWORD **)this + 8) )
    {
      v19 = 0LL;
      v9 = Microsoft::WRL::Details::MakeAndInitialize<CAudioSessionManager,CAudioSessionManager,unsigned short const * &>(
             &v19,
             &lpString1);
      v11 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD9,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v9,
          lpString2);
        if ( v19 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v19);
        if ( v5 )
          LeaveCriticalSection(v5);
        return v11;
      }
      v13 = (__int64 *)*((_QWORD *)this + 8);
      if ( *((__int64 **)this + 9) == v13 )
      {
        std::vector<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy> const &>(
          (__int64 *)this + 7,
          v13,
          &v19);
        v14 = v19;
      }
      else
      {
        v14 = v19;
        *v13 = v19;
        if ( v14 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(
            v14,
            v13);
        *((_QWORD *)this + 8) += 8LL;
      }
      if ( v14 )
        wil::details::default_query_policy::query<CAudioSessionManager,CAudioSessionManager>(v14, a3);
      else
        *a3 = 0LL;
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v14);
      goto LABEL_29;
    }
    v15 = *i;
    v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 8LL))(*i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 < 0x3FFFFFFF )
    {
      if ( *i )
        wil::details::default_query_policy::query<CAudioSessionManager,CAudioSessionManager>(*i, a3);
      else
        *a3 = 0LL;
LABEL_29:
      if ( v5 )
        LeaveCriticalSection(v5);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)0x8007000ELL,
      lpString2);
    if ( v5 )
      LeaveCriticalSection(v5);
    result = 2147942414LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                           v10);
  }
  return result;
}
