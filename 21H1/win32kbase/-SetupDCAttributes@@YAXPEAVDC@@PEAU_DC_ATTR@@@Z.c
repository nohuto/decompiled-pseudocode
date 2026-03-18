/*
 * XREFs of ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C007D488
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 * Callees:
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C007FF50 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall SetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  struct _ENTRY *EntryFromObject; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
  DC::RestoreAttributes(a1, a2);
  *((_QWORD *)EntryFromObject + 2) = a2;
}
