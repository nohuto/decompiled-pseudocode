/*
 * XREFs of ?Destroy@GdiHandleManager@@SAXPEAV1@@Z @ 0x1C0022010
 * Callers:
 *     HmgCreate @ 0x1C00087BC (HmgCreate.c)
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 * Callees:
 *     ?Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z @ 0x1C002204C (-Destroy@GdiHandleEntryDirectory@@SAXPEAV1@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall GdiHandleManager::Destroy(struct GdiHandleManager *a1)
{
  GdiHandleManager *v1; // rbx
  __int64 v2; // rcx

  v1 = gpHandleManager;
  v2 = *((_QWORD *)gpHandleManager + 3);
  if ( v2 )
    Win32FreePool(v2);
  GdiHandleEntryDirectory::Destroy(*((struct GdiHandleEntryDirectory **)v1 + 2));
  Win32FreePool(v1);
}
