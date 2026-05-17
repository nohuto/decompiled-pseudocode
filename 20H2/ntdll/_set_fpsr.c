/*
 * XREFs of _set_fpsr @ 0x180096250
 * Callers:
 *     _control87 @ 0x180093E30 (_control87.c)
 *     _ctrlfp @ 0x180095274 (_ctrlfp.c)
 *     _set_statfp @ 0x1800952F8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
