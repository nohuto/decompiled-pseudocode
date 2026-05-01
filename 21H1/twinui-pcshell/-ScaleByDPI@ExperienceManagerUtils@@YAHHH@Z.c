/*
 * XREFs of ?ScaleByDPI@ExperienceManagerUtils@@YAHHH@Z @ 0x1801128B4
 * Callers:
 *     ?GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z @ 0x1800194B8 (-GetViewPosition@CActionCenterExperienceManager@@AEAAJAEAUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall ExperienceManagerUtils::ScaleByDPI(ExperienceManagerUtils *this, int a2)
{
  return MulDiv((int)this, a2, 96);
}
