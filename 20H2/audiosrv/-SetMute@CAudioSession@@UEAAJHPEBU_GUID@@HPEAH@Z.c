/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x18002E790
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x18002E710 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800C89E8 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800C9310 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18004CED0 (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     WPP_SF_Sd @ 0x1800BE8F4 (WPP_SF_Sd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@33@Z @ 0x1800C5E20 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     WPP_SF_Sdd @ 0x1800CB0F0 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, const struct _GUID *a3, int a4, int *a5)
{
  int v9; // ebp
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-68h]
  int v19; // [rsp+40h] [rbp-48h] BYREF
  int v20; // [rsp+44h] [rbp-44h] BYREF
  _QWORD v21[8]; // [rsp+48h] [rbp-40h] BYREF
  int v22; // [rsp+90h] [rbp+8h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19,
      (unsigned int)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
      *((_QWORD *)this + 91),
      a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  v9 = *((_DWORD *)this + 213);
  v10 = 0;
  if ( v9 != a2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
        *((_QWORD *)this + 91),
        v9,
        a2);
    }
    CAudioSession::ResetPolicyGainStages(this);
    v12 = *(_QWORD *)this;
    *((_DWORD *)this + 213) = a2;
    if ( (*(int (__fastcall **)(CAudioSession *, int *))(v12 + 168))(this, &v23) >= 0 )
    {
      v14 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    v13,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v14 > 4u )
      {
        if ( (unsigned __int8)tlgKeywordOn(v14, 0x400000000000LL) )
        {
          v22 = v23;
          v19 = *((_DWORD *)this + 180);
          v21[0] = *((_QWORD *)this + 91);
          v20 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v15,
            (unsigned int)&unk_180166AAE,
            v16,
            v17,
            (__int64)&v20,
            (__int64)v21,
            (__int64)&v19,
            (__int64)&v22);
        }
      }
    }
  }
  if ( this != (CAudioSession *)-808LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  if ( v9 != a2 && !a4 )
  {
    LOBYTE(v18) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      v18,
      0LL);
  }
  if ( a5 )
  {
    LOBYTE(v10) = v9 == a2;
    *a5 = v10;
  }
  return 0LL;
}
