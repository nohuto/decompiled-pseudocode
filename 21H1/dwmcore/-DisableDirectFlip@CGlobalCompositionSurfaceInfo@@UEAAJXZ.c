/*
 * XREFs of ?DisableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJXZ @ 0x1801FC440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::DisableDirectFlip(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = 0;
  v3 = NtSetCompositionSurfaceDirectFlipState(*((_QWORD *)this + 4), (char *)this + 136, 0LL, 0LL);
  if ( v3 < 0 )
  {
    v2 = v3 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3 | 0x10000000, 0x7Au, 0LL);
  }
  result = v2;
  *((_BYTE *)this + 264) = 0;
  return result;
}
