/*
 * XREFs of GreRestoreDC @ 0x1C014E450
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     GreRestoreDCInternal @ 0x1C00D0920 (GreRestoreDCInternal.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  return GreRestoreDCInternal(a1, a2, 1, 0);
}
