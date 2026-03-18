/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C00FB424
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00FAF50 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C00FB304 (xxxCalcMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122314 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C022219C (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C024CF74 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *a2 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = a2;
  a2[1] = a1;
  return HMLockObject(a1);
}
