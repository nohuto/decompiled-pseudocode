/*
 * XREFs of __convertTOStoQNaN @ 0x4B2FAF8C
 * Callers:
 *     sub_4B2F5ADF @ 0x4B2F5ADF (sub_4B2F5ADF.c)
 *     sub_4B2F5B9F @ 0x4B2F5B9F (sub_4B2F5B9F.c)
 *     sub_4B2F5EBF @ 0x4B2F5EBF (sub_4B2F5EBF.c)
 *     sub_4B2F5F8D @ 0x4B2F5F8D (sub_4B2F5F8D.c)
 *     sub_4B2F80AF @ 0x4B2F80AF (sub_4B2F80AF.c)
 *     sub_4B2FA48F @ 0x4B2FA48F (sub_4B2FA48F.c)
 * Callees:
 *     <none>
 */

double __usercall _convertTOStoQNaN@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}
