/*
 * XREFs of ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z @ 0x180016160
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x1800161B0 (-EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        int a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  if ( a2 == *((_QWORD *)this + 14) && !*((_BYTE *)this + 276) && a3 == *((_DWORD *)this + 74) )
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a4);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1DBu, 0LL);
  }
  else
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x1DFu, 0LL);
  }
  return v6;
}
