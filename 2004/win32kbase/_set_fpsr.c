/*
 * XREFs of _set_fpsr @ 0x1C00D37B0
 * Callers:
 *     _ctrlfp @ 0x1C00D36E0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00D3764 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
