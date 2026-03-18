/*
 * XREFs of ?SetExistingSysMemStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@PEAX@Z @ 0x1C00D9A34
 * Callers:
 *     VidMmSetExistingSysMemStore @ 0x1C002D530 (VidMmSetExistingSysMemStore.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetExistingSysMemStore(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_ALLOC *a2, void *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = **(_QWORD **)a2;
  if ( (*(_DWORD *)(v3 + 72) & 0x8000) != 0 )
  {
    *(_QWORD *)(v3 + 568) = a3;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, a2);
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return 3221225485LL;
  }
}
