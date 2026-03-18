/*
 * XREFs of ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C000B2E8
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01385EC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v5; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  return a2 + *(_QWORD *)(a1 + 24);
}
