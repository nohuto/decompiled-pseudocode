/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180047A10
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z @ 0x1800475A0 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJ_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025E70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180027E10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B400 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EB34 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048CA8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(struct tagSIZE *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  void *Theme; // rax
  struct CBitmapSource **v5; // r9
  int v6; // eax
  struct CVisual **v7; // rsi
  struct tagSIZE v8; // rcx
  int v9; // eax
  int inserted; // eax
  int BitmapFromAtlas; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x26u);
  }
  else
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    v5 = (struct CBitmapSource **)&this[52];
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 324LL) )
    {
      BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, v5);
      v3 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x2Cu);
        return v3;
      }
    }
    else
    {
      v6 = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v5);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x30u);
        return v3;
      }
    }
    v7 = (struct CVisual **)&this[51];
    v8 = *(struct tagSIZE *)(*(_QWORD *)&this[52] + 24LL);
    this[43].cx = 0;
    this[40] = v8;
    LOBYTE(this[50].cx) = 0;
    this[43].cy = 1065353216;
    this[44].cx = 1065353216;
    this[44].cy = 1068708659;
    this[45].cx = 1067030938;
    this[42].cy = 1033476506;
    this[45].cy = 1028443341;
    this[41].cx = 1040522936;
    this[41].cy = 1061481551;
    this[42].cx = 1047285445;
    v9 = CImage::Create((struct CImage **)&this[51]);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x44u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)&this[4], *v7, 0LL, 0, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x45u);
      }
      else
      {
        CVisual::SetSize(*v7, this + 40);
        this[47] = 0LL;
        this[48] = 0LL;
        this[49] = 0LL;
        LOBYTE(this[35].cx) = 0;
      }
    }
  }
  return v3;
}
