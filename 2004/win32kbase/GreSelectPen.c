/*
 * XREFs of GreSelectPen @ 0x1C0140520
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectPenInternal @ 0x1C00CF110 (GreSelectPenInternal.c)
 */

__int64 __fastcall GreSelectPen(HDC a1, __int64 a2)
{
  return GreSelectPenInternal(a1, a2, 1);
}
