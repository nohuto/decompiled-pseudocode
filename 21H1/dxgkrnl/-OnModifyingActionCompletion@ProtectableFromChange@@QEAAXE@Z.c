/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000DC60
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00106B8 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0129794 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012A008 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C011DD58 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = (unsigned __int8)a2;
  if ( (unsigned __int64)(unsigned __int8)a2 >= *((_QWORD *)this + 10) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  v4 = *((_QWORD *)this + 11);
  if ( *(_QWORD *)(v4 + 8 * v2) != 255LL )
  {
    if ( v2 >= *((_QWORD *)this + 10) )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v6);
      v4 = *((_QWORD *)this + 11);
    }
    --*(_QWORD *)(v4 + 8 * v2);
  }
  if ( v2 >= *((_QWORD *)this + 10) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) )
    ProtectableFromChange::DisallowModifyingAction(this, v2);
}
