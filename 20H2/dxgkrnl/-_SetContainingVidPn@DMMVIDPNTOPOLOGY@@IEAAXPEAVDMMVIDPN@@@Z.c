/*
 * XREFs of ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007BA8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C010B228 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C010F170 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C0007CE0 (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0007D18 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C0007E9C (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::_SetContainingVidPn(DMMVIDPNTOPOLOGY *this, struct DMMVIDPN *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 0) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  ContainedBy<DMMVIDPN>::SetContainer((char *)this + 160, a2);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 0);
}
