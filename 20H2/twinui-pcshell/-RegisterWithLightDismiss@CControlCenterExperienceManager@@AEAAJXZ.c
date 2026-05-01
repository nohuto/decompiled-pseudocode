/*
 * XREFs of ?RegisterWithLightDismiss@CControlCenterExperienceManager@@AEAAJXZ @ 0x1801B4D80
 * Callers:
 *     ?OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B4600 (-OnViewUncloaking@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180061D74 (-RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJPEAUILightDismissNotification@@PEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::RegisterWithLightDismiss(
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **this)
{
  LSTATUS ValueW; // eax
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF
  DWORD v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
             L"DisableLightDismiss",
             0x10000012u,
             &v9,
             &v8,
             &v10);
  if ( !ValueW )
  {
    if ( v9 == 4 )
    {
      if ( v8 <= 1 )
      {
        v3 = v8 == 1;
        goto LABEL_8;
      }
    }
    else if ( v10 == 4 && (unsigned __int16)(v8 - 48) <= 1u )
    {
      ValueW = 0;
      v3 = (_WORD)v8 == 49;
LABEL_8:
      LOBYTE(ValueW) = v3;
      if ( ValueW )
        return 0LL;
    }
  }
  v4 = SingleViewLightDismissHelper::RegisterWithLightDismiss(
         (SingleViewLightDismissHelper *)(this + 39),
         (struct ILightDismissNotification *)(this + 1),
         this[16]);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  return 0LL;
}
