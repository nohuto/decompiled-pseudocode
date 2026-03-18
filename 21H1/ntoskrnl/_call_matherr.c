/*
 * XREFs of _call_matherr @ 0x1403D19CC
 * Callers:
 *     _handle_error @ 0x1403D1B00 (_handle_error.c)
 *     _handle_errorf @ 0x1403D1C3C (_handle_errorf.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x1402D53D0 (HalSystemVectorDispatchEntry.c)
 *     _set_errno_from_matherr @ 0x1403D2354 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1403D23A4 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)HalSystemVectorDispatchEntry() )
    set_errno_from_matherr(a1);
  return a6;
}
