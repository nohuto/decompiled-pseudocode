/*
 * XREFs of ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x180033980
 * Callers:
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x1800338F0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x1800473C0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18000263C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$Write@U?$_tlgWrapperArray@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@7@Z @ 0x1800D21C0 (--$Write@U-$_tlgWrapperArray@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::RecalculateVolume(CAudioStream *this, char a2, __int64 a3)
{
  char v3; // si
  unsigned int v5; // r15d
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  int v13; // edi
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64, __int64 *); // rax
  int v19; // eax
  int v20; // ebx
  _QWORD *v21; // rsi
  _QWORD *i; // rdi
  int v24; // eax
  int v25; // edi
  const wchar_t *v26; // rax
  int v27; // ebx
  __int64 v28; // rdi
  WINBOOL v29; // esi
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // edi
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rcx
  const wchar_t *v36; // rcx
  __int16 v37; // dx
  __int64 v38; // rdx
  int v39; // [rsp+50h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+54h] [rbp-35h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-31h] BYREF
  __int64 v42; // [rsp+60h] [rbp-29h] BYREF
  const wchar_t *v43; // [rsp+68h] [rbp-21h] BYREF
  int v44[2]; // [rsp+70h] [rbp-19h] BYREF
  char *v45; // [rsp+78h] [rbp-11h] BYREF
  __int64 v46; // [rsp+80h] [rbp-9h] BYREF
  __int16 v47; // [rsp+88h] [rbp-1h]
  char *v48; // [rsp+90h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  unsigned __int8 v50; // [rsp+F0h] [rbp+67h] BYREF
  char v51; // [rsp+F8h] [rbp+6Fh]
  __int64 v52; // [rsp+100h] [rbp+77h]
  __int64 v53; // [rsp+108h] [rbp+7Fh] BYREF

  v52 = a3;
  v51 = a2;
  v3 = a2;
  v5 = 0;
  if ( !*((_QWORD *)this + 22) || !*((_QWORD *)this + 23) )
  {
LABEL_33:
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 48LL))(this);
    return v5;
  }
  v6 = 0;
  v7 = *((unsigned int *)this + 23);
  if ( (_DWORD)v7 )
  {
    v8 = *((_QWORD *)this + 15);
    do
    {
      *(_DWORD *)(v8 + 4LL * v6++) = 1065353216;
      v7 = *((unsigned int *)this + 23);
    }
    while ( v6 < (unsigned int)v7 );
  }
  v9 = (*(__int64 (__fastcall **)(CAudioStream *, __int64, _QWORD, unsigned __int8 *))(*(_QWORD *)this + 40LL))(
         this,
         v7,
         *((_QWORD *)this + 15),
         &v50);
  v10 = v9;
  if ( v9 >= 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    v48 = (char *)this + 136;
    v11 = *((_QWORD *)this + 23);
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v53);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4A5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v12,
          (int)v44);
      if ( v13 == -2147417848 )
      {
        LOBYTE(v53) = 0;
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 184);
      }
      v14 = *((_QWORD *)this + 23);
      if ( v14 && !v13 && ((_BYTE)v53 != 0) != (v50 != 0) )
      {
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, v50, 0LL, 0LL);
        v25 = v24;
        if ( v24 >= 0 )
        {
          if ( *((_QWORD *)this + 9) )
          {
            v26 = (const wchar_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                 (__int64)retaddr,
                                                 _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                   + 1);
            v43 = v26;
            if ( *(_DWORD *)v26 > 4u )
            {
              if ( (unsigned __int8)tlgKeywordOn(v26, 0x400000000000LL) )
              {
                v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
                v28 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8);
                v29 = v50;
                v39 = v27;
                Context = (LPVOID)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9));
                v42 = v28;
                fPending = v29;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  (__int64)v43,
                  byte_180167F60,
                  v30,
                  v31,
                  (__int64)&fPending,
                  (__int64)&v42,
                  &Context,
                  (__int64)&v39);
                v3 = v51;
              }
            }
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x4B2,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v24,
            0);
          if ( v25 == -2147417848 )
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 184);
        }
      }
    }
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_18019F828;
      qword_18019F828 = &wil::details::FeatureLogging::`vftable';
      qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register(
        (wil::TraceLoggingProvider *)&qword_18019F828,
        qword_18019F840,
        (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
    }
    v15 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
      v35 = *((_QWORD *)this + 9);
      if ( v35 )
        v36 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 64LL))(v35);
      else
        v36 = L"null";
      v39 = *((_DWORD *)this + 25);
      LODWORD(v42) = v32;
      v43 = v36;
      v45 = (char *)*((_QWORD *)this + 41);
      LOBYTE(v53) = v50;
      v37 = *((_WORD *)this + 46);
      v46 = *((_QWORD *)this + 15);
      v47 = v37;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v15,
        (unsigned int)&unk_180167EEB,
        v33,
        v34,
        (__int64)&v46,
        (__int64)&v53,
        (__int64)&v45,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v39);
    }
    v16 = *((_QWORD *)this + 22);
    if ( v16 )
    {
      v53 = 0LL;
      v17 = *((_QWORD *)this + 15);
      if ( v3 )
      {
        v38 = v52;
        if ( v52 <= *(__int64 *)v44 )
          v38 = *(_QWORD *)v44;
        v52 = v38;
        v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v16 + 48LL);
      }
      else
      {
        v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v16 + 32LL);
      }
      v19 = v18(v16, *((unsigned int *)this + 23), v17, &v53);
      v20 = v19;
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x4F2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v19,
          1);
      if ( v20 == -2147417848 )
      {
        wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((char *)this + 176);
        v20 = 0;
      }
      v5 = v20;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
    v45 = (char *)this + 232;
    LODWORD(v53) = 0;
    (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 88LL))((char *)this + 8, &v53);
    v21 = (_QWORD *)*((_QWORD *)this + 35);
    for ( i = (_QWORD *)*((_QWORD *)this + 34); i != v21; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, *((_QWORD *)this + 7));
    if ( this != (CAudioStream *)-232LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
    if ( this != (CAudioStream *)-136LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49B,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)v9,
    (int)v44);
  return v10;
}
