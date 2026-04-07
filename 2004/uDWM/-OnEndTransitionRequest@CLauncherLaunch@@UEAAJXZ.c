/*
 * XREFs of ?OnEndTransitionRequest@CLauncherLaunch@@UEAAJXZ @ 0x180006DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ @ 0x180006E60 (-RecordLauncherRect@CLauncherAnimationBase@@IEAAXXZ.c)
 */

__int64 __fastcall CLauncherLaunch::OnEndTransitionRequest(CLauncherLaunch *this)
{
  CLauncherAnimationBase::RecordLauncherRect(this);
  return CStoryboard::OnEndTransitionRequest(this);
}
