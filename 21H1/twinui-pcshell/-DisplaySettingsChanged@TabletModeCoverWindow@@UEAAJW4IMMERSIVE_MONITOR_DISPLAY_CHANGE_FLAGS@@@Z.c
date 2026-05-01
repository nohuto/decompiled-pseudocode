/*
 * XREFs of ?DisplaySettingsChanged@TabletModeCoverWindow@@UEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803F2570
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F1A8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18016EB04 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ??$As@UICoverWindowAcc@@@?$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICoverWindowAcc@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803F1BC4 (--$As@UICoverWindowAcc@@@-$ComPtr@UIRawElementProviderSimple@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ?CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ @ 0x1803F2294 (-CreateDesktopThumbnail@TabletModeCoverWindow@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModeCoverWindow::DisplaySettingsChanged(__int64 a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int128 v7; // xmm6
  int *v8; // rdx
  int DesktopThumbnail; // eax
  HWND v10; // rcx
  int v11; // eax
  RTL_SRWLOCK *v13[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v13, (RTL_SRWLOCK *)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 || !*(_QWORD *)(a1 + 24) )
    goto LABEL_15;
  if ( (a2 & 0x10) == 0 )
  {
LABEL_10:
    if ( *(_QWORD *)(a1 + 104) && (a2 & 1) != 0 )
    {
      *(_QWORD *)&v15 = 0LL;
      v11 = Microsoft::WRL::ComPtr<IRawElementProviderSimple>::As<ICoverWindowAcc>(
              (_QWORD *)(a1 + 104),
              (__int64 *)&v15);
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA3,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
        goto LABEL_16;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 32LL))(v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    }
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 88LL))(v4, &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = v15;
    v14 = v15;
    if ( !Platform::Guid::Equals((Platform::Guid *)&v14, (const struct _GUID *)(a1 + 124)) )
    {
      *(_OWORD *)v8 = v7;
      SetWindowPos(
        *(HWND *)(a1 + 24),
        0LL,
        *v8,
        *(_DWORD *)(a1 + 128),
        v8[2] - *v8,
        *(_DWORD *)(a1 + 136) - *(_DWORD *)(a1 + 128),
        0x14u);
      if ( *(_BYTE *)(a1 + 120) )
      {
        DesktopThumbnail = TabletModeCoverWindow::CreateDesktopThumbnail((TabletModeCoverWindow *)(a1 - 80));
        if ( DesktopThumbnail < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x98,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
            (const char *)(unsigned int)DesktopThumbnail);
          v10 = *(HWND *)(a1 + 24);
          *(_BYTE *)(a1 + 120) = 0;
          ShowWindow(v10, 0);
        }
      }
    }
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x93,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v5);
LABEL_16:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v13);
  return v6;
}
