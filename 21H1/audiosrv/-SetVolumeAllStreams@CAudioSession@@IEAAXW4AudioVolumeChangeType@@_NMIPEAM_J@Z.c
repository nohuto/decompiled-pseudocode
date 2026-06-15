/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180038418
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800383E0 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800CB950 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x180002538 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180002914 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180002CA4 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800CC060 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v9; // r14d
  unsigned __int64 v10; // rcx
  struct CAudioStream *v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  int updated; // eax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[3]; // [rsp+48h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  float v23; // [rsp+A0h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  lpCriticalSection[1] = (LPCRITICAL_SECTION)(a1 + 48);
  v9 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= *(_QWORD *)(a1 + 104) )
        ATL::AtlThrowImpl(-2147024809);
      v11 = *(struct CAudioStream **)(*(_QWORD *)(a1 + 96) + 8 * v10);
      CAudioSession::GetPolicyVolumeForStream((CAudioSession *)v10, v11, &v23, &v20);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 78LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, a1, v11);
      }
      if ( a2 == 3 )
        v12 = *((_BYTE *)v11 + 224) != 0 ? 0x3D0900 : 0;
      else
        v12 = a2 == 4 ? (*((_BYTE *)v11 + 224) != 0 ? 0x2710 : 0) : v20;
      v13 = CAudioStream::SetPolicyVolume(v11, v23, v12, a5 == 0);
      v15 = retaddr;
      if ( v13 < 0 )
        break;
      if ( a5 )
      {
        LOBYTE(v14) = a3;
        v13 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD))(*(_QWORD *)v11 + 104LL))(
                v11,
                v14,
                0LL);
        v15 = retaddr;
        if ( v13 < 0 )
        {
          v18 = 4211LL;
          goto LABEL_33;
        }
        v19 = v12;
        v13 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 96LL))(
                v11,
                v16,
                a5,
                a6);
        v15 = retaddr;
        if ( v13 < 0 )
        {
          v18 = 4214LL;
          goto LABEL_33;
        }
      }
LABEL_19:
      updated = CAudioStream::UpdateStreamPriority(v11);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x107C,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          v19);
      v10 = ++v9;
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_4;
    }
    v18 = 4206LL;
LABEL_33:
    wil::details::in1diag3::_Log_Hr(
      v15,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v13,
      v19);
    goto LABEL_19;
  }
LABEL_4:
  if ( a1 != -48 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( lpCriticalSection[0] )
    LeaveCriticalSection(lpCriticalSection[0]);
}
