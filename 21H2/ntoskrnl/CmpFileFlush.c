/*
 * XREFs of CmpFileFlush @ 0x1406E10CC
 * Callers:
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x14068C238 (HvLoadHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14090DF50 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140258000 (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
