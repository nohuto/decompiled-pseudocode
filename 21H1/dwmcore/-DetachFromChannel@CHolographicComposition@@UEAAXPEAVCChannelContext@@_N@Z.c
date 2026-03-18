/*
 * XREFs of ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180256E50
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x180254F10 (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 */

void __fastcall CHolographicComposition::DetachFromChannel(CHolographicManager **this, struct CChannelContext *a2)
{
  if ( this[10] )
  {
    if ( *((_BYTE *)this + 108) )
      CHolographicManager::RemoveHolographicComposition(this[10], (struct CHolographicComposition *)this);
  }
}
