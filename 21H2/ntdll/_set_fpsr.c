/*
 * XREFs of _set_fpsr @ 0x180096850
 * Callers:
 *     _control87 @ 0x180094430 (_control87.c)
 *     _ctrlfp @ 0x180095874 (_ctrlfp.c)
 *     _set_statfp @ 0x1800958F8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
