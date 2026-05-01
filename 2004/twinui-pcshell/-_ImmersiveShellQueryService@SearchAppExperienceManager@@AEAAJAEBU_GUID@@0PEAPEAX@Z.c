/*
 * XREFs of ?_ImmersiveShellQueryService@SearchAppExperienceManager@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1801F71D4
 * Callers:
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x1801F73DC (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_GetImmersiveShell@SearchAppExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z @ 0x1801F7138 (-_GetImmersiveShell@SearchAppExperienceManager@@AEAAJPEAPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::_ImmersiveShellQueryService(
        SearchAppExperienceManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int ImmersiveShell; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IServiceProvider *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  ImmersiveShell = SearchAppExperienceManager::_GetImmersiveShell(this, &v11);
  v7 = ImmersiveShell;
  if ( ImmersiveShell >= 0 )
  {
    ImmersiveShell = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, void **))v11->lpVtbl->QueryService)(
                       v11,
                       &IID_IImmersiveWindowMessageService,
                       &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                       a4);
    v7 = ImmersiveShell;
    if ( ImmersiveShell >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 712LL;
  }
  else
  {
    v8 = 711LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)ImmersiveShell);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  return v7;
}
