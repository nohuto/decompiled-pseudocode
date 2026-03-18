/*
 * XREFs of ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x1802485E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180004EA8 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  if ( a2 == *((_QWORD *)this + 14) && *((_BYTE *)this + 276) )
  {
    v2 = CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip((CGlobalCompositionSurfaceInfo *)((char *)this + 88));
    v4 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0LL, v2, 0x214u);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003292412, 0x218u);
  }
  return v4;
}
