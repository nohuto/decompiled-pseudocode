/*
 * XREFs of __twoToTOS @ 0x4B2FAF60
 * Callers:
 *     sub_4B2F5C94 @ 0x4B2F5C94 (sub_4B2F5C94.c)
 * Callees:
 *     <none>
 */

double __usercall _twoToTOS@<st0>(double a1@<st0>)
{
  _ST6 = a1;
  __asm { frndint }
  return __FSCALE__(__F2XM1__(-(_ST6 - a1)) + 1.0, _ST6);
}
