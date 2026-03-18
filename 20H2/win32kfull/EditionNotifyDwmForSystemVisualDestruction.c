/*
 * XREFs of EditionNotifyDwmForSystemVisualDestruction @ 0x1C01205A0
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncDestroyDCompositionHwndTarget @ 0x1C0120604 (DwmAsyncDestroyDCompositionHwndTarget.c)
 */

__int64 __fastcall EditionNotifyDwmForSystemVisualDestruction(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // rax

  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v2 = (void *)ReferenceDwmApiPort(v1);
    DwmAsyncDestroyDCompositionHwndTarget(v2);
  }
  return 0LL;
}
