/*
 * XREFs of __tosnan1 @ 0x4B2FAE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __usercall _tosnan1@<st0>(int a1@<ebp>, double a2@<st0>)
{
  double result; // st7

  *(double *)(a1 - 158) = a2;
  result = *(double *)(a1 - 158);
  if ( (*(_BYTE *)(a1 - 151) & 0x40) != 0 )
  {
    *(_BYTE *)(a1 - 144) = 7;
  }
  else
  {
    *(_BYTE *)(a1 - 144) = 1;
    return result + dbl_4B3A3864;
  }
  return result;
}
