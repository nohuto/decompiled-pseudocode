/*
 * XREFs of __startOneArgErrorHandling @ 0x4B2FB107
 * Callers:
 *     sub_4B2F5ADF @ 0x4B2F5ADF (sub_4B2F5ADF.c)
 *     sub_4B2F5B9F @ 0x4B2F5B9F (sub_4B2F5B9F.c)
 *     sub_4B2F5EBF @ 0x4B2F5EBF (sub_4B2F5EBF.c)
 *     sub_4B2F5F8D @ 0x4B2F5F8D (sub_4B2F5F8D.c)
 *     sub_4B2F80AF @ 0x4B2F80AF (sub_4B2F80AF.c)
 *     sub_4B2FA48F @ 0x4B2FA48F (sub_4B2FA48F.c)
 *     __math_exit @ 0x4B2FB00B (__math_exit.c)
 *     __check_range_exit @ 0x4B2FB049 (__check_range_exit.c)
 * Callees:
 *     __87except @ 0x4B2FEB82 (__87except.c)
 */

double __usercall _startOneArgErrorHandling@<st0>(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        double a4@<st0>,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]

  v9[0] = a1;
  v10 = a4;
  v9[1] = a3;
  v9[2] = a7;
  v9[3] = a8;
  _87except(a2, v9, &a5);
  return v10;
}
