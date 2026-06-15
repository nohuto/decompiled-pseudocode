/*
 * XREFs of ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C77D0
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C7AE0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C7B80 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051BC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x180052D1C (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800C7224 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x1800C7BD4 (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x1800C9E6C (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800CB0E0 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::Disconnect(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  enum AudioSessionDisconnectReason v8; // edi
  void ***v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // r15
  __int64 v13; // r14
  unsigned int v14; // r15d
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  ATL::CAtlException *v19; // rbx
  void *v20[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-60h]
  void (__fastcall **v23[2])(_QWORD, __int64 *); // [rsp+50h] [rbp-58h] BYREF
  int v24; // [rsp+60h] [rbp-48h]
  ATL::CAtlException *v25[2]; // [rsp+68h] [rbp-40h] BYREF
  ATL::CAtlException *v26; // [rsp+78h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+C8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               a1,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v5 > 4u )
  {
    LODWORD(v30) = v3;
    v20[0] = *(void **)(v4 + 712);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      (__int64)v5,
      byte_180167CBB,
      v6,
      v7,
      v20,
      (__int64)&v30);
  }
  v21 = v4 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  v8 = DisconnectReasonExclusiveModeOverride;
  if ( v3 == 5 && (!*(_QWORD *)(v4 + 88) || *(_BYTE *)(**(_QWORD **)(v4 + 80) + 52LL)) )
  {
    if ( v4 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 32));
    return 0LL;
  }
  while ( 2 )
  {
    if ( *(_QWORD *)(v4 + 88) )
    {
      v10 = (void ***)(v4 + 80);
      try
      {
        v20[0] = **v10;
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v10, 0LL);
      }
      catch ( ATL::CAtlException *v25 )
      {
        v19 = v25[0];
        if ( *(_DWORD *)v25[0] == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v30) = *(_DWORD *)v19;
        v8 = DisconnectReasonExclusiveModeOverride;
        v4 = a1;
        v3 = a2;
        if ( (int)v30 >= 0 )
          goto LABEL_44;
        continue;
      }
LABEL_44:
      try
      {
        v12 = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
        v11 = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
        v30 = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
        EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 112));
        v25[1] = (ATL::CAtlException *)(v4 + 112);
        ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((_QWORD *)(v4 + 152), v20);
      }
      catch ( ATL::CAtlException *v26 )
      {
        if ( *(_DWORD *)v26 == -1073741571 )
          _o__resetstkoflw();
        v8 = DisconnectReasonExclusiveModeOverride;
        v4 = a1;
        v3 = a2;
        v11 = v30;
        v12 = v30;
      }
      if ( v12 )
        LeaveCriticalSection(v11);
      continue;
    }
    break;
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  v13 = v4 - 16;
  v14 = CAudioSession::DisconnectStreamList((CAudioSession *)(v4 - 16));
  if ( !*(_DWORD *)(v4 + 392) )
    CAudioSession::PostStateCheckExpirationWork((CAudioSession *)(v4 - 16));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v4 - 16);
  v23[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionDisconnected::`vftable';
  v23[1] = (void (__fastcall **)(_QWORD, __int64 *))(v4 - 16);
  v24 = v3;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)(v4 + 480), v23);
  if ( a3 )
  {
    if ( v3 )
    {
      v15 = v3 - 1;
      if ( !v15 )
        goto LABEL_26;
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 != 1 )
LABEL_26:
              v8 = DisconnectReasonServerShutdown;
          }
          else
          {
            v8 = DisconnectReasonSessionDisconnected;
          }
        }
        else
        {
          v8 = DisconnectReasonSessionLogoff;
        }
      }
      else
      {
        v8 = DisconnectReasonFormatChanged;
      }
    }
    else
    {
      v8 = DisconnectReasonDeviceRemoval;
    }
    CAudioSession::NotifyClientOfDisconnection((CAudioSession *)(v4 - 16), v8);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v4 - 16);
  return v14;
}
