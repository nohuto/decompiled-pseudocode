/*
 * XREFs of ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18001225C
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D264 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z @ 0x180012018 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z.c)
 *     ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ @ 0x180012234 (-UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800123E0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180012420 (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJXZ @ 0x180012490 (-Initialize@CTopLevelWindow3D@@MEAAJXZ.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x180013A2C (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x180051318 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800954DC (-SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800959FC (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___ @ 0x180095C34 (CWindowList--ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___.c)
 */

__int64 __fastcall CWindowList::EnsureTopLevelWindow(CWindowList *this, struct CWindowData *a2)
{
  int v4; // eax
  CTopLevelWindow *v5; // rsi
  int v6; // edi
  HWND v7; // rdx
  int updated; // ebx
  CTopLevelWindow3D *v9; // r14
  CTopLevelWindow3D *v10; // rax
  CTopLevelWindow3D *v11; // rdi
  int v12; // eax
  bool v13; // dl
  struct CWindowData *v14; // rax
  char *v15; // rax
  char v16; // cl
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct CWindowData *v20; // [rsp+68h] [rbp+38h] BYREF
  CTopLevelWindow *v21; // [rsp+70h] [rbp+40h] BYREF

  v20 = a2;
  if ( *((_QWORD *)a2 + 48) )
    return 0LL;
  v21 = 0LL;
  v4 = CTopLevelWindow::Create(&v21);
  v5 = v21;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3Fu);
  }
  else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
  {
    v7 = (HWND)*((_QWORD *)a2 + 5);
    if ( v7 )
    {
      if ( (*((_BYTE *)a2 + 612) & 0x40) == 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(v5, v7, a2);
    }
  }
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *((_QWORD *)v5 + 91) = v20;
  *((_QWORD *)v20 + 48) = v5;
  updated = CTopLevelWindow::UpdateRemoteAppRenderTargetOpacity(v5);
  if ( updated < 0 )
  {
    v18 = 1718LL;
    goto LABEL_27;
  }
  v9 = 0LL;
  v10 = (CTopLevelWindow3D *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                               WPF::g_pProcessHeap,
                               488LL);
  if ( v10 )
    v11 = CTopLevelWindow3D::CTopLevelWindow3D(v10);
  else
    v11 = 0LL;
  if ( !v11 )
  {
    updated = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x40u);
LABEL_30:
    v9 = 0LL;
    goto LABEL_15;
  }
  v12 = CTopLevelWindow3D::Initialize(v11);
  updated = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x40u);
  }
  else
  {
    v9 = v11;
    v11 = 0LL;
    updated = 0;
  }
  if ( updated < 0 )
    goto LABEL_30;
LABEL_15:
  if ( v11 )
    CBaseObject::Release(v11);
  if ( updated < 0 )
  {
    v18 = 1721LL;
  }
  else
  {
    v14 = v20;
    *((_QWORD *)v9 + 41) = v20;
    *(_OWORD *)((char *)v9 + 308) = *((_OWORD *)v14 + 3);
    *((_QWORD *)v20 + 49) = v9;
    v15 = (char *)v20;
    if ( (*((_BYTE *)v20 + 611) & 4) != 0 )
    {
      updated = CVisual::SetIsMagnifier(v5, v13);
      if ( updated < 0 )
      {
        v18 = 1727LL;
        goto LABEL_27;
      }
      *((_BYTE *)v20 + 611) &= ~4u;
      v15 = (char *)v20;
    }
    if ( v15[611] < 0 )
    {
      CTopLevelWindow::SetVisualProtectContent(v5, 1);
      v15 = (char *)v20;
    }
    if ( (v15[612] & 4) == 0 )
    {
LABEL_22:
      v16 = v15[613];
      if ( (v16 & 0x10) != 0 )
      {
        v15[613] = v16 & 0xEF;
        updated = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 65)
                                                                            + 112LL))(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
                    *(_QWORD *)(*((_QWORD *)v20 + 75) + 40LL),
                    *((_QWORD *)v20 + 5),
                    0LL);
        if ( updated < 0 )
        {
          v18 = 1754LL;
          goto LABEL_27;
        }
      }
      return 0LL;
    }
    updated = CVisual::SetIsCursor(v5, 1);
    if ( updated >= 0 )
    {
      v21 = (CTopLevelWindow *)&v20;
      CWindowList::ForEachSoftwareCursorListener__lambda_7c5effa24c2ac0907debb037ead5d2df___(this, &v21);
      v15 = (char *)v20;
      goto LABEL_22;
    }
    v18 = 1738LL;
  }
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
