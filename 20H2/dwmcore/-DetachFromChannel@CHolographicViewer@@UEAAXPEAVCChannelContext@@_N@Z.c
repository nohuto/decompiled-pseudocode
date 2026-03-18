/*
 * XREFs of ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180257540
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x180251724 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x1802575B0 (-Dispose@CHolographicViewer@@UEAAJXZ.c)
 */

void __fastcall CHolographicViewer::DetachFromChannel(CHolographicViewer *this, CAnimationLoggingManager **a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 20);
  if ( v3 && *((_BYTE *)this + 152) )
    CHolographicManager::RemoveHolographicViewer(v3, this);
  CHolographicViewer::Dispose((CHolographicViewer *)((char *)this + 64));
  CResource::DetachFromChannel(this, a2);
}
