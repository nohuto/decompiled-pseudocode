/*
 * XREFs of ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x1C01599C0
 * Callers:
 *     NtGdiSetPixel @ 0x1C0148A80 (NtGdiSetPixel.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::ThreadCleanup(XDCOBJ *a1)
{
  if ( *(_QWORD *)a1 )
    XDCOBJ::vUnlockFast(a1);
  *(_QWORD *)a1 = 0LL;
}
