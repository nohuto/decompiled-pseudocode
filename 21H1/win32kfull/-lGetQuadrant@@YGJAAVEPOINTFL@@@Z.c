/*
 * XREFs of ?lGetQuadrant@@YGJAAVEPOINTFL@@@Z @ 0x1FF648
 * Callers:
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 * Callees:
 *     <none>
 */

int __thiscall lGetQuadrant(int *this)
{
  int v1; // edx
  int result; // eax
  int v3; // esi

  v1 = *this;
  result = 0;
  v3 = this[2];
  if ( v3 < 0 )
    return (v1 >> 31) + 3;
  if ( v1 < 0 || !v1 && !this[1] )
  {
    result = 1;
    if ( !v3 && !this[3] )
      return 2;
  }
  return result;
}
