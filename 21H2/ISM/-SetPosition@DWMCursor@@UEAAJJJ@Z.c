/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x180021350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?FeedPositionAnimationData@DWMCursor@@AEAAJXZ @ 0x180020DA4 (-FeedPositionAnimationData@DWMCursor@@AEAAJXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180021240 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800212C4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x18002261C (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18009193C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B7238 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x18019BF18 (-GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, unsigned int a2, unsigned int a3)
{
  struct IDCompositionDevice *v6; // rbx
  LPVOID v7; // rax
  const char *v8; // r9
  int v9; // eax
  RTL_SRWLOCK *Instance; // rax
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // r10d
  DWMCursorBroker *v15; // rbx
  int DCompDevice; // eax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  RTL_SRWLOCK *v24; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v26; // eax
  struct IDCompositionDevice **v27; // [rsp+20h] [rbp-60h]
  struct IDCompositionDevice *v28; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-34h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h] BYREF
  int v32; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v33[6]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v6 = (struct IDCompositionDevice *)*((unsigned int *)this + 10);
  v7 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)this,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v7 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 8LL) )
  {
    v30 = a3;
    v29 = a2;
    v28 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (unsigned int)&unk_1801D2FCA,
      0,
      0,
      (__int64)&v28,
      (__int64)&v29,
      (__int64)&v30);
  }
  *((_DWORD *)this + 20) = a2;
  *((_DWORD *)this + 21) = a3;
  if ( *((_DWORD *)this + 10) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2, a3);
  if ( !ISMTestMode::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      v8);
    __debugbreak();
  }
  if ( *(_BYTE *)ISMTestMode::s_instance )
    goto LABEL_8;
  if ( *((_QWORD *)this + 7) )
  {
    v28 = 0LL;
    v15 = (DWMCursorBroker *)*((_QWORD *)this + 4);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
    DCompDevice = DWMCursorBroker::GetDCompDevice(v15, &v28);
    v12 = DCompDevice;
    if ( DCompDevice >= 0 )
    {
      DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 40LL))(
                      *((_QWORD *)this + 7),
                      2LL);
      v12 = DCompDevice;
      if ( DCompDevice >= 0 )
      {
        DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 40LL))(
                        *((_QWORD *)this + 7),
                        2LL,
                        1LL);
        v12 = DCompDevice;
        if ( DCompDevice >= 0 )
        {
          DCompDevice = (*(__int64 (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)v28 + 24LL))(v28);
          v12 = DCompDevice;
          if ( DCompDevice >= 0 )
          {
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
            goto LABEL_7;
          }
          v17 = 266LL;
        }
        else
        {
          v17 = 264LL;
        }
      }
      else
      {
        v17 = 263LL;
      }
    }
    else
    {
      v17 = 262LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)DCompDevice,
      (int)v27);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v28);
    return v12;
  }
LABEL_7:
  v9 = DWMCursor::FeedPositionAnimationData(this);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x10D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v9,
      (int)v27);
    __debugbreak();
  }
LABEL_8:
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::GetPostProcessor(Instance) )
  {
    v32 = 0;
    v29 = 0;
    v30 = 0;
    v28 = 0LL;
    v18 = *(_QWORD *)(*((_QWORD *)this + 4) + 448LL);
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v18 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
    v27 = &v28;
    v20 = v19(v18, 0LL, 0LL, 0LL);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x11E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v20,
        (int)&v28);
      __debugbreak();
    }
    v31 = 0LL;
    if ( v28 && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(&v28, &v31) >= 0 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 32LL))(v31, &v32);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x123,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v21,
          (int)&v28);
        __debugbreak();
      }
      v22 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 40LL))(v31, &v29);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x124,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v22,
          (int)&v28);
        __debugbreak();
      }
      v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 48LL))(v31, &v30);
      if ( v23 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x125,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v23,
          (int)&v28);
        __debugbreak();
      }
    }
    v33[0] = v32;
    v33[1] = v29;
    v33[2] = v30;
    v33[3] = a2;
    v33[4] = a3;
    v24 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v24);
    v26 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *))(*(_QWORD *)PostProcessor + 56LL))(
            PostProcessor,
            v33);
    v12 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x130,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v26,
        (int)&v28);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v31);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
      return v12;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v31);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  }
  v11 = DWMCursor::CheckAndUpdateDpiScale(this, 1);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x133,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v11,
    (int)v27);
  return v12;
}
