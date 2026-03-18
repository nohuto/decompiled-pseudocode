/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C0008FC4
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C0008EB0 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0009020 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0083120 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  ENTRYOBJ *EntryFromObject; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      EntryFromObject = GdiHandleManager::GetEntryFromObject(gpHandleManager, a1);
      if ( EntryFromObject )
        return (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, a2) != 0;
    }
  }
  return v2;
}
