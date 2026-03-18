/*
 * XREFs of _ConstrainWindowSIZERECT@4 @ 0x2FFE2
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ?ConstrainIntToPositive2xShortRange@@YGHH@Z @ 0x302E8 (-ConstrainIntToPositive2xShortRange@@YGHH@Z.c)
 */

int __thiscall ConstrainWindowSIZERECT(int *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int result; // eax
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+0h] [ebp-8h]

  v2 = 0x7FFF;
  v3 = *this;
  if ( *this > 0x7FFF )
  {
    v3 = 0x7FFF;
  }
  else if ( v3 < -32768 )
  {
    v3 = -32768;
  }
  *this = v3;
  v4 = this[1];
  if ( v4 <= 0x7FFF )
  {
    v2 = -32768;
    if ( v4 >= -32768 )
      v2 = this[1];
  }
  this[1] = v2;
  this[2] = ConstrainIntToPositive2xShortRange(v6);
  result = ConstrainIntToPositive2xShortRange(v7);
  this[3] = result;
  return result;
}
