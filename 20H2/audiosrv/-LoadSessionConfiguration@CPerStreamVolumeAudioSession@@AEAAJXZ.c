/*
 * XREFs of ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180050A34
 * Callers:
 *     ?CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z @ 0x180002B80 (-CompleteConstruction@CPerStreamVolumeAudioSession@@EEAAJK@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     ?GetUpperBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x18005117C (-GetUpperBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ?GetLowerBound@?$CComSafeArray@M$03@ATL@@QEBAJI@Z @ 0x1800511C0 (-GetLowerBound@-$CComSafeArray@M$03@ATL@@QEBAJI@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180051204 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperArray@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperArray@$03@@@Z @ 0x180051308 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperArray@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051424 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?GetCount@?$CComSafeArray@M$03@ATL@@QEBAKI@Z @ 0x180051528 (-GetCount@-$CComSafeArray@M$03@ATL@@QEBAKI@Z.c)
 *     ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x180051598 (-CopyFrom@-$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x18005164C (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800B75BC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LoadSessionConfiguration(CPerStreamVolumeAudioSession *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // edi
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *pvData; // rcx
  int v14; // edi
  __int64 v15; // r14
  int LowerBound; // r15d
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edi
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  int v26; // r8d
  int v27; // r9d
  _DWORD *v29; // rdi
  int v30; // r8d
  int v31; // r9d
  unsigned int Count; // ecx
  unsigned __int64 v33; // rax
  void *v34; // rax
  void *v35; // rcx
  int v36; // [rsp+20h] [rbp-50h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v38; // [rsp+50h] [rbp-20h]
  PROPVARIANT v39[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v40; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  __int64 v42; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+48h] BYREF
  SAFEARRAY *ppsaOut; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v45; // [rsp+C8h] [rbp+58h] BYREF

  v38 = 0LL;
  v2 = *((_QWORD *)this + 124);
  *(_OWORD *)pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_AudioSession_MasterVolume,
         pvar);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1147,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v3,
      v36);
  if ( !v4 && LOWORD(pvar[0]) == 4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    *((_DWORD *)this + 212) = pvar[1];
    v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                 v5,
                                 _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                   + 1);
    if ( *v6 > 4u )
    {
      LODWORD(v42) = *((_DWORD *)this + 212);
      v43 = *((_QWORD *)this + 91);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        (_DWORD)v6,
        (unsigned int)&unk_180166875,
        v7,
        v8,
        (__int64)&v43,
        (__int64)&v42);
    }
    if ( this != (CPerStreamVolumeAudioSession *)-808LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  }
  PropVariantClear(pvar);
  v9 = *((_QWORD *)this + 124);
  v40 = 0LL;
  *(_OWORD *)v39 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
          v9,
          &PKEY_AudioSession_ChannelVolume,
          v39);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x115D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v10,
      v36);
  if ( !v11 && LOWORD(v39[0]) == 8196 )
  {
    ppsaOut = 0LL;
    v12 = ATL::CComSafeArray<float,4>::CopyFrom(&ppsaOut, (SAFEARRAY *)v39[1]);
    if ( v12 < 0 )
      ATL::AtlThrowImpl(v12);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    if ( *((_DWORD *)this + 240)
      && *((_DWORD *)this + 240) != (unsigned int)ATL::CComSafeArray<float,4>::GetCount(&ppsaOut) )
    {
      v29 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    (__int64)pvData,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v29 > 4u )
      {
        LODWORD(v42) = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
        LODWORD(v43) = *((_DWORD *)this + 240);
        v45 = *((_QWORD *)this + 91);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (_DWORD)v29,
          (unsigned int)&unk_180166775,
          v30,
          v31,
          (__int64)&v45,
          (__int64)&v43,
          (__int64)&v42);
      }
    }
    else
    {
      if ( *((_QWORD *)this + 121) )
        goto LABEL_17;
      Count = ATL::CComSafeArray<float,4>::GetCount(&ppsaOut);
      v33 = 4LL * Count;
      *((_DWORD *)this + 240) = Count;
      if ( !is_mul_ok(Count, 4uLL) )
        v33 = -1LL;
      v34 = operator new[](v33, (const struct std::nothrow_t *)&std::nothrow);
      v35 = (void *)*((_QWORD *)this + 121);
      *((_QWORD *)this + 121) = v34;
      if ( v35 )
      {
        operator delete(v35);
        v34 = (void *)*((_QWORD *)this + 121);
      }
      if ( v34 )
      {
        memset_0(v34, 0, 4LL * *((unsigned int *)this + 240));
        if ( *((_QWORD *)this + 121) )
        {
LABEL_17:
          v14 = 0;
          if ( *((int *)this + 240) > 0 )
          {
            v15 = 0LL;
            do
            {
              if ( !ppsaOut )
                ATL::AtlThrowImpl(-2147467259);
              LowerBound = ATL::CComSafeArray<float,4>::GetLowerBound(&ppsaOut);
              if ( v14 < LowerBound || v14 > (int)ATL::CComSafeArray<float,4>::GetUpperBound(&ppsaOut) )
                ATL::AtlThrowImpl(-2147024809);
              v17 = v14 - LowerBound;
              ++v14;
              pvData = ppsaOut->pvData;
              *(_DWORD *)(v15 + *((_QWORD *)this + 121)) = pvData[v17];
              v15 += 4LL;
            }
            while ( v14 < *((_DWORD *)this + 240) );
          }
          v18 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                        (__int64)pvData,
                                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                          + 1);
          if ( *v18 > 4u )
          {
            pvar[0] = *((PROPVARIANT *)this + 121);
            LOWORD(pvar[1]) = *((_WORD *)this + 480);
            v42 = *((_QWORD *)this + 91);
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperArray<4>>(
              (_DWORD)v18,
              (unsigned int)&unk_180166810,
              v19,
              v20,
              (__int64)&v42,
              (__int64)pvar);
          }
        }
      }
    }
    if ( this != (CPerStreamVolumeAudioSession *)-808LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    ATL::CComSafeArray<float,4>::Destroy(&ppsaOut);
  }
  PropVariantClear(v39);
  v21 = *((_QWORD *)this + 124);
  v38 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
          v21,
          &PKEY_AudioSession_Mute,
          pvar);
  v23 = v22;
  if ( v22 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x119D,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v22,
      v36);
  if ( !v23 && LOWORD(pvar[0]) == 11 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
    v25 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                  v24,
                                  _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                    + 1);
    if ( *v25 > 4u )
    {
      v43 = *((_QWORD *)this + 91);
      LOBYTE(v42) = LOWORD(pvar[1]) == 0xFFFF;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        (_DWORD)v25,
        (unsigned int)&unk_180166722,
        v26,
        v27,
        (__int64)&v43,
        (__int64)&v42);
    }
    *((_DWORD *)this + 213) = LOWORD(pvar[1]) == 0xFFFF;
    if ( this != (CPerStreamVolumeAudioSession *)-808LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  }
  PropVariantClear(pvar);
  return 0LL;
}
