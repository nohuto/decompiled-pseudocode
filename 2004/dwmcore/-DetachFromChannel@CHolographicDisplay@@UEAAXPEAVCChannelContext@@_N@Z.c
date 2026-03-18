/*
 * XREFs of ?DetachFromChannel@CHolographicDisplay@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802546C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180252500 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicDisplay::DetachFromChannel(RTL_SRWLOCK **this, struct CChannelContext *a2)
{
  if ( this[9] )
  {
    if ( *((_BYTE *)this + 116) )
      CHolographicManager::RemoveHolographicDisplay(this[9], (struct CHolographicDisplay *)this);
  }
}
