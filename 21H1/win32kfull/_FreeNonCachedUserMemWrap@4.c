/*
 * XREFs of _FreeNonCachedUserMemWrap@4 @ 0x1F47A4
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ @ 0x1F3ADD (-FreeNonCachedUserMem@UMPDOBJ@@QAEXXZ.c)
 */

void __stdcall FreeNonCachedUserMemWrap(UMPDOBJ *a1)
{
  UMPDOBJ::FreeNonCachedUserMem(a1);
}
