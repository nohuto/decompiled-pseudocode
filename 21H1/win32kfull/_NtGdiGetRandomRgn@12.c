/*
 * XREFs of _NtGdiGetRandomRgn@12 @ 0x5AA6E
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 */

int __stdcall NtGdiGetRandomRgn(int a1, int a2, int a3)
{
  int v3; // esi
  int RandomRgn; // edi

  if ( a3 == 5 )
    return 0;
  v3 = 0;
  if ( a3 == 4 )
  {
    v3 = 1;
    UserEnterUserCritSecShared();
  }
  RandomRgn = GreGetRandomRgn(a1, a2, a3);
  if ( v3 )
    UserLeaveUserCritSec();
  return RandomRgn;
}
