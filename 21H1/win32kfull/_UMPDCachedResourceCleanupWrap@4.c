/*
 * XREFs of _UMPDCachedResourceCleanupWrap@4 @ 0xA3A4E
 * Callers:
 *     <none>
 * Callees:
 *     ?vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z @ 0xA3A60 (-vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z.c)
 */

void __stdcall UMPDCachedResourceCleanupWrap(int a1)
{
  struct _W32THREAD *savedregs; // [esp+0h] [ebp+0h]

  vUMPDCachedResourceCleanup(savedregs);
}
