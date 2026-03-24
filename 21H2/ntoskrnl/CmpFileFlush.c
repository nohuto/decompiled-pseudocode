/*
 * XREFs of CmpFileFlush @ 0x14071DA34
 * Callers:
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x140722748 (HvLoadHive.c)
 *     HvWriteExternal @ 0x140728FA0 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14087D8A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140361D88 (CmpDoFileFlush.c)
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
