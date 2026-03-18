/*
 * XREFs of MiDecrementControlAreaCount @ 0x1402B967C
 * Callers:
 *     MiDeleteControlArea @ 0x1402B9578 (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F1478 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x14055C5AC (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  _InterlockedDecrement64(a2);
  v2 = *(_QWORD *)(a1 + 1352);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 1360);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2128), 0, 0);
  }
  return v2;
}
