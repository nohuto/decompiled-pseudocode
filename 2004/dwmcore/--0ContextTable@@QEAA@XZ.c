/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800DB720
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003520 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_180349470) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_180349478);
  return (ContextTable *)&Block;
}
