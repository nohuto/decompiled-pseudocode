/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x18002EED0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x18002ECF0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x18002F0F8 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800460DC (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$forward_list@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18006E7F8 (-clear@-$forward_list@V-$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sg @ 0x1800CBE10 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, const struct _GUID *a3, int *a4)
{
  int v7; // edi
  int v9; // xmm6_4
  float v10; // xmm6_4
  int v11; // [rsp+20h] [rbp-58h]
  double v12; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v12 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 17, (_DWORD)a3, *((_QWORD *)this + 91), SLOBYTE(v12));
  }
  v7 = 0;
  if ( ValidateAudioLevel(a2) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    v9 = *((_DWORD *)this + 212);
    AudioSrvVolumeTelemetry::Update((CAudioSession *)((char *)this + 864));
    *((_DWORD *)this + 237) = v9;
    *((float *)this + 238) = a2;
    v10 = *((float *)this + 212);
    *((float *)this + 212) = a2;
    if ( this != (CAudioSession *)-808LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
    std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::clear((char *)this + 472);
    if ( this != (CAudioSession *)-432LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
    LOBYTE(v11) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v11,
      0LL);
    if ( a4 )
    {
      if ( v10 == a2 )
        v7 = 1;
      *a4 = v7;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x368,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL,
      v11);
    return 2147942487LL;
  }
}
