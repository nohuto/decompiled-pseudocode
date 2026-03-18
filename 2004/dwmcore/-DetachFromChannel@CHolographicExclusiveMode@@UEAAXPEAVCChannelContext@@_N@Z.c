/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180254B80
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x180252350 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::DetachFromChannel(CHolographicManager **this, struct CChannelContext *a2)
{
  if ( this[8] )
    CHolographicManager::RemoveExclusiveModeProxy(this[8], (struct CHolographicExclusiveMode *)this);
}
