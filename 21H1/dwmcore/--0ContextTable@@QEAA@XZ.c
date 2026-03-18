/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800D3B28
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003520 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_18034D4D0) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_18034D4D8);
  return (ContextTable *)&Block;
}
