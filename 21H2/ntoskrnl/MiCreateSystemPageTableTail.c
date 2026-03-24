/*
 * XREFs of MiCreateSystemPageTableTail @ 0x1402C0BE0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  MiFlushTbList(*(_QWORD *)(a1 + 168) + 80LL);
  return 0LL;
}
