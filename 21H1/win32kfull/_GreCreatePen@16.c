/*
 * XREFs of _GreCreatePen@16 @ 0xA9084
 * Callers:
 *     _NtGdiCreatePen@16 @ 0xA906A (_NtGdiCreatePen@16.c)
 *     ?DrawSonar@@YGXPAUHDC__@@@Z @ 0x1532D7 (-DrawSonar@@YGXPAUHDC__@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreExtCreatePen@44 @ 0xA90C4 (_GreExtCreatePen@44.c)
 */

int __fastcall GreCreatePen(unsigned int a1, int a2, int a3, int a4)
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  if ( a1 <= 6 )
    return GreExtCreatePen(a1, a2, 0, a3, 0, 0, 0, 0, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0;
}
