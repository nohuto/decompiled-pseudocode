/*
 * XREFs of _set_fpsr @ 0x1C00128B0
 * Callers:
 *     _ctrlfp @ 0x1C00127E0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0012864 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
