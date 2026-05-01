/*
 * XREFs of ?_ImmersiveShellQueryService@ShellFeedsExperienceManagerImpl@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18009E19C
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009D468 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 *     ?_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009F034 (-_RegisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009F6F4 (-_UnregisterMessages@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x18009DF38 (-_GetImmersiveShell@ShellFeedsExperienceManagerImpl@@AEAAJPEAPEAUIServiceProvider@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_ImmersiveShellQueryService(
        ShellFeedsExperienceManagerImpl *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int ImmersiveShell; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IServiceProvider *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  ImmersiveShell = ShellFeedsExperienceManagerImpl::_GetImmersiveShell(this, v12);
  v9 = ImmersiveShell;
  if ( ImmersiveShell >= 0 )
  {
    ImmersiveShell = ((__int64 (__fastcall *)(struct IServiceProvider *, const struct _GUID *, const struct _GUID *, void **))v12[0]->lpVtbl->QueryService)(
                       v12[0],
                       a2,
                       a3,
                       a4);
    v9 = ImmersiveShell;
    if ( ImmersiveShell >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = 642LL;
  }
  else
  {
    v10 = 641LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)ImmersiveShell);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
  return v9;
}
