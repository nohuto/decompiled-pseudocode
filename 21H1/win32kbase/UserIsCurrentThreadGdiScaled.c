/*
 * XREFs of UserIsCurrentThreadGdiScaled @ 0x1C0049C40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall UserIsCurrentThreadGdiScaled(__int64 a1, __int64 a2)
{
  int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v3; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  v3 = 1;
  if ( (!W32GetThreadWin32Thread(KeGetCurrentThread())
     || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
     || (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (CurrentThreadDpiAwarenessContext & 0x40000000) == 0)
    && (!W32GetThreadWin32Thread(KeGetCurrentThread())
     || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) == 0
     || (CurrentThreadDpiAwarenessContext & 0xF) != 0
     || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 0x40) == 0) )
  {
    return 0;
  }
  return v3;
}
