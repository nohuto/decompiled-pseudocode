/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180012A80
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180014C94 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001AC70 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180015F7C (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     IsOpenThemeDataPresent @ 0x180053C44 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v2; // ebx
  bool v4; // bp
  int v5; // edi
  unsigned int v6; // edx
  unsigned int v7; // r14d

  v2 = a2 & 9;
  v4 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v5 = a2 & 0x40;
  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v6 = 2101248;
    v7 = 16781312;
  }
  else
  {
    v6 = 0x200000;
    v7 = 0x1000000;
  }
  if ( v4 )
    CVisual::SetDirtyFlags(this, v6);
  if ( v2 )
    CTopLevelWindow::OnWindowScaleUpdated(this);
  if ( v5 )
    CVisual::SetDirtyFlags(this, v7);
}
