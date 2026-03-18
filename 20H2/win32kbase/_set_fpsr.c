/*
 * XREFs of _set_fpsr @ 0x1C00D3680
 * Callers:
 *     _ctrlfp @ 0x1C00D35B0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00D3634 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
