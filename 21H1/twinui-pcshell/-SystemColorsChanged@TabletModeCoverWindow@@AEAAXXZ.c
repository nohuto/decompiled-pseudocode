/*
 * XREFs of ?SystemColorsChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1803F30D8
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803F3450 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1803F2294 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ @ 0x1803F3218 (-UpdateWindowOrder@TabletModeCoverWindow@@AEAAJXZ.c)
 */

void __fastcall TabletModeCoverWindow::SystemColorsChanged(RTL_SRWLOCK *this)
{
  int DesktopThumbnail; // eax
  HWND Ptr; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( IsPPIEdition() )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v5, this + 14);
    if ( LOBYTE(this[25].Ptr) )
    {
      DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)this);
      if ( DesktopThumbnail < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1CE,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)DesktopThumbnail);
        Ptr = (HWND)this[13].Ptr;
        LOBYTE(this[25].Ptr) = 0;
        ShowWindow(Ptr, 0);
      }
      TabletModeCoverWindow::UpdateWindowOrder((TabletModeCoverWindow *)this);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v5);
  }
}
