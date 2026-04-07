/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180043980
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x180043760 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180015678 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180018F70 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180022A2C (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x180026600 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAPEAV1@@Z @ 0x1800278D4 (-Create@CTopLevelWindow@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EB34 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CC8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004457C (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004471C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x1800447E8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180044864 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800448E0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180044960 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800449D8 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180044A40 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180044A98 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ @ 0x180055C38 (-GetWindowTabOwner@CWindowData@@QEAAPEAUHWND__@@XZ.c)
 *     ?SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z @ 0x180055F3C (-SetWindowTabOwner@CWindowData@@QEAAXPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v3; // rax
  unsigned int v4; // ebx
  int v5; // r9d
  CTopLevelWindow **v6; // rsi
  int inserted; // eax
  HWND WindowTabOwner; // rax
  struct CVisual **v9; // r15
  char *v10; // r14
  unsigned int v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        768LL);
  if ( v3 )
    v3 = CWindowData::CWindowData(v3);
  *((_QWORD *)this + 10) = v3;
  if ( !v3 )
  {
    v4 = -2147024882;
    v12 = 101;
    v5 = -2147024882;
LABEL_5:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, v12);
    return v4;
  }
  v6 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create((struct CCanvasVisual ***)this + 11);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 106;
LABEL_8:
    v5 = inserted;
    goto LABEL_5;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 384LL) = *v6;
  if ( *v6 )
    _InterlockedIncrement((volatile signed __int32 *)*v6 + 2);
  *(_QWORD *)(*((_QWORD *)this + 10) + 424LL) = this;
  *((_QWORD *)*v6 + 91) = *((_QWORD *)this + 10);
  *((_BYTE *)*v6 + 240) |= 0x20u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  WindowTabOwner = CWindowData::GetWindowTabOwner(*((CWindowData **)this + 9));
  CWindowData::SetWindowTabOwner(*((CWindowData **)this + 10), WindowTabOwner);
  v9 = (struct CVisual **)((char *)this + 104);
  *(_BYTE *)(*((_QWORD *)this + 10) + 609LL) |= 0x10u;
  inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 13);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 135;
    goto LABEL_8;
  }
  inserted = CImage::Create((struct CImage **)this + 12);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 136;
    goto LABEL_8;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v9 + 32),
               *((struct CVisual **)this + 12),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 137;
    goto LABEL_8;
  }
  v10 = (char *)this + 112;
  inserted = CVisual::Create((struct CVisual **)this + 14);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 138;
    goto LABEL_8;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v10 + 32LL), *v9, 0LL, 0, 1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 139;
    goto LABEL_8;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 128LL) = *(_QWORD *)(*(_QWORD *)v10 + 16LL);
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
    this,
    (enum IconicRepresentationType *)&v13);
  inserted = CWindowIconic::SetRepresentationType(this, v13, 0LL);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 147;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 148;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 149;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 150;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 151;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 376LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 610LL) & 8) != 0,
                 0);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v12 = 154;
      goto LABEL_8;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 156;
    goto LABEL_8;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 157;
    goto LABEL_8;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 158;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v6, 1);
  return v4;
}
