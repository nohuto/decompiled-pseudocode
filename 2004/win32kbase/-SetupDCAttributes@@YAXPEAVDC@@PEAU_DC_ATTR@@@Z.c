/*
 * XREFs of ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0083F78
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C0086FF0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0089E90 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall SetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  struct _ENTRY *EntryFromObject; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
  DC::RestoreAttributes(a1, a2);
  *((_QWORD *)EntryFromObject + 2) = a2;
}
