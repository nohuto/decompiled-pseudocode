/*
 * XREFs of MiGetNextPageTableTail @ 0x140319000
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1, _KPROCESS *a2)
{
  unsigned int *v2; // rcx

  v2 = *(unsigned int **)(a1 + 16);
  if ( v2 )
    MiFlushTbList(v2, a2);
  return 0LL;
}
