/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800172D0
 * Callers:
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180009B08 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180015CD8 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180016DA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180036214 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180043990 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180094B68 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x180095424 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800174B8 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x1800404A0 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180040D38 (-Unhide@CVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180092F54 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180093A28 (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char v2; // di
  __int64 v4; // rcx
  char v5; // al
  char v6; // cl
  bool v7; // al
  CVisual *v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  CProjectionBorderVisual *v11; // rcx
  CDesktopManager *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  struct CWindowData *v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r14
  CAccentBlurBehind *v20; // rcx
  bool v21; // dl
  struct CVisual *v22; // rdx
  __int64 v23; // rcx

  v2 = a2;
  if ( *((char *)this + 240) < 0 )
  {
    v2 = 1;
    goto LABEL_21;
  }
  v4 = *((_QWORD *)this + 91);
  v5 = *(_BYTE *)(v4 + 612) & 2;
  if ( v5 || (*((_BYTE *)this + 241) & 2) != 0 )
  {
    v2 = 0;
    goto LABEL_5;
  }
  if ( a2 )
  {
LABEL_21:
    v9 = CVisual::ConnectToParent(*((CVisual **)this + 32), 1);
    if ( (*((_BYTE *)this + 240) & 1) == 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
LABEL_5:
  v6 = *(_BYTE *)(v4 + 608);
  v7 = (v6 & 1) != 0 && !v5 && (v6 & 4) == 0;
  v8 = (CVisual *)*((_QWORD *)this + 32);
  if ( !v7 )
  {
    v9 = CVisual::ConnectToParent(v8, 0);
    if ( (*((_BYTE *)this + 240) & 1) == 0 )
      goto LABEL_13;
LABEL_22:
    CVisual::Unhide(this);
    *((_BYTE *)this + 240) &= ~1u;
    goto LABEL_13;
  }
  v9 = CVisual::ConnectToParent(v8, 1);
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 240) |= 1u;
  }
LABEL_13:
  v10 = *((_QWORD *)this + 91);
  v11 = *(CProjectionBorderVisual **)(v10 + 400);
  if ( v11 )
  {
    v21 = v2 && (*((_BYTE *)this + 241) & 1) == 0;
    CProjectionBorderVisual::Show(v11, v21);
    v10 = *((_QWORD *)this + 91);
    v22 = *(struct CVisual **)(v10 + 400);
    v23 = *((_QWORD *)v22 + 3);
    if ( v23 )
    {
      VisualCollection::InsertRelative((VisualCollection *)(v23 + 32), v22, this, 1, 1);
      v10 = *((_QWORD *)this + 91);
    }
  }
  v12 = CDesktopManager::s_pDesktopManagerInstance;
  *((_BYTE *)this + 817) = 1;
  v13 = 0;
  v14 = *((_QWORD *)v12 + 61);
  if ( *(_DWORD *)(v14 + 560) )
  {
    do
    {
      v15 = *(_QWORD *)(v14 + 536);
      if ( *(_DWORD *)(v15 + 16LL * v13 + 8) == 3 )
      {
        v17 = *(struct CWindowData **)(v15 + 16LL * v13);
        v18 = *((_QWORD *)v17 + 48);
        if ( v18 )
        {
          if ( !v10 || *((_QWORD *)v17 + 15) == *(_QWORD *)(v10 + 120) )
          {
            v19 = *(_QWORD *)(v18 + 272);
            if ( v19 )
            {
              v20 = *(CAccentBlurBehind **)(v19 + 336);
              if ( v20 )
              {
                if ( *((_QWORD *)v17 + 5) == *(_QWORD *)(v19 + 400)
                  || CAccentBlurBehind::IsBlurBehindDirty(
                       v20,
                       v17,
                       (const struct tagRECT *)(v19 + 616),
                       *(_QWORD *)(v19 + 408),
                       *(HWND *)(v19 + 400)) )
                {
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, 0x10000LL);
                }
              }
            }
          }
        }
      }
      ++v13;
    }
    while ( v13 < *(_DWORD *)(v14 + 560) );
  }
  return v9;
}
