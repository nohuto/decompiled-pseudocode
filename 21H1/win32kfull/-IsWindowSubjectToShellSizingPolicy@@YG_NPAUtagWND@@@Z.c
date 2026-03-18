/*
 * XREFs of ?IsWindowSubjectToShellSizingPolicy@@YG_NPAUtagWND@@@Z @ 0x17198D
 * Callers:
 *     ?xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1751C3 (-xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z @ 0xF4E0E (-BehaviorEnabled@ShellWindowManagement@@YG_NPBUtagDESKTOP@@K@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     ?IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z @ 0x1718C2 (-IsLeftOrRightArranged@@YG_NPBUtagWND@@@Z.c)
 */

bool __thiscall IsWindowSubjectToShellSizingPolicy(_DWORD *this)
{
  return IsLeftOrRightArranged(this)
      && !ShellWindowManagement::BehaviorEnabled(this[3], 8u)
      && ShellWindowManagement::WindowSubjectToBehavior((int)this, 0x40u);
}
