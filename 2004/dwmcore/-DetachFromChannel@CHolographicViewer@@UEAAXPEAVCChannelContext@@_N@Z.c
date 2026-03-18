/*
 * XREFs of ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180258350
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802525F4 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 */

void __fastcall CHolographicViewer::DetachFromChannel(CHolographicViewer *this, struct CChannelContext *a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 20);
  if ( v3 && *((_BYTE *)this + 152) )
    CHolographicManager::RemoveHolographicViewer(v3, this);
  CHolographicViewer::Dispose((CHolographicViewer *)((char *)this + 64));
}
