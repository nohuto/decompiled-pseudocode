/*
 * XREFs of ?IsGpqForegroundAccessibleCurrent@@YGHH@Z @ 0xAFF1C
 * Callers:
 *     ?xxxMouseEventDirect@@YGHKKKK_K0KH@Z @ 0xAF5BA (-xxxMouseEventDirect@@YGHKKKK_K0KH@Z.c)
 *     _xxxInternalKeyEventDirect@20 @ 0xAFD06 (_xxxInternalKeyEventDirect@20.c)
 *     _EditionIsGpqForegroundAccessibleCurrent@4 @ 0xAFEFA (_EditionIsGpqForegroundAccessibleCurrent@4.c)
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0xA4996 (-IsGpqForegroundAccessibleExplicit@@YGHHPAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

int __thiscall IsGpqForegroundAccessibleCurrent(void *this)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  return IsGpqForegroundAccessibleExplicit(
           this,
           *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 8) & 0x80000000,
           *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 496),
           *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 500));
}
