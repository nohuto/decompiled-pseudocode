/*
 * XREFs of ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180034DA0
 * Callers:
 *     ?OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z @ 0x180034D10 (-OnAnimationComplete@CAnimationScheduler@@UEAAJI@Z.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002F9E8 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z @ 0x180034DD8 (-_NotifyStoryboardState@CStoryboard@@IEAAXW4DWMTRANSITION_STORYBOARD_STATE@@@Z.c)
 */

__int64 __fastcall CStoryboard::OnAnimationComplete(CStoryboard *this, int a2)
{
  CStoryboard *v3; // rbx

  if ( *((_DWORD *)this + 3) == a2 )
  {
    v3 = (CStoryboard *)((char *)this - 16);
    CStoryboard::_NotifyStoryboardState((char *)this - 16, 4LL);
    CStoryboard::_Cleanup(v3);
  }
  return 0LL;
}
