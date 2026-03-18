/*
 * XREFs of MiDecrementControlAreaCount @ 0x140270204
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x140220944 (MiCheckForControlAreaDeletion.c)
 *     MiDeleteControlArea @ 0x1402700FC (MiDeleteControlArea.c)
 *     MiDrainCrossPartitionUsage @ 0x1405BE340 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
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
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2352), 0, 0);
  }
  return v2;
}
