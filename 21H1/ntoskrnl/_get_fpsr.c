/*
 * XREFs of _get_fpsr @ 0x1403FFC30
 * Callers:
 *     _clrfp @ 0x1403D2380 (_clrfp.c)
 *     _ctrlfp @ 0x1403D23A4 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D2428 (_set_statfp.c)
 *     _statfp @ 0x1403D2450 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
