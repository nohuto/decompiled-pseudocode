/*
 * XREFs of _handle_error @ 0x180094830
 * Callers:
 *     atan @ 0x18008EA20 (atan.c)
 *     atan2 @ 0x18008EC80 (atan2.c)
 *     ceil @ 0x18008F5D0 (ceil.c)
 *     cos @ 0x18008F6F0 (cos.c)
 *     sin @ 0x18008FB10 (sin.c)
 *     floor @ 0x1800900B0 (floor.c)
 *     log @ 0x1800902E0 (log.c)
 *     sqrt @ 0x180090FC0 (sqrt.c)
 *     tan @ 0x180091E60 (tan.c)
 *     _pow_special @ 0x180095980 (_pow_special.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _call_matherr @ 0x180094704 (_call_matherr.c)
 *     _exception_enabled @ 0x180094770 (_exception_enabled.c)
 *     _raise_exc @ 0x1800952E0 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x180095590 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180095874 (_ctrlfp.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  BOOL v13; // eax
  double v14; // xmm6_8
  __int64 v16; // [rsp+48h] [rbp-A1h] BYREF
  double v17[2]; // [rsp+50h] [rbp-99h] BYREF
  _QWORD v18[8]; // [rsp+68h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp-41h]

  v16 = ctrlfp(8064LL, 65472LL);
  *(_QWORD *)&v17[1] = a3;
  *(_QWORD *)&v17[0] = a3;
  v13 = exception_enabled(a5, v16);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(double *)&v18[6] = a8;
      v19 = v19 & 0xFFFFFFE0 | 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v16, a5, a2, (__int64)&a7, (__int64)v17);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v17[0], v16);
  set_errno_from_matherr(a4);
  ctrlfp(v16, 65472LL);
  return v17[0];
}
