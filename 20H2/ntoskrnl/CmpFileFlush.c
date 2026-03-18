/*
 * XREFs of CmpFileFlush @ 0x1405DAEC8
 * Callers:
 *     HvLoadHive @ 0x1405DAF48 (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x1405DCDAC (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x140725510 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14087FF00 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1402042CC (CmpDoFileFlush.c)
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
