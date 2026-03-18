/*
 * XREFs of _get_fpsr @ 0x1404072C0
 * Callers:
 *     _clrfp @ 0x1403D5E50 (_clrfp.c)
 *     _ctrlfp @ 0x1403D5E74 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D5EF8 (_set_statfp.c)
 *     _statfp @ 0x1403D5F20 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
