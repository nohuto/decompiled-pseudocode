/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140001358
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140002970 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004360 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140010720 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140039F40 (WPP_SF_DDD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(unsigned __int64 a1, int a2)
{
  int v4; // edi
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v8 = *(_OWORD *)(a1 + 248);
  EtwEventActivityIdControl(4LL, &v8);
  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 120LL);
      goto LABEL_5;
    case 1:
      v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 128LL);
      goto LABEL_5;
    case 2:
      v5 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 136LL);
LABEL_5:
      v6 = v5();
      goto LABEL_6;
  }
  if ( a2 != 3 )
    goto LABEL_7;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 112LL))(
         *(_QWORD *)(a1 + 328),
         (a1 + 296) & ((unsigned __int128)-(__int128)a1 >> 64));
LABEL_6:
  v4 = v6;
LABEL_7:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v4 >> 31) & 0xFFFFFFFE) + 4) )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
      *(unsigned int *)(a1 + 336),
      a2,
      v4);
  }
  if ( v4 < 0 )
    a2 = *(_DWORD *)(a1 + 336);
  *(_DWORD *)(a1 + 336) = a2;
  EtwEventActivityIdControl(4LL, &v8);
  return (unsigned int)v4;
}
