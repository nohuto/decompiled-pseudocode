/*
 * XREFs of ??0CAudioSession@@IEAA@XZ @ 0x18002C4A0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800CE4A4 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002C888 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

CAudioSession *__fastcall CAudioSession::CAudioSession(CAudioSession *this)
{
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &CAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)this + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)this + 2) = &CAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)this + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)this + 4) = &CAudioSession::`vftable'{for `CUnknown'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 48), 0, 0);
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 128), 0, 0);
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 5, 0, 0);
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 70) = 0;
  *(_QWORD *)((char *)this + 300) = 0LL;
  *((_DWORD *)this + 78) = 180000;
  *((_QWORD *)this + 40) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 41) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 352), 0, 0);
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 432), 0, 0);
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = 0;
  *((_BYTE *)this + 484) = 0;
  *((_QWORD *)this + 61) = 0LL;
  ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)this + 496));
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 616), 0, 0);
  *((_QWORD *)this + 82) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 83) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 84) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_QWORD *)this + 87) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  *((_DWORD *)this + 176) = 0;
  *(GUID *)((char *)this + 680) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 179) = -1;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_QWORD *)this + 91) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 736), 0, 0);
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_BYTE *)this + 800) = 1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 808), 0, 0);
  *((_QWORD *)this + 106) = 1065353216LL;
  *((_QWORD *)this + 108) = &AudioSrvVolumeTelemetry::`vftable';
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_DWORD *)this + 222) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 896), 0, 0);
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 108) = &AudioSrvVolumeTelemetrySessionVolume::`vftable';
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_DWORD *)this + 240) = 0;
  *((_QWORD *)this + 121) = 0LL;
  *((_BYTE *)this + 976) = 0;
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 412));
  GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 420));
  *((_QWORD *)this + 49) = GetTickCount64();
  return this;
}
