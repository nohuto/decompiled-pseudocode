/*
 * XREFs of BgLibraryInitialize @ 0x1409EE854
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x14098F728 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140A94C8C (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1402815B0 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
