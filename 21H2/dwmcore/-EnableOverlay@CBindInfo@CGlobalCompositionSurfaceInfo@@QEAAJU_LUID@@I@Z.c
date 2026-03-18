/*
 * XREFs of ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@I@Z @ 0x180005068
 * Callers:
 *     ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KU_LUID@@I@Z @ 0x180005020 (-EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KU_LUID@@I@Z.c)
 * Callees:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct _LUID a2,
        int a3)
{
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx

  if ( *((_BYTE *)this + 191) )
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x36Fu, 0LL);
  }
  else
  {
    v7 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x372u, 0LL);
    }
    else
    {
      *((_BYTE *)this + 195) = 1;
      *((struct _LUID *)this + 25) = a2;
      *((_DWORD *)this + 52) = a3;
    }
  }
  return v6;
}
