/*
 * XREFs of _EditionNotifyDwmForSystemVisualDestruction@8 @ 0xF3CD6
 * Callers:
 *     <none>
 * Callees:
 *     _DwmAsyncDestroyDCompositionHwndTarget@12 @ 0xF5F5E (_DwmAsyncDestroyDCompositionHwndTarget@12.c)
 */

int __stdcall EditionNotifyDwmForSystemVisualDestruction(int a1, int a2)
{
  void *v2; // eax

  if ( IsWindowDesktopComposed(a1) )
  {
    v2 = (void *)ReferenceDwmApiPort();
    DwmAsyncDestroyDCompositionHwndTarget(v2, a2);
  }
  return 0;
}
