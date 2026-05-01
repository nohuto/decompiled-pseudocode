/*
 * XREFs of ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x1803D9E88
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1803D39B4 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1803D7C34 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803D7D94 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1803D9EF0 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::SetAppLayout(TabletModePositioner *this, struct IAppLayout *a2)
{
  _QWORD *v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 248);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 31, (__int64)a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 32) + 24LL))(*((_QWORD *)this + 32), *v2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x742,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
