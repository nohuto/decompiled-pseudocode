/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x1C01141E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

_BOOL8 EditionIsGetAsyncKeyStateBlocked()
{
  __int64 ThreadWin32Thread; // rbx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(_QWORD *)(ThreadWin32Thread + 448) != grpdeskRitInput
      || (!gptiForeground || PsGetCurrentProcessWin32Process(gptiForeground) != *(_QWORD *)(gptiForeground + 416LL))
      && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 880), 0x18u);
}
