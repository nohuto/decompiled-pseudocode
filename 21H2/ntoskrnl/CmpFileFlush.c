/*
 * XREFs of CmpFileFlush @ 0x1406FC904
 * Callers:
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 *     HvWriteExternal @ 0x140729450 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14087DA00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1402F7D80 (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1536);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
