/*
 * XREFs of ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x1C007FB6C
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C008B734 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     HmgFreeDcAttr @ 0x1C007F458 (HmgFreeDcAttr.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C007FD70 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
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
