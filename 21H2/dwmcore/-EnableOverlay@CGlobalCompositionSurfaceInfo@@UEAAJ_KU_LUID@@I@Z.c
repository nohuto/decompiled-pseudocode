/*
 * XREFs of ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KU_LUID@@I@Z @ 0x180005020
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@I@Z @ 0x180005068 (-EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        struct _LUID a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx

  if ( a2 != *((_QWORD *)this + 14) || *((_BYTE *)this + 282) )
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003292412, 0x16Du, 0LL);
  }
  else
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a3,
           a4);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x169u, 0LL);
  }
  return v6;
}
