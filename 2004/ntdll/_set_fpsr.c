/*
 * XREFs of _set_fpsr @ 0x180096150
 * Callers:
 *     _control87 @ 0x180093D30 (_control87.c)
 *     _ctrlfp @ 0x180095174 (_ctrlfp.c)
 *     _set_statfp @ 0x1800951F8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
