/*
 * XREFs of ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003864C
 * Callers:
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18000A494 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x180035BC4 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x18003A400 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800962F0 (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x18003912C (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 */

__int64 __fastcall CLoginTransition::StopAnimation(CLoginTransition *this)
{
  if ( *((_BYTE *)this + 68) )
  {
    CLoginTransition::_CleanupAnimation(this);
    *((_BYTE *)this + 68) = 0;
  }
  return 0LL;
}
