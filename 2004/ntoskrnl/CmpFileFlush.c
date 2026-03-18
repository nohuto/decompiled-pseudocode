/*
 * XREFs of CmpFileFlush @ 0x140637CB0
 * Callers:
 *     HvLoadHive @ 0x140637D30 (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x140717550 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14087A390 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140271378 (CmpDoFileFlush.c)
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
