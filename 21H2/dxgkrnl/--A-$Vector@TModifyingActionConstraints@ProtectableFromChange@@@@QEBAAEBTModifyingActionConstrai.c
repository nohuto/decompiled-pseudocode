/*
 * XREFs of ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEBAAEBTModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x1C0011E2C
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)(a1 + 16) )
    WdLogSingleEntry0(1LL);
  return a2 + *(_QWORD *)(a1 + 24);
}
