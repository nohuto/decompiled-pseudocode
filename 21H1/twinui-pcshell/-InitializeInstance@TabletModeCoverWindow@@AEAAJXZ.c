/*
 * XREFs of ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1803F2B0C
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1803F3450 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18004FE94 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18011D168 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x1803F3160 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 */

__int64 __fastcall TabletModeCoverWindow::InitializeInstance(TabletModeCoverWindow *this)
{
  __int64 *v2; // rax
  HRESULT Service; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  enum _TABLETMODESTATE *v7; // rdx
  TabletModeHelpers *v8; // rcx
  char IsTabletMode; // al
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, (RTL_SRWLOCK *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  v2 = CWRLObjectWithGITSite::SiteUnk((__int64)this, &v14);
  Service = IUnknown_QueryService(
              (IUnknown *)*v2,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              (void **)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( Service < 0 )
  {
    v4 = (unsigned int)Service;
    v5 = 394LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)v4);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
    goto LABEL_8;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 88LL))(
         *((_QWORD *)this + 17),
         (char *)this + 204);
  Service = v6;
  if ( v6 < 0 )
  {
    v4 = (unsigned int)v6;
    v5 = 395LL;
    goto LABEL_5;
  }
  SetWindowPos(
    *((HWND *)this + 13),
    0LL,
    *((_DWORD *)this + 51),
    *((_DWORD *)this + 52),
    *((_DWORD *)this + 53) - *((_DWORD *)this + 51),
    *((_DWORD *)this + 54) - *((_DWORD *)this + 52),
    0x14u);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v8, v7);
  v10 = TabletModeCoverWindow::TabletModeChanged((TabletModeCoverWindow *)((char *)this + 80), IsTabletMode);
  Service = v10;
  if ( v10 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x190,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v10);
LABEL_8:
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v13, (RTL_SRWLOCK *)this + 14);
  *((_BYTE *)this + 200) = 0;
  ShowWindow(*((HWND *)this + 13), 0);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return (unsigned int)Service;
}
