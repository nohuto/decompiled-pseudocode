/*
 * XREFs of ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x180186610
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18000C898 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18015AF5C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x180186C8C (-s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CTaskWindow::SendVisibilityChanged(CTaskWindow *this, __int64 a2)
{
  struct IUnknown *v4; // r9
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, struct IUnknown **); // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct IUnknown *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v9 = 0LL;
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    v6 = *(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v5 + 464LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    v6(v5, &v9);
    v4 = v9;
  }
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 392LL))(v7, (unsigned int)(a2 & 1) + 3);
    v8 = (*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
    if ( v8 )
      CReportWindowVisibilityChange::ReportOwnedWindowsVisibilityChange(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        v8,
        1u,
        (struct IImmersiveMonitor *)v9,
        *((struct IImmersiveApplicationInternal **)this + 16),
        a2);
  }
  else
  {
    CReportWindowVisibilityChange::ReportWindowsVisibilityChange(
      (__int64)&CApplicationManagerUtility::g_pIAMGlobals[1],
      *((HWND *)this + 4),
      13,
      v4,
      *((struct IImmersiveApplicationInternal **)this + 16),
      a2);
    CTaskWindow::s_UpdateDelayedVisibilityTimestamp((CTaskWindow *)((char *)this + 32), a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
}
