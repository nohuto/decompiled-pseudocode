/*
 * XREFs of GreRestoreDC @ 0x1C0150A00
 * Callers:
 *     <none>
 * Callees:
 *     GreRestoreDCInternal @ 0x1C00D0C80 (GreRestoreDCInternal.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  return GreRestoreDCInternal(a1, a2, 1);
}
