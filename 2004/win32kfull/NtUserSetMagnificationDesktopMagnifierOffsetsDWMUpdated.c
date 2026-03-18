/*
 * XREFs of NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated @ 0x1C0202E30
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated @ 0x1C0275384 (DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated.c)
 */

_BOOL8 NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated()
{
  __int64 ThreadWin32Thread; // rax
  void *v1; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v1 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL));
  return (int)DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(v1) >= 0;
}
