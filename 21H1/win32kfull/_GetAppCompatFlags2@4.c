/*
 * XREFs of _GetAppCompatFlags2@4 @ 0xA3AF6
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __stdcall GetAppCompatFlags2(unsigned __int16 a1)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( (unsigned int)a1 < *(_DWORD *)(ThreadWin32Thread + 340) )
    return 0;
  else
    return *(_DWORD *)(ThreadWin32Thread + 352);
}
