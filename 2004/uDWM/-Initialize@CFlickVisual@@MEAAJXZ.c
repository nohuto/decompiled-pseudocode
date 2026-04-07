/*
 * XREFs of ?Initialize@CFlickVisual@@MEAAJXZ @ 0x1800A6090
 * Callers:
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z @ 0x18009CB80 (--$CreateTouchVisual@VCFlickVisual@@@@YAJ_KPEAPEAVCFlickVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A40 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EBE4 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CFlickVisual::Initialize(struct CImage **this)
{
  int v2; // eax
  unsigned int v3; // edi
  int v4; // eax
  int inserted; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CImage::Create(this + 41);
    v3 = v4;
    if ( v4 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[41], 0LL, 0, 1);
      v3 = inserted;
      if ( inserted >= 0 )
      {
        this[44] = 0LL;
        this[40] = 0LL;
        *((_DWORD *)this + 87) = 1061158912;
        *((_DWORD *)this + 86) = 20;
        *((_BYTE *)this + 280) = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x27u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x26u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x23u);
  }
  return v3;
}
