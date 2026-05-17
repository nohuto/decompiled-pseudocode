/*
 * XREFs of __rtchsifneg @ 0x4B2FAF4D
 * Callers:
 *     __rtforatnby0 @ 0x4B2FD130 (__rtforatnby0.c)
 * Callees:
 *     <none>
 */

double __usercall _rtchsifneg@<st0>(char a1@<cl>, double result@<st0>)
{
  if ( a1 )
    return -result;
  return result;
}
