/*
 * XREFs of sub_4B2FB324 @ 0x4B2FB324
 * Callers:
 *     <none>
 * Callees:
 *     __powhlp @ 0x4B2FB3BE (__powhlp.c)
 */

double __usercall sub_4B2FB324@<st0>(int a1@<ebp>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  double result; // st7
  double *v6; // [esp+10h] [ebp-7Ch]
  double v7[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v7;
  v6 = v7;
  __asm { fsave   byte ptr [esi+8] }
  v4 = _powhlp(a3, a2, (int)v7);
  __asm { frstor  byte ptr [esi+8] }
  result = v7[0];
  if ( v4 )
    _rttosnpopde(a1);
  return result;
}
