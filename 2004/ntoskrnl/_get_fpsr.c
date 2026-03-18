/*
 * XREFs of _get_fpsr @ 0x140400EC0
 * Callers:
 *     _clrfp @ 0x1403D31C0 (_clrfp.c)
 *     _ctrlfp @ 0x1403D31E4 (_ctrlfp.c)
 *     _set_statfp @ 0x1403D3268 (_set_statfp.c)
 *     _statfp @ 0x1403D3290 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
