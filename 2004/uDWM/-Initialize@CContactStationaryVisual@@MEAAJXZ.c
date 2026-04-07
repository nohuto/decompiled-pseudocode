/*
 * XREFs of ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800A18B0
 * Callers:
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x18009CA70 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EBE4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CContactStationaryVisual::Initialize(struct CImage **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int inserted; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CImage::Create(this + 46);
    v3 = v4;
    if ( v4 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[46], 0LL, 0, 1);
      v3 = inserted;
      if ( inserted >= 0 )
      {
        *((_DWORD *)this + 104) = 0;
        this[44] = 0LL;
        this[45] = 0LL;
        *((_BYTE *)this + 280) = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3Cu);
  }
  return v3;
}
