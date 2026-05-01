/*
 * XREFs of ?GetAppsUseLightTheme@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x1800A64C0
 * Callers:
 *     ?BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING__@@@Z @ 0x1800A5964 (-BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING_.c)
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1800A77B0 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180209B7C (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18020D560 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellFeedsDesktopExperienceView::GetAppsUseLightTheme(ShellFeedsDesktopExperienceView *this)
{
  LSTATUS ValueW; // eax
  signed int v2; // ecx
  bool v3; // zf
  char result; // al
  ShellFeedsDesktopExperienceView *v5; // [rsp+50h] [rbp+8h] BYREF
  DWORD v6; // [rsp+58h] [rbp+10h] BYREF
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v5 = this;
  v6 = 0;
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"AppsUseLightTheme",
             0x10000012u,
             &v6,
             &v5,
             &v7);
  LOWORD(v2) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v2 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_13;
  }
  else if ( v6 == 4 )
  {
    if ( (unsigned int)v5 <= 1 )
    {
      v2 = 0;
      v3 = (_DWORD)v5 == 1;
LABEL_5:
      result = v3;
      goto LABEL_14;
    }
  }
  else if ( v7 == 4 && (unsigned __int16)((_WORD)v5 - 48) <= 1u )
  {
    v2 = 0;
    v3 = (_WORD)v5 == 49;
    goto LABEL_5;
  }
  v2 = (unsigned __int16)v2 | 0x80070000;
LABEL_13:
  result = (char)v5;
LABEL_14:
  if ( v2 < 0 )
    return 1;
  return result;
}
