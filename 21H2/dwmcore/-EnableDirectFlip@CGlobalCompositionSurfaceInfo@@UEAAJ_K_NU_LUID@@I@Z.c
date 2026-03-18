/*
 * XREFs of ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NU_LUID@@I@Z @ 0x180248740
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NU_LUID@@I@Z @ 0x180248648 (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NU_LUID@@I@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3,
        struct _LUID a4,
        unsigned int a5)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( a2 != *((_QWORD *)this + 14) || *((_BYTE *)this + 283) )
  {
    v7 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003292412, 0x142u);
  }
  else
  {
    v5 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableDirectFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
           a3,
           a4,
           a5);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x13Eu);
  }
  return v7;
}
