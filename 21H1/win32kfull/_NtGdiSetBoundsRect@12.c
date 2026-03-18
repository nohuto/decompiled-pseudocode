/*
 * XREFs of _NtGdiSetBoundsRect@12 @ 0xAC204
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetBoundsRect@12 @ 0xAC258 (_GreSetBoundsRect@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtGdiSetBoundsRect(HDC a1, int a2, int a3)
{
  if ( !a2 )
    a3 &= ~2u;
  return GreSetBoundsRect(a1, a3);
}
