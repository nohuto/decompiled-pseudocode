/*
 * XREFs of ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001B4B8
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C001AC00 (bMigrateSurfaceForConversion.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014108C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     UserIsProcessImmersiveAppContainer @ 0x1C001B520 (UserIsProcessImmersiveAppContainer.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 */

void __fastcall SURFACE::vAppContainerOwner(SURFACE *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  struct _ENTRY *EntryFromObject; // rax

  v2 = a2;
  if ( a2 )
    v2 = -(__int64)((unsigned int)UserIsProcessImmersiveAppContainer(a2) != 0) & a2;
  GreAcquireHmgrSemaphore();
  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, this);
  if ( v2 )
    *((_BYTE *)EntryFromObject + 15) |= 0x80u;
  else
    *((_BYTE *)EntryFromObject + 15) &= ~0x80u;
  *((_QWORD *)this + 80) = v2;
  GreReleaseHmgrSemaphore();
}
