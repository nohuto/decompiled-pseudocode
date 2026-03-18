/*
 * XREFs of GreSelectPen @ 0x1C013E1D0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectPenInternal @ 0x1C00CE8D0 (GreSelectPenInternal.c)
 */

struct HOBJ__ *__fastcall GreSelectPen(HDC a1, struct HOBJ__ *a2)
{
  return GreSelectPenInternal(a1, a2, 1);
}
