/*
 * XREFs of ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C005C5C0
 * Callers:
 *     ?ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@@Z @ 0x1C005C654 (-ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@.c)
 *     ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C02E7794 (-AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  return a2 + *(_QWORD *)(a1 + 24);
}
