/*
 * XREFs of BgLibraryInitialize @ 0x1409F4854
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x1409964E8 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140A9A074 (BgkInitialize.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021E5E0 (KeGetCurrentIrql.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize();
  else
    return 3221225473LL;
}
