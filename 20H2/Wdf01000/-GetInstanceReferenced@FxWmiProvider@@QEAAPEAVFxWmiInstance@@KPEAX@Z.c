/*
 * XREFs of ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C003D9F0
 * Callers:
 *     ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C003FC40 (-_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000C8E0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C003DA58 (-GetInstanceReferencedLocked@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

FxWmiInstance *__fastcall FxWmiProvider::GetInstanceReferenced(FxWmiProvider *this, unsigned int Index, void *Tag)
{
  FxWmiInstance *InstanceReferencedLocked; // rbx
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this->m_Parent, &irql, (unsigned __int8)Tag);
  InstanceReferencedLocked = FxWmiProvider::GetInstanceReferencedLocked(this, Index, Tag);
  FxNonPagedObject::Unlock(this->m_Parent, irql, v7);
  return InstanceReferencedLocked;
}
