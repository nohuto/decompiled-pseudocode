/*
 * XREFs of sub_4B2F5E59 @ 0x4B2F5E59
 * Callers:
 *     sub_4B2F5C94 @ 0x4B2F5C94 (sub_4B2F5C94.c)
 * Callees:
 *     <none>
 */

void __usercall sub_4B2F5E59(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  if ( _ST6 == a1 )
  {
    _ST6 = a1 * _half;
    __asm { frndint }
  }
}
