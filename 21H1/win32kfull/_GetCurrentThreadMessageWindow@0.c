/*
 * XREFs of _GetCurrentThreadMessageWindow@0 @ 0x16F3AD
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __stdcall GetCurrentThreadMessageWindow()
{
  int v0; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v3; // eax

  v0 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v3 = *(_DWORD *)(ThreadWin32Thread + 248);
    if ( v3 )
      return *(_DWORD *)(v3 + 52);
  }
  return v0;
}
