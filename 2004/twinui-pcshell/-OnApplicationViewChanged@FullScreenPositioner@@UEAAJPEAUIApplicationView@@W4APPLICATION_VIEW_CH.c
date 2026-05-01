/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006F980
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18006FB30 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x18006FBB4 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801A5FA8 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1801A6BD0 (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1801A6F70 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801A74B4 (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801A7AA8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3)
{
  FullScreenPositioner *v6; // rdi
  struct IApplicationView *v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rcx
  int v12; // eax
  FullScreenPositioner *v13; // rsi
  _QWORD v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v16; // [rsp+40h] [rbp+10h] BYREF

  if ( !*(_DWORD *)(a1 + 208) )
    return 0LL;
  if ( (_DWORD)a3 == 1 )
  {
    v13 = (FullScreenPositioner *)(a1 - 152);
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 88), a2) )
      FullScreenPositioner::SetVisibleView(v13, 0LL);
    FullScreenPositioner::RemoveView(v13, (struct IApplicationView *)a2);
    return 0LL;
  }
  if ( (int)a3 <= 6 )
    return 0LL;
  if ( (int)a3 <= 8 )
  {
    if ( !ApplicationViewHelpers::IsViewOnMonitor(
            (ApplicationViewHelpers *)a2,
            *(struct IApplicationView **)(a1 + 80),
            a3)
      || (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 88), a2) )
    {
      return 0LL;
    }
    LODWORD(v16) = 0;
    v14[0] = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, _QWORD *))a2->lpVtbl[11].QueryInterface)(a2, v14) >= 0
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 24LL))(v14[0]) == 3 )
    {
      v12 = FullScreenPositioner::FullScreenViewGetsFocus(
              (FullScreenPositioner *)(a1 - 152),
              (struct IApplicationView *)a2);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x30D,
          (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
          (const char *)(unsigned int)v12);
        v11 = v14;
        goto LABEL_26;
      }
    }
    else if ( (!v14[0] || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 24LL))(v14[0]) != 5)
           && ((int (__fastcall *)(struct IUnknown *, __int64 *))a2->lpVtbl[14].QueryInterface)(a2, &v16) >= 0
           && !(_DWORD)v16 )
    {
      v6 = (FullScreenPositioner *)(a1 - 152);
      v7 = (struct IApplicationView *)*((_QWORD *)v6 + 30);
      if ( v7 )
      {
        if ( !FullScreenPositioner::IsLightweightFullScreen(v6, v7) )
          FullScreenPositioner::PositionView(v6, *((_QWORD *)v6 + 30), 2LL);
        FullScreenPositioner::SetVisibleView(v6, 0LL);
      }
    }
    v8 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return 0LL;
  }
  if ( (_DWORD)a3 != 9
    || !ApplicationViewHelpers::IsViewOnMonitor(
          (ApplicationViewHelpers *)a2,
          *(struct IApplicationView **)(a1 + 80),
          a3) )
  {
    return 0LL;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))a2->lpVtbl[11].QueryInterface)(a2, &v16) >= 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) == 3
    || (v9 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 152)), v10 = v9, v9 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32E,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v9);
  v11 = &v16;
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  return v10;
}
