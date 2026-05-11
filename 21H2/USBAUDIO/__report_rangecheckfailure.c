/*
 * XREFs of __report_rangecheckfailure @ 0x1C00121F0
 * Callers:
 *     IsClassDriverOnly @ 0x1C002255C (IsClassDriverOnly.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
