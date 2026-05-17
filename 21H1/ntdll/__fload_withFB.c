/*
 * XREFs of __fload_withFB @ 0x4B2FAFA5
 * Callers:
 *     __cos_default @ 0x4B2F5AD6 (__cos_default.c)
 *     __log_default @ 0x4B2F5B96 (__log_default.c)
 *     __pow_default @ 0x4B2F5C8B (__pow_default.c)
 *     sub_4B2F5C94 @ 0x4B2F5C94 (sub_4B2F5C94.c)
 *     __sin_default @ 0x4B2F5EB6 (__sin_default.c)
 *     _sqrt @ 0x4B2F5F84 (_sqrt.c)
 *     __atan_default @ 0x4B2F80A6 (__atan_default.c)
 *     __tan_default @ 0x4B2FA486 (__tan_default.c)
 * Callees:
 *     <none>
 */

double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}
