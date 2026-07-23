/*
 * XREFs of MiDecrementControlAreaCount @ 0x140302938
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x1402850C8 (MiCheckForControlAreaDeletion.c)
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiDrainCrossPartitionUsage @ 0x1405622DC (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
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
