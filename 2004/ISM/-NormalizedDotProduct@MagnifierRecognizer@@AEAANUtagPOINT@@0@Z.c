/*
 * XREFs of ?NormalizedDotProduct@MagnifierRecognizer@@AEAANUtagPOINT@@0@Z @ 0x18017DCF0
 * Callers:
 *     ?CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ @ 0x18017DA5C (-CheckForTwoFingerPan@MagnifierRecognizer@@AEAAXXZ.c)
 * Callees:
 *     sqrt @ 0x18003C490 (sqrt.c)
 */

double __fastcall MagnifierRecognizer::NormalizedDotProduct(
        MagnifierRecognizer *this,
        struct tagPOINT a2,
        struct tagPOINT a3)
{
  LONG y; // ebp
  LONG x; // edi
  double v6; // xmm6_8
  double v7; // xmm0_8

  y = a2.y;
  x = a2.x;
  v6 = sqrt((double)(a2.x * a2.x + a2.y * a2.y));
  v7 = sqrt((double)(a3.x * a3.x + a3.y * a3.y));
  return (double)x / v6 * ((double)a3.x / v7) + (double)y / v6 * ((double)a3.y / v7);
}
