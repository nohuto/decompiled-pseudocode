/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800DFD70
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003520 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_18034B510) = 0;
  *(_OWORD *)&Block = 0LL;
  RtlInitializeSRWLock(&unk_18034B518);
  return (ContextTable *)&Block;
}
