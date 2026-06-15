/*
 * XREFs of ?GetVolumeChannelCount@CSystemAudioDeviceOffloadGraph@@UEAAJPEAI@Z @ 0x14003B200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceOffloadGraph::GetVolumeChannelCount(
        CSystemAudioDeviceOffloadGraph *this,
        unsigned int *a2)
{
  int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v6 = *(_OWORD *)((char *)this - 120);
  EtwEventActivityIdControl(4LL, &v6);
  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 10) + 24LL))(*((_QWORD *)this + 10), a2);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_c7d7401b1d0b3a3d3d012976977ed4c6_Traceguids, v4);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceOffloadGraph::GetVolumeChannelCount", 0x101u, v4);
  }
  EtwEventActivityIdControl(4LL, &v6);
  return (unsigned int)v4;
}
