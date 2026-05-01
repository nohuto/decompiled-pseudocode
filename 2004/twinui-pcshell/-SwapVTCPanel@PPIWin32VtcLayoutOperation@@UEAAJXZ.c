/*
 * XREFs of ?SwapVTCPanel@PPIWin32VtcLayoutOperation@@UEAAJXZ @ 0x1800B8A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$PPIWin32Vtc_SideBarSwapped@_N@TabletModeTelemetry@@SAX$$QEA_N@Z @ 0x1800B7494 (--$PPIWin32Vtc_SideBarSwapped@_N@TabletModeTelemetry@@SAX$$QEA_N@Z.c)
 *     ?_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800B90E0 (-_FinalizeLayout@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800B9AC4 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800B9C3C (-_QueryInsertAppToLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@W4APP_LAYOUT_INS.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801479A4 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18047F10C (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::SwapVTCPanel(PPIWin32VtcLayoutOperation *this)
{
  PPIWin32VtcLayoutOperation *v2; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int EvictAppFromLayout; // eax
  __int64 v6; // rdx
  unsigned __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  bool v11; // [rsp+50h] [rbp+20h] BYREF
  struct IApplicationView *v12; // [rsp+58h] [rbp+28h] BYREF

  v2 = (PPIWin32VtcLayoutOperation *)((char *)this - 176);
  v8 = ((unsigned __int64)this + 16) & -(__int64)(this != (PPIWin32VtcLayoutOperation *)176);
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v8, 1);
  v3 = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD))(*(_QWORD *)v2 + 48LL))(v2, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView **, _QWORD))(*(_QWORD *)v2 + 160LL))(
                           v2,
                           &v12,
                           0LL);
    v4 = EvictAppFromLayout;
    if ( EvictAppFromLayout >= 0 )
    {
      EvictAppFromLayout = PPIWin32VtcLayoutOperation::_QueryEvictAppFromLayout(v2, v12, 0LL);
      v4 = EvictAppFromLayout;
      if ( EvictAppFromLayout >= 0 )
      {
        CAppLayoutOperation::_AddAnimationData((char *)this - 152, v12, 2LL);
        *((_DWORD *)this - 18) = 65539;
        PPIWin32VtcLayoutOperation::_sideBarLocation = PPIWin32VtcLayoutOperation::_sideBarLocation != 1;
        EvictAppFromLayout = PPIWin32VtcLayoutOperation::_QueryInsertAppToLayout(v2, v12);
        v4 = EvictAppFromLayout;
        if ( EvictAppFromLayout >= 0 )
        {
          EvictAppFromLayout = PPIWin32VtcLayoutOperation::_FinalizeLayout(v2);
          v4 = EvictAppFromLayout;
          if ( EvictAppFromLayout >= 0 )
          {
            v11 = PPIWin32VtcLayoutOperation::_sideBarLocation == 1;
            TabletModeTelemetry::PPIWin32Vtc_SideBarSwapped<bool>((char *)&v11);
            v4 = 0;
            goto LABEL_13;
          }
          v6 = 331LL;
        }
        else
        {
          v6 = 330LL;
        }
      }
      else
      {
        v6 = 320LL;
      }
    }
    else
    {
      v6 = 319LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)EvictAppFromLayout);
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)v3);
LABEL_14:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)&v8);
  return v4;
}
