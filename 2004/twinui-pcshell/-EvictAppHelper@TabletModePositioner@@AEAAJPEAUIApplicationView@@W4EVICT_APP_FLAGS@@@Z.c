/*
 * XREFs of ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803F6E90
 * Callers:
 *     ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803F6210 (-ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkno.c)
 *     ?SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803FB6C0 (-SetViewStateForDesiredAppState@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_D.c)
 *     ?ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180400E58 (-ViewRemoved@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@TabletModeTraceLogging@@@Z @ 0x180401060 (-ViewRestored@TabletModePositioner@@AEAAXPEAUIApplicationView@@VShellTrackedWindowPosChanged@Tab.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ @ 0x1800B4FA8 (-IsSurfaceHubWithWin32VtcEnabled@@YA_NXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800B6BA0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803F46C4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803F8CF4 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModePositioner::EvictAppHelper(IUnknown *a1, __int64 a2, unsigned int a3)
{
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int inited; // eax
  __int64 v11; // rdx
  struct IUnknown *v13; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v14; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v16; // [rsp+78h] [rbp+38h] BYREF

  if ( !IsSurfaceHubWithWin32VtcEnabled() )
  {
LABEL_15:
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               a1,
               &CLSID_AppSwitchOperation,
               &GUID_b3b709e2_bf68_4d75_b725_6b7d34fa01d3,
               (void **)&v14);
    v8 = inited;
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v14->lpVtbl[2].AddRef)(v14, a2, a3);
      v8 = inited;
      if ( inited >= 0 )
      {
        inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v14);
        v8 = inited;
        if ( inited >= 0 )
        {
          v8 = 0;
          goto LABEL_23;
        }
        v11 = 2920LL;
      }
      else
      {
        v11 = 2919LL;
      }
    }
    else
    {
      v11 = 2918LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_23:
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v14);
    return v8;
  }
  v16 = 0;
  v13 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v13);
  v7 = TabletModePositioner::InitLayoutOperationHelper(
         a1,
         &CLSID_PPIWin32VtcLayoutOperation,
         &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
         (void **)v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 2907LL;
    goto LABEL_11;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, int *))v13->lpVtbl[2].AddRef)(v13, a2, 1LL, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 2908LL;
    goto LABEL_11;
  }
  if ( !v16 )
  {
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v13);
    goto LABEL_15;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD))v13->lpVtbl[2].QueryInterface)(v13, a2, a3);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = TabletModePositioner::ApplyLayoutOperationHelper(a1, v13);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_13;
    }
    v9 = 2912LL;
  }
  else
  {
    v9 = 2911LL;
  }
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
LABEL_13:
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v13);
  return v8;
}
