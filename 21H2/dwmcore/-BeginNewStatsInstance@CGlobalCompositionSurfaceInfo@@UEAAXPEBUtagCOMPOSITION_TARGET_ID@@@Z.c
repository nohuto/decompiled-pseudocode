/*
 * XREFs of ?BeginNewStatsInstance@CGlobalCompositionSurfaceInfo@@UEAAXPEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800D6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::BeginNewStatsInstance(
        CGlobalCompositionSurfaceInfo *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  struct CComposition *CurrentFrameId; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9

  if ( *((_QWORD *)this + 13) )
  {
    CurrentFrameId = GetCurrentFrameId();
    (*(void (__fastcall **)(__int64, struct CComposition *, __int64))(v3 + 24))(v4, CurrentFrameId, v5);
  }
}
