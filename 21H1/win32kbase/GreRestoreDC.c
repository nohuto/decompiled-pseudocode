/*
 * XREFs of GreRestoreDC @ 0x1C0156D50
 * Callers:
 *     <none>
 * Callees:
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  return GreRestoreDCInternal(a1, a2, 1);
}
