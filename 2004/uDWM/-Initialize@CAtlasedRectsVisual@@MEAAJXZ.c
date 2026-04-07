/*
 * XREFs of ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180014EE0
 * Callers:
 *     ?Initialize@CButton@@MEAAJXZ @ 0x180014D70 (-Initialize@CButton@@MEAAJXZ.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009AFD0 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180014F10 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CAtlasedRectsVisual::Initialize(CAtlasedRectsVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x20u);
  return v2;
}
