/*
 * XREFs of ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803FFD28
 * Callers:
 *     ?ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803F56B0 (-ControlGained@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknow.c)
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
__int64 __fastcall TabletModePositioner::SwitchToCustomLayoutHelper(IUnknown *a1, __int64 a2)
{
  __int64 *v4; // rax
  int inited; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  struct IUnknown *v10; // [rsp+48h] [rbp+28h] BYREF

  if ( IsSurfaceHubWithWin32VtcEnabled()
    && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 88LL))(a2, 4LL) )
  {
    v10 = 0LL;
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAppLayoutBuilder>>((__int64 *)&v10);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               a1,
               &CLSID_PPIWin32VtcLayoutOperation,
               &GUID_7f4d2785_4b93_429e_9250_0e9670706fba,
               (void **)v4);
    v6 = inited;
    if ( inited < 0 )
    {
      v7 = 2938LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)inited);
      Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v10);
      return v6;
    }
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl[4].Release)(v10, a2);
    v6 = inited;
    if ( inited < 0 )
    {
      v7 = 2939LL;
      goto LABEL_9;
    }
    inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v10);
    v6 = inited;
    if ( inited < 0 )
    {
      v7 = 2940LL;
      goto LABEL_9;
    }
  }
  else
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               a1,
               &CLSID_TabletModePositionerOperation,
               &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
               (void **)&v10);
    v6 = inited;
    if ( inited < 0 )
    {
      v7 = 2945LL;
      goto LABEL_9;
    }
    inited = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v10->lpVtbl[2].AddRef)(v10, a2, 4LL);
    v6 = inited;
    if ( inited < 0 )
    {
      v7 = 2946LL;
      goto LABEL_9;
    }
    inited = TabletModePositioner::ApplyLayoutOperationHelper(a1, v10);
    v6 = inited;
    if ( inited < 0 )
    {
      v7 = 2947LL;
      goto LABEL_9;
    }
  }
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v10);
  return 0LL;
}
