/*
 * XREFs of ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A23B0
 * Callers:
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJ_KPEAPEAVCTextTetherVisual@@@Z @ 0x18009D178 (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJ_KPEAPEAVCTextTetherVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D1C0 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800258E8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18002B984 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180036718 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B3C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EBE4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800468BC (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTextTetherVisual::Initialize(struct CBitmapSource **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  struct CBitmapSource **v4; // r14
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v7; // rsi
  int v8; // eax
  VisualCollection *v9; // rbp
  int inserted; // eax
  int v11; // eax
  struct tagSIZE **v12; // rsi
  void *v13; // rax
  int v14; // eax
  struct CImage **v15; // rdi
  int v16; // eax
  int v17; // eax
  struct tagSIZE *v18; // rdx
  CImage *v19; // rcx
  int v20; // eax
  struct tagSIZE v22; // [rsp+58h] [rbp+10h] BYREF

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = this + 49;
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 5, 0LL, this + 49);
    v3 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v7 = this + 50;
      v22 = (struct tagSIZE)*((_QWORD *)*v4 + 3);
      v8 = CImage::Create(this + 50);
      v3 = v8;
      if ( v8 >= 0 )
      {
        v9 = (VisualCollection *)(this + 4);
        inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v7, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetInterpolationMode((unsigned int *)*v7, 6u);
          v11 = CImage::SetBitmapSource(*v7, *v4);
          v3 = v11;
          if ( v11 >= 0 )
          {
            CVisual::SetSize(*v7, &v22);
            CVisual::MoveToFront(*v7, 0);
            v12 = (struct tagSIZE **)(this + 51);
            v13 = (void *)CDesktopManager::GetTheme(1);
            v14 = CTopLevelWindow::CreateBitmapFromAtlas(v13, 4, 0LL, this + 51);
            v3 = v14;
            if ( v14 >= 0 )
            {
              v15 = this + 52;
              v16 = CImage::Create(v15);
              v3 = v16;
              if ( v16 >= 0 )
              {
                v17 = VisualCollection::InsertRelative(v9, *v15, 0LL, 0, 1);
                v3 = v17;
                if ( v17 >= 0 )
                {
                  CVisual::SetInterpolationMode((unsigned int *)*v15, 6u);
                  v18 = *v12;
                  v19 = *v15;
                  v22 = (*v12)[3];
                  v20 = CImage::SetBitmapSource(v19, (struct CBitmapSource *)v18);
                  v3 = v20;
                  if ( v20 >= 0 )
                  {
                    CVisual::SetSize(*v15, &v22);
                    CVisual::MoveToFront(*v15, 0);
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x4Cu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x48u);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x47u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x45u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x40u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3Eu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3Du);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x3Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x36u);
  }
  return v3;
}
