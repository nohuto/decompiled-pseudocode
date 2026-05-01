/*
 * XREFs of ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x180136D00
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x18000FD6C (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ExperienceManagerUtils::ScaleByDPI(ExperienceManagerUtils *this, int a2)
{
  return MulDiv((int)this, a2, 96);
}
