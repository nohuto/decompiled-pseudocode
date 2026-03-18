/*
 * XREFs of BgLibraryInitialize @ 0x140AADB90
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 *     BgkInitialize @ 0x140B56D04 (BgkInitialize.c)
 * Callees:
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 */

__int64 __fastcall BgLibraryInitialize(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || KeGetCurrentIrql() <= 2u )
    return BgpFwLibraryInitialize(a1, a2);
  else
    return 3221225473LL;
}
