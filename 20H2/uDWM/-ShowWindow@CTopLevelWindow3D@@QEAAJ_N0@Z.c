/*
 * XREFs of ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18000F270
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001996C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009AA8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x18000F3BC (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18000F478 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018F70 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180022030 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x1800253FC (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800809C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180082F44 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ShowWindow(const struct CWindowData **this, bool a2, char a3)
{
  unsigned int v3; // ebx
  const struct CWindowData *v6; // r11
  CLivePreview *v7; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // eax
  const struct CWindowData *v14; // rax
  int v15; // eax
  int v16; // eax
  int started; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 || (*((_BYTE *)this[41] + 612) & 2) != 0 )
  {
    if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, 0) )
    {
      started = CTopLevelWindow3D::StartDelayHideAnimation((CTopLevelWindow3D *)this);
      v3 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x125u);
    }
    else if ( !this[45] || *((_DWORD *)this + 92) != 3 )
    {
      v10 = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x12Eu);
      }
      else
      {
        v11 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this[41] + 48), 0);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x130u);
      }
    }
  }
  else if ( CTopLevelWindow3D::ShouldDelayTransition((CTopLevelWindow3D *)this, a2) )
  {
    v15 = CTopLevelWindow3D::StartAnimation(this, 7LL);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x10Eu);
  }
  else
  {
    if ( !(unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, 1LL) )
      goto LABEL_5;
    if ( !a3 )
    {
      v14 = this[41];
      if ( *((_DWORD *)v14 + 154) != 93 )
      {
LABEL_5:
        if ( !this[45] )
        {
          v6 = this[41];
          v7 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
          if ( !*((_BYTE *)v7 + 280) || !v6 || !CLivePreview::_IsInLivePreview(v7, this[41]) )
          {
            v9 = CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)v6 + 48), 1);
            v3 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x11Du);
          }
        }
        return v3;
      }
      *((_DWORD *)v14 + 154) = 4095;
    }
    if ( this[45] )
    {
      v16 = CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x115,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v16,
          v18);
    }
    v13 = CTopLevelWindow3D::StartAnimation(this, 1LL);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x117u);
  }
  return v3;
}
