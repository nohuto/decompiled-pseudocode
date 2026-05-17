/*
 * XREFs of sub_4B2FB2F0 @ 0x4B2FB2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

double __usercall sub_4B2FB2F0@<st0>(double result@<st0>)
{
  _ST6 = result;
  __asm { frndint }
  if ( _ST6 == result )
  {
    _ST5 = result * dbl_4B3A3032;
    __asm { frndint }
  }
  return result;
}
