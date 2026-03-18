/*
 * XREFs of ?SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z @ 0x1802491A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x180249070 (-SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetIndependentFlipDuration(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( a2 == *((_QWORD *)this + 14) && *((_BYTE *)this + 276) )
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipDuration(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a3);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x203u);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003292412, 0x207u);
  }
  return v5;
}
