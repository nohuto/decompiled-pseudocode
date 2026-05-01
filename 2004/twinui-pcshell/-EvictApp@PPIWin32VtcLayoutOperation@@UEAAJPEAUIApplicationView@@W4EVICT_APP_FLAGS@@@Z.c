/*
 * XREFs of ?EvictApp@PPIWin32VtcLayoutOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1800B7C30
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x18008C650 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ??$PPIWin32Vtc_SideBarEvicted@I@TabletModeTelemetry@@SAX$$QEAI@Z @ 0x1800B73B4 (--$PPIWin32Vtc_SideBarEvicted@I@TabletModeTelemetry@@SAX$$QEAI@Z.c)
 *     ?_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x1800B91A0 (-_FindAppOnLayoutByActivationTime@PPIWin32VtcLayoutOperation@@AEAAJW4ActivationTime@1@PEAPEAUIAp.c)
 *     ?_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1800B9AC4 (-_QueryEvictAppFromLayout@PPIWin32VtcLayoutOperation@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1801479A4 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18047F10C (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PPIWin32VtcLayoutOperation::EvictApp(__int64 a1, struct IApplicationView *a2, char a3)
{
  PPIWin32VtcLayoutOperation *v6; // rdi
  int EvictAppFromLayout; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int IsThreadRTL; // eax
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int WindowForView; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF

  v6 = (PPIWin32VtcLayoutOperation *)(a1 - 176);
  v12 = (a1 + 16) & -(__int64)(a1 != 176);
  v13 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v12, 1);
  EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  v8 = EvictAppFromLayout;
  if ( EvictAppFromLayout >= 0 )
  {
    LOBYTE(WindowForView) = 0;
    EvictAppFromLayout = PPIWin32VtcLayoutOperation::_QueryEvictAppFromLayout(v6, a2, (bool *)&WindowForView);
    v8 = EvictAppFromLayout;
    if ( EvictAppFromLayout >= 0 )
    {
      CAppLayoutOperation::_AddAnimationData(a1 - 152, a2, 8 * (a3 & 1u) + 2);
      *(_DWORD *)(a1 - 72) = 1;
      if ( (a3 & 2) == 0
        && (*(unsigned int (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)v6 + 88LL))(v6, 1LL) )
      {
        v16 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        if ( (int)PPIWin32VtcLayoutOperation::_FindAppOnLayoutByActivationTime(v6, 0LL, &v16, 0LL) >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v16);
          *(_DWORD *)(a1 - 72) |= 2u;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      }
      if ( (_BYTE)WindowForView
        && (EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *, __int64))(*(_QWORD *)v6 + 192LL))(
                                   v6,
                                   2LL),
            v8 = EvictAppFromLayout,
            EvictAppFromLayout < 0) )
      {
        v9 = 118LL;
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(PPIWin32VtcLayoutOperation *, struct IApplicationView *))(*(_QWORD *)v6 + 168LL))(
                v6,
                a2)
          || (IsThreadRTL = Mirror_IsThreadRTL(),
              PPIWin32VtcLayoutOperation::_sideBarLocation = IsThreadRTL == 0,
              WindowForView = ApplicationViewHelpers::GetWindowForView(
                                (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
                                (struct IApplicationView *)(IsThreadRTL == 0)),
              TabletModeTelemetry::PPIWin32Vtc_SideBarEvicted<unsigned int>(&WindowForView),
              EvictAppFromLayout = (*(__int64 (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)v6 + 200LL))(v6),
              v8 = EvictAppFromLayout,
              EvictAppFromLayout >= 0) )
        {
          v8 = 0;
          goto LABEL_18;
        }
        v9 = 130LL;
      }
    }
    else
    {
      v9 = 97LL;
    }
  }
  else
  {
    v9 = 93LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
    (const char *)(unsigned int)EvictAppFromLayout);
LABEL_18:
  CThreadUseDetector::~CThreadUseDetector((CThreadUseDetector *)&v12);
  return v8;
}
