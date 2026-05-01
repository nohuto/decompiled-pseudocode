/*
 * XREFs of ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002FA70
 * Callers:
 *     ?OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180081DB0 (-OnViewEvent@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 * Callees:
 *     ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18001B6DC (-GetViewWrapper@SearchAppDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 *     ?CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001BB24 (-CalculateLastActivatedTrayItemRect@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x18001C6D0 (-ShowBorder@SearchAppDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ??$?0PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG@Z @ 0x180020954 (--$-0PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@AEAA@U-$integral_con.c)
 *     ??1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ @ 0x180020A18 (--1CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002118C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18002B6E0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002FD58 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180080918 (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x18008095C (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     ?OnWindowSizeChangeHandled@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180086A34 (-OnWindowSizeChangeHandled@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$GetViewWrapperAs@UINtUserViewWrapper@@@SearchAppDesktopExperienceView@@AEAAJAEAV?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Z @ 0x1802060F8 (--$GetViewWrapperAs@UINtUserViewWrapper@@@SearchAppDesktopExperienceView@@AEAAJAEAV-$ComPtr@UINt.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SearchAppDesktopExperienceView::OnViewEventQueued(
        SearchAppDesktopExperienceView *this,
        HSTRING string,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  WINBOOL v19; // edx
  int v20; // edi
  bool v22; // di
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  int ViewWrapper; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // r8
  int v32[2]; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int8 v33[8]; // [rsp+28h] [rbp-D8h] BYREF
  struct tagRECT v34; // [rsp+30h] [rbp-D0h] BYREF
  float v35[6]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h]
  _BYTE v37[320]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *(_QWORD *)v32 = string;
  v5 = 0;
  *(_QWORD *)&v34.left = WindowsGetStringRawBuffer(string, 0LL);
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::CortanaExperienceManager_OnEventQueued(
    (CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v37,
    v6,
    (const unsigned __int16 **)&v34);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_1804911F0);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v7) )
  {
    v25 = 0LL;
LABEL_30:
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 80LL))(*((_QWORD *)this + 10), v25);
    goto LABEL_13;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491208);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v8) )
  {
    v25 = 1LL;
    goto LABEL_30;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491200);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v9) )
  {
    v25 = 2LL;
    goto LABEL_30;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_1804911F8);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v10) )
  {
    v25 = 3LL;
    goto LABEL_30;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491210);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v11) )
  {
    v23 = SearchAppDesktopExperienceView::DismissCortanaApp(this);
    v20 = v23;
    if ( v23 >= 0 )
      goto LABEL_13;
    v26 = (unsigned int)v23;
    v27 = 844LL;
LABEL_46:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)v26,
      v32[0]);
    goto LABEL_14;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491220);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v12) )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
    goto LABEL_13;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491218);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v13) )
  {
    *((_BYTE *)this + 204) = 1;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
    goto LABEL_13;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491238);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v14) )
  {
    *((_BYTE *)this + 204) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
    goto LABEL_13;
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491228);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v15) )
  {
    SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
    v22 = 0;
    if ( *((_BYTE *)this + 210) )
    {
      v5 = 1;
      if ( *SearchAppDesktopExperienceView::GetViewWrapper((__int64)this, v32) )
        v22 = 1;
    }
    if ( (v5 & 1) != 0 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
    if ( !v22 )
      goto LABEL_13;
    *((_BYTE *)this + 210) = 0;
    *(_QWORD *)v32 = 0LL;
    ViewWrapper = SearchAppDesktopExperienceView::GetViewWrapperAs<INtUserViewWrapper>(this, v32);
    v20 = ViewWrapper;
    if ( ViewWrapper >= 0 )
    {
      ViewWrapper = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v32 + 24LL))(*(_QWORD *)v32, 0LL);
      v20 = ViewWrapper;
      if ( ViewWrapper >= 0 )
      {
        ViewWrapper = SearchAppDesktopExperienceView::CalculateLastActivatedTrayItemRect(this, &v34);
        v20 = ViewWrapper;
        if ( ViewWrapper >= 0 )
        {
          v35[0] = (float)v34.left;
          v35[1] = (float)v34.top;
          v35[2] = (float)(v34.right - v34.left);
          v35[3] = (float)(v34.bottom - v34.top);
          (*(void (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 10) + 136LL))(*((_QWORD *)this + 10), v35);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
          goto LABEL_13;
        }
        v29 = 873LL;
      }
      else
      {
        v29 = 870LL;
      }
    }
    else
    {
      v29 = 869LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)ViewWrapper,
      v32[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
    goto LABEL_14;
  }
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491250);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v16) )
  {
    *((_BYTE *)this + 212) = 0;
    SearchAppDesktopExperienceView::ShowBorder(this, 0LL);
    goto LABEL_13;
  }
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491248);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v17) )
  {
    v24 = SearchAppDesktopExperienceView::OnWindowSizeChangeHandled(this);
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x379,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v24,
        v32[0]);
    goto LABEL_13;
  }
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, &off_180491258);
  if ( (unsigned __int8)Microsoft::WRL::Wrappers::operator==(v32, v18) )
  {
    *(_QWORD *)v32 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v32);
    v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v35, off_1804D0140);
    v20 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v32,
            *(_QWORD *)(v30 + 24),
            v31,
            v33);
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v32);
    if ( v20 >= 0 )
    {
      SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, v33[0]);
      goto LABEL_13;
    }
    v26 = (unsigned int)v20;
    v27 = 894LL;
    goto LABEL_46;
  }
LABEL_13:
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v37,
    v19);
  v20 = 0;
LABEL_14:
  CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::~CortanaExperienceManager_OnEventQueued((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)v37);
  return (unsigned int)v20;
}
