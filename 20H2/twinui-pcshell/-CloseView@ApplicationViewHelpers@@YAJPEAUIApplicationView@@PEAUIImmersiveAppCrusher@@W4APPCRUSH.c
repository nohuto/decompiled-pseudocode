/*
 * XREFs of ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x180471700
 * Callers:
 *     ?SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1801A74F0 (-SetViewStateForDesiredAppState@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802434CC (-_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_bdd0359c0a840136f7e57cf4fcf6522b_::operator() @ 0x180258E34 (_lambda_bdd0359c0a840136f7e57cf4fcf6522b_--operator().c)
 *     ?CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18026C4CC (-CloseView@TabViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _lambda_95ea086e3b8fa056e55a3a293b600f83_::operator() @ 0x180324CAC (_lambda_95ea086e3b8fa056e55a3a293b600f83_--operator().c)
 *     ?CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1803A49A0 (-CloseSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803DA694 (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803E2280 (-SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATI.c)
 *     ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EEB14 (-_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803FADA0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x18040EDA8 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x18045E2D4 (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180045060 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0fe7ca22b45d32197121ecf13016f570___ @ 0x18047147C (Windows--Internal--ComTaskPool--QueueTask__lambda_0fe7ca22b45d32197121ecf13016f570___.c)
 *     _lambda_0fe7ca22b45d32197121ecf13016f570_::_lambda_0fe7ca22b45d32197121ecf13016f570_ @ 0x180471508 (_lambda_0fe7ca22b45d32197121ecf13016f570_--_lambda_0fe7ca22b45d32197121ecf13016f570_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewHelpers::CloseView(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        int a3,
        int a4,
        char a5)
{
  unsigned int v7; // edi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  HWND hwnd; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int pvAttribute; // [rsp+A0h] [rbp+20h] BYREF
  int v30; // [rsp+B0h] [rbp+30h] BYREF
  int v31; // [rsp+B8h] [rbp+38h] BYREF

  v31 = a4;
  v30 = a3;
  v25[1] = -2LL;
  v7 = 0;
  v24 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  if ( (int)(**a1)(a1, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v24) < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v12 = (**a1)(a1, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v23);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x94,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_22;
    }
    if ( !a2 )
    {
      v9 = -2147019873;
      v10 = 2147947423LL;
      v11 = 150LL;
      goto LABEL_11;
    }
    hwnd = 0LL;
    v13 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hwnd);
    v14 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 24LL))(v13, &hwnd);
    v9 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v14);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&hwnd);
      goto LABEL_21;
    }
    v21 = 0LL;
    pvAttribute = 2;
    v25[0] = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
    v15 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v21,
            (__int64)&GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            v25,
            &pvAttribute);
    v9 = v15;
    if ( v15 >= 0 )
    {
      v18 = lambda_0fe7ca22b45d32197121ecf13016f570_::_lambda_0fe7ca22b45d32197121ecf13016f570_(
              (__int64)&v26,
              &v21,
              &hwnd,
              &v30,
              &v31,
              &a5);
      v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_0fe7ca22b45d32197121ecf13016f570___(v19, v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v26);
      if ( v9 >= 0 )
      {
LABEL_19:
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v21);
        goto LABEL_20;
      }
      v16 = (unsigned int)v9;
      v17 = 168LL;
    }
    else
    {
      v16 = (unsigned int)v15;
      v17 = 160LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v16);
    goto LABEL_19;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v24 + 24LL))(v24, &hwnd);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 132LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
      (const char *)v10);
LABEL_21:
    v7 = v9;
    goto LABEL_22;
  }
  if ( (a5 & 1) != 0 )
  {
    pvAttribute = 1;
    DwmSetWindowAttribute(hwnd, 3u, &pvAttribute, 4u);
  }
  PostMessageW(hwnd, 0x112u, 0xF060uLL, 0LL);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  return v7;
}
