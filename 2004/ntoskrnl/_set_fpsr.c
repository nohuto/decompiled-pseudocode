/*
 * XREFs of _set_fpsr @ 0x1403D32C0
 * Callers:
 *     _ctrlfp @ 0x1403D31E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D3268 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
