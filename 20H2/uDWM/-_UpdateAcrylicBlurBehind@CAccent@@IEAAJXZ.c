/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x1800458A0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000CCF0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E740 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B070 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x18004B364 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccent *this)
{
  unsigned int v1; // edi
  int updated; // eax
  struct CVisual *v5; // rdx
  __int64 v6; // rcx
  int inserted; // eax
  int v8; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 43) && *((_BYTE *)this + 397) )
  {
    CRenderDataVisual::ClearInstructions(this);
    *(_OWORD *)(*((_QWORD *)this + 43) + 336LL) = *(_OWORD *)((char *)this + 616);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                *((CAccentAcrylicBlurBehind **)this + 43),
                (CAccent *)((char *)this + 280));
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x6B3u);
    }
    else
    {
      v5 = (struct CVisual *)*((_QWORD *)this + 43);
      v6 = *((_QWORD *)v5 + 3);
      if ( (CAccent *)v6 != this )
      {
        if ( v6 )
        {
          v8 = VisualCollection::Remove((VisualCollection *)(v6 + 32), v5);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6BBu);
            return v1;
          }
          v5 = (struct CVisual *)*((_QWORD *)this + 43);
        }
        inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v5, 0LL, 0, 1);
        v1 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x6BDu);
      }
    }
  }
  return v1;
}
