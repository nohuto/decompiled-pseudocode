/*
 * XREFs of ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x18041D810
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x18041CA74 (-CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z @ 0x18041CED0 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@W4GhostDividerPlacement@@@Z.c)
 *     ?GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18041D040 (-GetViewForWindow@JointResize@@AEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18041DEFC (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 *     ?RegisterViewChanges@JointResize@@AEAAX_N@Z @ 0x18041DFD0 (-RegisterViewChanges@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowBorderEnter(JointResize *this, HWND a2, int a3, char a4)
{
  int GhostDivider; // eax
  tagCURSORINFO pci; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v10; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 136) )
    goto LABEL_10;
  if ( (a4 & 2) != 0 )
    goto LABEL_10;
  pci.cbSize = 24;
  memset(&pci.flags, 0, 20);
  if ( GetCursorInfo(&pci) )
  {
    if ( (pci.flags & 1) == 0 )
      goto LABEL_10;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( (int)JointResize::GetViewForWindow((JointResize *)((char *)this - 88), a2, &v10) < 0
    || (int)JointResize::CalculateSecondaryView(
              (JointResize *)((char *)this - 88),
              (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v10,
              a3) < 0 )
  {
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
LABEL_10:
    (*(void (__fastcall **)(JointResize *))(*(_QWORD *)this + 32LL))(this);
    return;
  }
  GhostDivider = JointResize::CreateGhostDivider((_QWORD *)this - 11, 1u, a3 != 10);
  if ( GhostDivider < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB6,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)GhostDivider);
    goto LABEL_9;
  }
  JointResize::RegisterRawInput((JointResize *)((char *)this - 88), 1);
  JointResize::RegisterViewChanges((JointResize *)((char *)this - 88), 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
}
