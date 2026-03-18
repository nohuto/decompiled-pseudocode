/*
 * XREFs of ?TestRectBogus@@YGHUtagRECT@@HHHH@Z @ 0x13FB22
 * Callers:
 *     ?IsRectBogus@@YGHHHHH@Z @ 0x13F8E6 (-IsRectBogus@@YGHHHHH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __userpurge TestRectBogus@<eax>(LONG a1@<edx>, LONG a2@<ecx>, struct tagRECT a3, int a4, int a5, int a6, int a7)
{
  BOOL result; // eax

  result = 0;
  if ( a2 > a3.right || a1 > a3.bottom || a3.left < a4 - a3.right || a3.top < a5 - a3.bottom )
  {
    a3.left = a4 - a3.left;
    if ( (int)abs32(a2 - (a3.left + a3.right) / 2) <= 8 && (int)abs32(a1 - (a3.bottom + a5 - a3.top) / 2) <= 8 )
      return 1;
    if ( a2 == a3.right || a1 == a3.bottom || a2 == a3.left || a1 == a5 - a3.top )
      return 1;
  }
  return result;
}
