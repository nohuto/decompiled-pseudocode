/*
 * XREFs of _set_fpsr @ 0x1C00131F0
 * Callers:
 *     _ctrlfp @ 0x1C0013120 (_ctrlfp.c)
 *     _set_statfp @ 0x1C00131A4 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
