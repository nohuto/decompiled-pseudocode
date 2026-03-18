/*
 * XREFs of _EngModifySurface@32 @ 0xEDF6C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall EngModifySurface(
        HSURF hsurf,
        HDEV hdev,
        FLONG flHooks,
        FLONG flSurface,
        DHSURF dhsurf,
        PVOID pvScan0,
        LONG lDelta,
        PVOID pvReserved)
{
  return __imp__EngModifySurface@32(hsurf, hdev, flHooks, flSurface, dhsurf, pvScan0, lDelta, pvReserved);
}
