/*
 * XREFs of ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800652FC
 * Callers:
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180064FA0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800653A4 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::RegisterWithLightDismiss(
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **this)
{
  LSTATUS ValueW; // eax
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  DWORD v10; // [rsp+60h] [rbp+18h] BYREF
  DWORD v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0;
  v11 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
             L"DisableLightDismiss",
             0x10000012u,
             &v10,
             &v9,
             &v11);
  if ( !ValueW )
  {
    if ( v10 == 4 )
    {
      if ( v9 > 1 )
        goto LABEL_5;
      v3 = v9 == 1;
    }
    else
    {
      if ( v11 != 4 || (unsigned __int16)(v9 - 48) > 1u )
        goto LABEL_5;
      ValueW = 0;
      v3 = (_WORD)v9 == 49;
    }
    LOBYTE(ValueW) = v3;
    if ( ValueW )
      return 0LL;
  }
LABEL_5:
  v4 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (SingleViewLightDismissHelper *)(this + 42),
         (struct ILightDismissNotification *)(this + 1),
         this[18]);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v4,
    v7);
  return v5;
}
