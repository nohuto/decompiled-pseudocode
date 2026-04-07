/*
 * XREFs of ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180029D20 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800172D0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180024E74 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18002A2C0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002B80C (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18002C24C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18002C410 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x18003F840 (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnWindowStyleUpdated(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  int v3; // edx
  int v4; // ecx
  char v5; // al
  __int64 v7; // r11
  CLivePreview *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  int started; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v15; // ebx
  CTopLevelWindow *v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edi
  int v22; // eax
  unsigned int v23; // esi
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // eax
  unsigned int v27; // edi
  int v28; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 41);
  v3 = *(_DWORD *)(v1 + 100) & 0x20000000;
  v4 = *(_DWORD *)(v1 + 100) & 0x1000000;
  v5 = v4 != 0;
  if ( *((_BYTE *)this + 288) == (v3 != 0) )
  {
    if ( v5 == *((_BYTE *)this + 289) || v3 )
      return 0LL;
    *((_BYTE *)this + 289) = v5;
    v21 = 2;
    if ( !v4 )
      v21 = 4;
    if ( !(unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, v21) )
      return 0LL;
    v22 = CTopLevelWindow3D::EnsureSecondaryWindowRepresentation(this);
    v23 = v22;
    if ( v22 >= 0 )
    {
      v24 = *(_OWORD *)(*((_QWORD *)this + 41) + 48LL);
      *((_DWORD *)this + 93) = v21;
      *(_OWORD *)((char *)this + 308) = v24;
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x234,
      (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)(unsigned int)v22);
    return v23;
  }
  else
  {
    *((_BYTE *)this + 288) = v3 != 0;
    *((_BYTE *)this + 289) = v5;
    if ( (unsigned __int8)CTopLevelWindow3D::ShouldShowTransition(this, 3LL) )
    {
      v11 = *((_QWORD *)this + 41);
      if ( *((_BYTE *)this + 288) )
      {
        if ( (*(_BYTE *)(v11 + 608) & 0x40) == 0 && !CTopLevelWindow3D::IsWindowInSystemArrangementAnimation(this) )
        {
          if ( *((_QWORD *)this + 45) )
          {
            v25 = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
            if ( v25 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x207,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
                (const char *)(unsigned int)v25,
                v28);
          }
          started = CTopLevelWindow3D::StartAnimation((__int64)this, 3u);
          v13 = started;
          if ( started < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x209,
              (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)started);
            return v13;
          }
        }
      }
      else
      {
        v16 = *(CTopLevelWindow **)(v11 + 384);
        if ( (*(_BYTE *)(v11 + 611) & 0x10) != 0 )
        {
          v26 = CTopLevelWindow::ShowWindow(v16, 1);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x210,
              (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v26);
            return v27;
          }
          *(_BYTE *)(*((_QWORD *)this + 41) + 611LL) &= ~0x10u;
        }
        else
        {
          v17 = CTopLevelWindow::ShowWindow(v16, 0);
          v18 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x218,
              (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v17);
            return v18;
          }
          *((_BYTE *)this + 480) = 1;
          v19 = CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21A,
              (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v19);
            return v20;
          }
        }
      }
      v14 = CTopLevelWindow3D::OnZOrderUpdated(this, 1);
      v15 = v14;
      if ( v14 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x221,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    else
    {
      v7 = *((_QWORD *)this + 41);
      v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
      if ( *((_BYTE *)v8 + 280) && v7 && CLivePreview::_IsInLivePreview(v8, *((const struct CWindowData **)this + 41)) )
        return 0LL;
      v9 = CTopLevelWindow::ShowWindow(*(CTopLevelWindow **)(v7 + 384), 1);
      v10 = v9;
      if ( v9 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x227,
        (__int64)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
  }
}
