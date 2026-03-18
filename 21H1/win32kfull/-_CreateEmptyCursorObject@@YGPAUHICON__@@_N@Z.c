/*
 * XREFs of ?_CreateEmptyCursorObject@@YGPAUHICON__@@_N@Z @ 0x9D76E
 * Callers:
 *     _NtUserCreateEmptyCursorObject@4 @ 0x9D742 (_NtUserCreateEmptyCursorObject@4.c)
 *     ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12 (-_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall _CreateEmptyCursorObject(char a1)
{
  int v1; // edi
  int *v3; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax

  v1 = 0;
  v3 = (int *)HMAllocObject(_gptiCurrent, 0, 3, 96);
  if ( v3 )
  {
    if ( !a1 || PsGetCurrentProcess() != _gpepCSRSS )
    {
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
      if ( (ThreadWin32Thread[172] & 0x8000000) != 0 )
        ThreadWin32Thread = (_DWORD *)ThreadWin32Thread[212];
      v1 = ThreadWin32Thread[58];
    }
    v3[3] = v1;
    v1 = *v3;
    v3[11] = 2048;
    v3[6] = (int)v3;
  }
  return v1;
}
