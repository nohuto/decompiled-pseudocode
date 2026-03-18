/*
 * XREFs of NtUserSetDesktopColorTransform @ 0x1C0202610
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DwmAsyncSetDesktopColorTransform @ 0x1C0276440 (DwmAsyncSetDesktopColorTransform.c)
 */

_BOOL8 NtUserSetDesktopColorTransform()
{
  __int64 ThreadWin32Thread; // rax
  void *v1; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL));
  return (int)DwmAsyncSetDesktopColorTransform(v1) >= 0;
}
