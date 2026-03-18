/*
 * XREFs of ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800E13C0
 * Callers:
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800E1340 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802988F0 (-DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180298FD0 (-DetachFromChannel@CHolographicExclusiveView@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18029B260 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18029C800 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x180042844 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 */

void __fastcall CResource::DetachFromChannel(CResource *this, CAnimationLoggingManager **a2)
{
  CAnimationLoggingManager **v3; // rcx

  v3 = (CAnimationLoggingManager **)*((_QWORD *)this + 6);
  if ( a2 == v3 )
  {
    if ( (*((_BYTE *)this + 32) & 0x10) != 0 )
      CAnimationLoggingManager::RemoveResourceDebugInfo(v3[8], this);
    *((_QWORD *)this + 6) = 0LL;
  }
}
