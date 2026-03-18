/*
 * XREFs of ??0ContextTable@@QEAA@XZ @ 0x1800F8798
 * Callers:
 *     _dynamic_initializer_for__Contexts__ @ 0x180003D50 (_dynamic_initializer_for__Contexts__.c)
 * Callees:
 *     <none>
 */

ContextTable *__fastcall ContextTable::ContextTable(ContextTable *this)
{
  LODWORD(qword_1803D39A8) = 0;
  xmmword_1803D3998 = 0LL;
  RtlInitializeSRWLock(&unk_1803D39B0);
  return (ContextTable *)&xmmword_1803D3998;
}
