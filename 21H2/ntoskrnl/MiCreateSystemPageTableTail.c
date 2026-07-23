/*
 * XREFs of MiCreateSystemPageTableTail @ 0x14023F050
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1)
{
  MiFlushTbList(*(_QWORD *)(a1 + 168) + 80LL);
  return 0LL;
}
