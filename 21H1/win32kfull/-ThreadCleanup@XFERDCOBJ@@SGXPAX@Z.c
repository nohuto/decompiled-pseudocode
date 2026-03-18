/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SGXPAX@Z @ 0x1D7BF6
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

void __stdcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  if ( *(_DWORD *)a1 )
    XDCOBJ::vUnlockFast(a1);
  *(_DWORD *)a1 = 0;
}
