/*
 * XREFs of _W32GetCurrentThreadDpiHostingBehavior@0 @ 0xA141E
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall W32GetCurrentThreadDpiHostingBehavior()
{
  int v0; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v3; // ecx
  int v5; // edx

  v0 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( ThreadWin32Thread )
  {
    v3 = *(int **)(ThreadWin32Thread + 208);
    if ( v3 )
    {
      if ( v3[1] )
      {
        v5 = *v3;
        if ( !*v3 || v5 == 1 )
          *(_DWORD *)(ThreadWin32Thread + 196) = v5;
        v3[1] = 0;
      }
      return *(_DWORD *)(ThreadWin32Thread + 196);
    }
  }
  return v0;
}
