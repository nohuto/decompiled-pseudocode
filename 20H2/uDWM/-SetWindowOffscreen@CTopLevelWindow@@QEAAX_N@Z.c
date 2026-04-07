/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18002C5D0
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18002C554 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002A5AC (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180092874 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?IsVisible@CVisual@@QEBA_NXZ @ 0x1800943D8 (-IsVisible@CVisual@@QEBA_NXZ.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x180095010 (McTemplateU0p_EtwEventWriteTransfer.c)
 */

void __fastcall CTopLevelWindow::SetWindowOffscreen(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow *v2; // rdi
  bool v3; // bl
  char v4; // cl
  __int64 v5; // r8
  struct CWindowData *v6; // rdx
  void *v7; // rdx
  CProjectionBorderVisual *v8; // r8

  v2 = this;
  v3 = 1;
  v4 = *((_BYTE *)this + 241);
  if ( (v4 & 1) == a2 )
    return;
  v5 = *((_QWORD *)v2 + 91);
  LOBYTE(this) = a2 | v4 & 0xFE;
  *((_BYTE *)v2 + 241) = (_BYTE)this;
  if ( v5 )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v7 = &UdwmSystemAnimation_MoveOffscreen_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v7 = &UdwmSystemAnimation_MoveOffscreen_Stop;
    }
    McTemplateU0p_EtwEventWriteTransfer(this, v7, *(_QWORD *)(v5 + 40));
  }
LABEL_5:
  v6 = (struct CWindowData *)*((_QWORD *)v2 + 91);
  if ( *((_QWORD *)v6 + 50) )
  {
    if ( !CVisual::IsVisible(*((CVisual **)v2 + 32)) || (*((_BYTE *)v2 + 241) & 1) != 0 )
      v3 = 0;
    CProjectionBorderVisual::Show(v8, v3);
    v6 = (struct CWindowData *)*((_QWORD *)v2 + 91);
  }
  CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), v6, 0);
}
