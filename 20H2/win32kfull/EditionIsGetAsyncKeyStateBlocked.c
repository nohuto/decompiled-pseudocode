/*
 * XREFs of EditionIsGetAsyncKeyStateBlocked @ 0x1C01154D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

_BOOL8 EditionIsGetAsyncKeyStateBlocked()
{
  __int64 ThreadWin32Thread; // rbx
  __int64 v1; // r8

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  return *(_QWORD *)(ThreadWin32Thread + 456) != grpdeskRitInput
      || (!gptiForeground
       || PsGetCurrentProcessWin32Process(gptiForeground, grpdeskRitInput, v1) != *(_QWORD *)(gptiForeground + 424LL))
      && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 888), 0x18u);
}
