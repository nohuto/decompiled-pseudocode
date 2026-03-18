/*
 * XREFs of ThreadLockMenuNoModify @ 0x1C005E1E4
 * Callers:
 *     xxxPaintMenuBar @ 0x1C005D020 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C005E394 (xxxCalcMenuBar.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01214B4 (xxxDrawMenuBarUnderlines.c)
 *     xxxMNStartMenu @ 0x1C022302C (xxxMNStartMenu.c)
 *     xxxMenuBarDraw @ 0x1C024E57C (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall ThreadLockMenuNoModify(__int64 a1, _QWORD *a2)
{
  __int64 ThreadWin32Thread; // rax

  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x200u;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  *a2 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = a2;
  a2[1] = a1;
  return HMLockObject(a1);
}
