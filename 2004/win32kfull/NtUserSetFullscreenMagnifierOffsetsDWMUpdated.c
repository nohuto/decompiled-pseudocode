/*
 * XREFs of NtUserSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C0202A70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated @ 0x1C02755D4 (DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated.c)
 */

_BOOL8 __fastcall NtUserSetFullscreenMagnifierOffsetsDWMUpdated(__int64 a1, __int64 a2, float a3)
{
  __int64 ThreadWin32Thread; // rax
  void *v4; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v4 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(ThreadWin32Thread + 448) + 8LL));
  return (int)DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated(v4, SLODWORD(a3)) >= 0;
}
