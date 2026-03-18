/*
 * XREFs of _set_fpsr @ 0x1403D5F50
 * Callers:
 *     _ctrlfp @ 0x1403D5E74 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D5EF8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
