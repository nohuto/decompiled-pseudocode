/*
 * XREFs of MiDecrementControlAreaCount @ 0x1402D2688
 * Callers:
 *     MiDeleteControlArea @ 0x1402D2584 (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x140300958 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x1405605CC (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
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
