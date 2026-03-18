/*
 * XREFs of _EngCheckAbort@4 @ 0x1D88DF
 * Callers:
 *     _NtGdiEngCheckAbort@4 @ 0x2179E9 (_NtGdiEngCheckAbort@4.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall EngCheckAbort(SURFOBJ *pso)
{
  if ( (pso != 0 ? (unsigned int)&pso[-1].lDelta : 0) != 0 && *(pso != 0 ? &pso->hsurf : (HSURF *)20) )
    return (int)*(pso != 0 ? &pso[1].hsurf : (HSURF *)72) & 0x40000000;
  else
    return 0;
}
