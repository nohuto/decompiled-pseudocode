/*
 * XREFs of _ThreadLockMenuNoModify@8 @ 0xB75EA
 * Callers:
 *     _xxxCalcClientRect@12 @ 0x8E9FC (_xxxCalcClientRect@12.c)
 *     _xxxCalcMenuBar@20 @ 0x94A6C (_xxxCalcMenuBar@20.c)
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 *     _xxxDrawMenuBarUnderlines@8 @ 0xCC2CA (_xxxDrawMenuBarUnderlines@8.c)
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 *     _xxxMenuBarDraw@16 @ 0x1AA275 (_xxxMenuBarDraw@16.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

int __fastcall ThreadLockMenuNoModify(int a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax

  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20) |= 0x200u;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  *a2 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = a2;
  a2[1] = a1;
  return HMLockObject(a1);
}
