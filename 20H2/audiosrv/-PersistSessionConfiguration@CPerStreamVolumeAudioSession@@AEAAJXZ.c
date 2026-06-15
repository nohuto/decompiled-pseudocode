/*
 * XREFs of ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180050DB0
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18002E030 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180047720 (-LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800C9860 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?SetAt@?$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z @ 0x180051100 (-SetAt@-$CComSafeArray@M$03@ATL@@QEAAJJAEBMH@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180051204 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x180051308 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005164C (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::PersistSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  int v5; // r8d
  int v6; // r9d
  int v7; // eax
  SAFEARRAY *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  SAFEARRAY *v11; // rax
  HRESULT v12; // eax
  unsigned int v13; // r15d
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  int v22; // r8d
  int v23; // r9d
  int v24; // eax
  int v25; // eax
  int v27; // [rsp+20h] [rbp-30h]
  __int128 v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  SAFEARRAYBOUND rgsabound; // [rsp+90h] [rbp+40h] BYREF
  SAFEARRAY *v32; // [rsp+98h] [rbp+48h] BYREF

  if ( !*((_QWORD *)this + 124) || !*((_BYTE *)this + 984) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  v28 = 0LL;
  LOWORD(v28) = 4;
  v29 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  DWORD2(v28) = *((_DWORD *)this + 212);
  if ( v2 )
    LeaveCriticalSection(v2);
  v4 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               v3,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v4 > 4u )
  {
    rgsabound.cElements = DWORD2(v28);
    v32 = (SAFEARRAY *)*((_QWORD *)this + 91);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (_DWORD)v4,
      (unsigned int)&unk_1801666C9,
      v5,
      v6,
      (__int64)&v32,
      (__int64)&rgsabound);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 124) + 48LL))(
         *((_QWORD *)this + 124),
         &PKEY_AudioSession_MasterVolume,
         &v28);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11D9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v7,
      v27);
  v8 = 0LL;
  v32 = 0LL;
  EnterCriticalSection(v2);
  v10 = *((_DWORD *)this + 240);
  if ( v10 )
  {
    rgsabound.cElements = *((_DWORD *)this + 240);
    rgsabound.lLbound = 0;
    v11 = SafeArrayCreate(4u, 1u, &rgsabound);
    v32 = v11;
    v8 = v11;
    if ( v11 )
    {
      v12 = SafeArrayLock(v11);
      if ( v12 >= 0 )
      {
        v10 = *((_DWORD *)this + 240);
        v13 = 0;
        if ( v10 )
        {
          while ( 1 )
          {
            rgsabound.cElements = *(_DWORD *)(*((_QWORD *)this + 121) + 4LL * v13);
            v14 = ATL::CComSafeArray<float,4>::SetAt(&v32, v13, &rgsabound);
            if ( v14 < 0 )
              break;
            v10 = *((_DWORD *)this + 240);
            if ( ++v13 >= v10 )
              goto LABEL_15;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x11EC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v14,
            v27);
          v10 = 0;
        }
        goto LABEL_15;
      }
    }
    else
    {
      v12 = -2147024882;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11E8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v12,
      v27);
    v10 = *((_DWORD *)this + 240);
  }
LABEL_15:
  v15 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                v9,
                                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 1);
  if ( *v15 > 4u )
  {
    *(_QWORD *)&v28 = *((_QWORD *)this + 121);
    WORD4(v28) = *((_WORD *)this + 480);
    rgsabound = (SAFEARRAYBOUND)*((_QWORD *)this + 91);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
      (_DWORD)v15,
      (unsigned int)&unk_180166661,
      v16,
      v17,
      (__int64)&rgsabound,
      (__int64)&v28);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v10 )
  {
    v18 = *((_QWORD *)this + 124);
    *((_QWORD *)&v28 + 1) = v8;
    LOWORD(v28) = 8196;
    v19 = (*(__int64 (__fastcall **)(__int64, void *, __int128 *))(*(_QWORD *)v18 + 48LL))(
            v18,
            &PKEY_AudioSession_ChannelVolume,
            &v28);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1202,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v19,
        v27);
  }
  ATL::CComSafeArray<float,4>::Destroy(&v32);
  v29 = 0LL;
  v28 = 0LL;
  LOWORD(v28) = 11;
  EnterCriticalSection(v2);
  WORD4(v28) = -1;
  if ( !*((_DWORD *)this + 213) )
    WORD4(v28) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  v21 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                v20,
                                _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                  + 1);
  if ( *v21 > 4u )
  {
    v32 = (SAFEARRAY *)*((_QWORD *)this + 91);
    LOBYTE(rgsabound.cElements) = WORD4(v28) == 0xFFFF;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
      (_DWORD)v21,
      (unsigned int)&unk_18016660B,
      v22,
      v23,
      (__int64)&v32,
      (__int64)&rgsabound);
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 124) + 48LL))(
          *((_QWORD *)this + 124),
          &PKEY_AudioSession_Mute,
          &v28);
  if ( v24 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1218,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v24,
      v27);
  v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 124) + 56LL))(*((_QWORD *)this + 124));
  if ( v25 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v25,
      v27);
  return 0LL;
}
