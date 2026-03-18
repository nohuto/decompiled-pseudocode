/*
 * XREFs of ?pConvertDfbSurfaceToDibPostNKAPC@@YGHPAUHSURF__@@@Z @ 0x220DEC
 * Callers:
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 * Callees:
 *     <none>
 */

int __thiscall pConvertDfbSurfaceToDibPostNKAPC(void *this)
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  return UserPostNKAPC(
           CurrentThread,
           vDisableSynchronizeNKAPCBegin,
           pConvertDfbSurfaceToDibNKAPCRundown,
           pConvertDfbSurfaceToDibNKAPC,
           this);
}
