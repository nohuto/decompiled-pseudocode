/*
 * XREFs of CmpFileFlush @ 0x14068582C
 * Callers:
 *     HvLoadHive @ 0x1406858AC (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x1406877D0 (CmpFileFlushAndPurge.c)
 *     HvWriteExternal @ 0x1407151C0 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x1408790A0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1402E0A00 (CmpDoFileFlush.c)
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
