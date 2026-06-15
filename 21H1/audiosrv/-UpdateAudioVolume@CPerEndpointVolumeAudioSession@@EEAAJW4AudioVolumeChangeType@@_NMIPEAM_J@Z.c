/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800CB950
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180038418 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800C2F7C (WPP_SF_dg.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800C9058 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        CPerEndpointVolumeAudioSession *a1,
        int a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // esi
  int VolumeStrip; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // esi
  unsigned int v17; // ebx
  __int64 v18; // rdi
  CAudioSessionManager *v19; // rcx
  int v20; // eax
  struct IVolumeStrip *v21; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF

  v8 = a3;
  CAudioSession::SetVolumeAllStreams((__int64)a1, a2, 0, a4, 0, 0LL);
  if ( (unsigned int)(a2 - 2) <= 1 )
    return 0LL;
  v21 = 0LL;
  VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip(a1, &v21);
  v10 = VolumeStrip;
  if ( VolumeStrip >= 0 )
  {
    v12 = (_QWORD *)((char *)a1 + 336);
    VolumeStrip = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, _QWORD *, _QWORD))(*(_QWORD *)v21 + 144LL))(
                    v21,
                    v8,
                    (_QWORD *)a1 + 42,
                    0LL);
    v10 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v11 = 4909LL;
      goto LABEL_8;
    }
    v13 = *((_QWORD *)a1 + 129);
    v23 = 0;
    VolumeStrip = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v23);
    v10 = VolumeStrip;
    if ( VolumeStrip < 0 )
    {
      v11 = 4912LL;
      goto LABEL_8;
    }
    v16 = a5;
    v17 = 0;
    if ( a5 )
    {
      v18 = a6;
      v19 = WPP_GLOBAL_Control;
      do
      {
        if ( v19 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v19 + 7) & 0x200000) != 0
          && *((_BYTE *)v19 + 25) >= 4u )
        {
          WPP_SF_dg(*((_QWORD *)v19 + 2), 0x52u, (__int64)&WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, v17);
          v19 = WPP_GLOBAL_Control;
        }
        if ( v17 < v23 )
        {
          v20 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64, _QWORD *, _QWORD))(*(_QWORD *)v21 + 96LL))(
                  v21,
                  v17,
                  v14,
                  v12,
                  0LL);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              4921LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v20);
          v19 = WPP_GLOBAL_Control;
        }
        ++v17;
        v18 += 4LL;
      }
      while ( v17 < v16 );
    }
    if ( v21 )
      (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v21 + 16LL))(v21);
    return 0LL;
  }
  v11 = 4902LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)VolumeStrip);
  if ( v21 )
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v21 + 16LL))(v21);
  return v10;
}
