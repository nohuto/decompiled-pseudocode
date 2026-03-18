/*
 * XREFs of ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00BF460
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 *     ?vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z @ 0x1C00BD620 (-vReleaseCurrentpMapProcForSurfaces@@YAXW4_CLEANUPTYPE@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00BDDB8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     MultiUserCleanupDCs @ 0x1C00BDE54 (MultiUserCleanupDCs.c)
 *     HmgNextGarbageCollectible @ 0x1C00BDFD4 (HmgNextGarbageCollectible.c)
 *     HmgSafeNextObjtByIndex @ 0x1C00BF3BC (HmgSafeNextObjtByIndex.c)
 *     HmgNextOwned @ 0x1C00C0810 (HmgNextOwned.c)
 *     NtGdiGetStats @ 0x1C01431D0 (NtGdiGetStats.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014352C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

__int64 __fastcall GdiHandleManager::GetNextEntryIndex(GdiHandleManager *this, unsigned int a2, struct _ENTRY **a3)
{
  GdiHandleManager *v3; // rdi
  struct _ENTRY *Entry; // rax

  v3 = gpHandleManager;
  *a3 = 0LL;
  while ( ++a2 < *(_DWORD *)v3 )
  {
    Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v3 + 2), a2, 0);
    *a3 = Entry;
    if ( Entry )
      return a2;
  }
  return 0LL;
}
