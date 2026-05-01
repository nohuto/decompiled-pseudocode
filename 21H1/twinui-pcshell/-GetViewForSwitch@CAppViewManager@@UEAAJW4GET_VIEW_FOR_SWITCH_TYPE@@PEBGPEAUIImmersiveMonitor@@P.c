/*
 * XREFs of ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x180146A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18014C740 (-_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveM.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::GetViewForSwitch(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v7; // r14
  __int64 v8; // rbx
  int ViewForSwitchInternal; // ebx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v8 = a1 - 32;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  ViewForSwitchInternal = CAppViewManager::_GetViewForSwitchInternal(v8, a2, a3);
  if ( ViewForSwitchInternal >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*a5)(
            a5,
            &GUID_8b14e88b_5663_4caf_b196_c31479262831,
            v7);
    ViewForSwitchInternal = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x352,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ViewForSwitchInternal;
}
