/*
 * XREFs of __set_exp @ 0x4B2FDF30
 * Callers:
 *     __decomp @ 0x4B2FDE5E (__decomp.c)
 * Callees:
 *     <none>
 */

double __cdecl _set_exp(double a1, __int16 a2)
{
  double v3; // [esp+0h] [ebp-8h]

  v3 = a1;
  HIWORD(v3) = HIWORD(a1) & 0x800F | (16 * (a2 + 1022));
  return v3;
}
