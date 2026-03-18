/*
 * XREFs of ?SetIndependentFlipNotify@CGlobalCompositionSurfaceInfo@@UEAAJ_K_N@Z @ 0x180249210
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x180017C98 (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetIndependentFlipNotify(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( a2 == *((_QWORD *)this + 14) && *((_BYTE *)this + 276) )
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipNotify(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a3);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x1EFu);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003292412, 0x1F3u);
  }
  return v5;
}
