/*
 * XREFs of ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180019A60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180018460 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ @ 0x180033710 (-InternalAddRef@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7238 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@455@Z @ 0x1800B7378 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U2@U3@U3@.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B8020 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x1800B80B8 (-GetVIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B99E8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCInputRouter::UpdateFocusedInputTarget(MPCInputRouter *this, struct IInputTarget *a2)
{
  __int64 v4; // r12
  __int64 v5; // r15
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  bool v8; // si
  _DWORD *v9; // rcx
  __int64 v10; // rdi
  int updated; // eax
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-79h]
  WINBOOL v17; // [rsp+60h] [rbp-39h] BYREF
  unsigned int VIDOfTarget; // [rsp+64h] [rbp-35h] BYREF
  int v19; // [rsp+68h] [rbp-31h] BYREF
  unsigned int PIDOfTarget; // [rsp+6Ch] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+70h] [rbp-29h] BYREF
  __int64 v22; // [rsp+78h] [rbp-21h] BYREF
  struct IInputTarget *v23; // [rsp+80h] [rbp-19h] BYREF
  __int64 v24; // [rsp+88h] [rbp-11h] BYREF
  struct IInputTarget *v25; // [rsp+90h] [rbp-9h] BYREF
  LPVOID v26; // [rsp+98h] [rbp-1h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+B0h] [rbp+17h] BYREF
  struct IInputTarget *v30; // [rsp+B8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  bool v32; // [rsp+100h] [rbp+67h] BYREF
  int v33; // [rsp+110h] [rbp+77h] BYREF
  WINBOOL fPending; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)this + 102);
  v5 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1802094E8;
    qword_1802094E8 = &RawInputProvidersContinuousTracing::`vftable';
    qword_180209500 = (struct _tlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802094E8, qword_180209500, 0LL);
    InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, &qword_1802094E8);
  }
  v6 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v6 && *v6 )
  {
    v26 = 0LL;
    if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &v17, &v26) && v17 )
    {
      v26 = &qword_1802094E8;
      qword_1802094E8 = &RawInputProvidersContinuousTracing::`vftable';
      qword_180209500 = (struct _tlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1802094E8, qword_180209500, 0LL);
      InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, &qword_1802094E8);
    }
    v8 = *((_BYTE *)this + 864) != 0;
    v9 = *(_DWORD **)(wil::details::static_lazy<ISMTracing>::get(
                        v7,
                        _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                    + 8);
    if ( v9 )
    {
      if ( *v9 )
      {
        v10 = *(_QWORD *)(wil::details::static_lazy<ISMTracing>::get(
                            v9,
                            _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                        + 8);
        if ( *(_DWORD *)v10 > 4u
          && (*(_BYTE *)(v10 + 16) & 1) != 0
          && (*(_QWORD *)(v10 + 24) & 1LL) == *(_QWORD *)(v10 + 24) )
        {
          VIDOfTarget = ISMTracing::GetVIDOfTarget(a2);
          v13 = 0;
          v33 = 0;
          if ( a2 )
          {
            v23 = a2;
            Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(&v23);
            v22 = 0LL;
            if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v23, &v22) >= 0 && v22 )
              (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 56LL))(v22, &v33);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v22);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
            v13 = v33;
          }
          v19 = v13;
          v27 = 0LL;
          if ( a2 )
          {
            v25 = a2;
            Microsoft::WRL::ComPtr<IInputTarget>::InternalAddRef(&v25);
            v24 = 0LL;
            if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v25, &v24) >= 0 && v24 )
              (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 64LL))(v24, &v27);
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
            v5 = v27;
          }
          v28 = v5;
          PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
          v29 = v4;
          v30 = a2;
          v32 = v8;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v10,
            (unsigned int)&unk_1801CBD4B,
            v14,
            v15,
            (__int64)&v32,
            (__int64)&v30,
            (__int64)&v29,
            (__int64)&PIDOfTarget,
            (__int64)&v28,
            (__int64)&v19,
            (__int64)&VIDOfTarget);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 864) )
    MPCInputRouter::UpdateFocusedInputTarget3D(this, a2);
  updated = DWMInputRouter::UpdateFocusedInputTarget(this, a2);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)updated,
      v16);
    JUMPOUT(0x18005B808LL);
  }
  return 0LL;
}
