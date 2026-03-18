/*
 * XREFs of _call_matherr @ 0x1403D549C
 * Callers:
 *     _handle_error @ 0x1403D55D0 (_handle_error.c)
 *     _handle_errorf @ 0x1403D570C (_handle_errorf.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     _set_errno_from_matherr @ 0x1403D5E24 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1403D5E74 (_ctrlfp.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6, __int64 a7)
{
  ctrlfp(a7, 65472LL);
  if ( !(unsigned int)HalSystemVectorDispatchEntry() )
    set_errno_from_matherr(a1);
  return a6;
}
