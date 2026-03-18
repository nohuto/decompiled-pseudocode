/*
 * XREFs of ?AnyBehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@@Z @ 0xF4E04
 * Callers:
 *     ?InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z @ 0x2B0B4 (-InternalBuildHwndList@@YGPAUtagBWL@@PAU1@PAUtagWND@@I@Z.c)
 *     ?_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z @ 0x7D75E (-_GetWindowTrackInfoAsync@@YGJPAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __cdecl ShellWindowManagement::AnyBehaviorEnabled(
        ShellWindowManagement *this,
        const struct tagDESKTOP *a2,
        unsigned int a3)
{
  return ShellWindowManagement::BehaviorEnabled(this, a2, a3);
}
