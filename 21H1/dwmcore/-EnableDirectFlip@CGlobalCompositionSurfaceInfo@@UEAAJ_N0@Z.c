/*
 * XREFs of ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_N0@Z @ 0x1801FC4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        unsigned __int8 a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v3 = 0;
  v4 = NtSetCompositionSurfaceDirectFlipState(*((_QWORD *)this + 4), (char *)this + 136, 1LL, a2);
  if ( v4 >= 0 )
  {
    *((_BYTE *)this + 264) = 1;
  }
  else
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x68u, 0LL);
  }
  return v3;
}
