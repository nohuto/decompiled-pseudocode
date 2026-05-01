/*
 * XREFs of ?FullScreenVisibilityChanged@CFullScreenManager@@UEAAJH@Z @ 0x1801AA860
 * Callers:
 *     <none>
 * Callees:
 *     ?_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z @ 0x1801AD1E8 (-_FireFullScreenModeChangedEvent@CFullScreenManager@@AEAAXH@Z.c)
 */

__int64 __fastcall CFullScreenManager::FullScreenVisibilityChanged(CFullScreenManager *this, int a2)
{
  if ( *((_DWORD *)this + 21) )
    CFullScreenManager::_FireFullScreenModeChangedEvent((CFullScreenManager *)((char *)this - 112), a2);
  return 0LL;
}
