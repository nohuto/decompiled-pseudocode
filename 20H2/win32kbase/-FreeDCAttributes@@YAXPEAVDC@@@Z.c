/*
 * XREFs of ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C0040A10
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C004BBCC (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x1C003E544 (HmgFreeDcAttr.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0040B20 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0044450 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

void __fastcall FreeDCAttributes(struct DC *a1)
{
  struct _ENTRY *EntryFromObject; // rax
  struct _DC_ATTR *v3; // rbx

  EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
  v3 = (struct _DC_ATTR *)*((_QWORD *)EntryFromObject + 2);
  if ( v3 )
  {
    *((_QWORD *)EntryFromObject + 2) = 0LL;
    if ( (*((_DWORD *)a1 + 11) & 2) == 0 )
      DC::SaveAttributes(a1, v3);
    HmgFreeDcAttr((__int64)v3);
  }
}
