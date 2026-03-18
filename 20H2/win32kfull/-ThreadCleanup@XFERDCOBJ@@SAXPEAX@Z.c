/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C015D1C0
 * Callers:
 *     GreDrawStream @ 0x1C00A2D50 (GreDrawStream.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  if ( *(_QWORD *)a1 )
    XDCOBJ::vUnlockFast(a1);
  *(_QWORD *)a1 = 0LL;
}
