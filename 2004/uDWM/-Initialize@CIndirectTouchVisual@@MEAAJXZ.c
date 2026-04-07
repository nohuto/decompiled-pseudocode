/*
 * XREFs of ?Initialize@CIndirectTouchVisual@@MEAAJXZ @ 0x1800AD860
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18009CC78 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJ_KPEAPEAVCIndirectTouchVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800258E8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B3C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EBE4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18004798C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800AE10C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::Initialize(CIndirectTouchVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  struct CVisual **v6; // rsi
  __int64 v7; // rax
  int v8; // eax
  int inserted; // eax

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   Theme,
                                   8,
                                   0xFu,
                                   0LL,
                                   (struct CBitmapSource ***)this + 48);
    v3 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip >= 0 )
    {
      v6 = (struct CVisual **)((char *)this + 376);
      v7 = *(_QWORD *)(**((_QWORD **)this + 48) + 24LL);
      *((_DWORD *)this + 104) = -1;
      *((_DWORD *)this + 74) = 0;
      *(_QWORD *)((char *)this + 308) = v7;
      *((_DWORD *)this + 80) = 1041865114;
      *((_DWORD *)this + 82) = 1041865114;
      *((_DWORD *)this + 81) = 1036831949;
      *((_DWORD *)this + 83) = 1051372202;
      *((_DWORD *)this + 84) = 1059760810;
      v8 = CImage::Create((struct CImage **)this + 47);
      v3 = v8;
      if ( v8 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CIndirectTouchVisual *)((char *)this + 32), *v6, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetSize(*v6, (const struct tagSIZE *)((char *)this + 308));
          *((_QWORD *)this + 44) = 0LL;
          *((_QWORD *)this + 45) = 0LL;
          *((_QWORD *)this + 46) = 0LL;
          *((_DWORD *)this + 85) = 0;
          *((_DWORD *)this + 86) = 0;
          CIndirectTouchVisual::UpdateOpacityAndSource(this);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x37u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x36u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x28u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x25u);
  }
  return v3;
}
