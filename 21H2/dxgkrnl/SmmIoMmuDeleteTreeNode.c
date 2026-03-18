/*
 * XREFs of SmmIoMmuDeleteTreeNode @ 0x1C006D9DC
 * Callers:
 *     SmmClearPageManager @ 0x1C006D7E8 (SmmClearPageManager.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall SmmIoMmuDeleteTreeNode(PSLIST_ENTRY ListEntry, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2 + 16;
  ++*(_DWORD *)(a2 + 44);
  if ( ExQueryDepthSList((PSLIST_HEADER)(a2 + 16)) < *(_WORD *)(a2 + 32) )
    return ExpInterlockedPushEntrySList((PSLIST_HEADER)v2, ListEntry);
  ++*(_DWORD *)(v2 + 32);
  return (PSLIST_ENTRY)(*(__int64 (__fastcall **)(PSLIST_ENTRY, __int64))(v2 + 56))(ListEntry, v2);
}
