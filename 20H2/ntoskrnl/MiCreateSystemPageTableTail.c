/*
 * XREFs of MiCreateSystemPageTableTail @ 0x14031F190
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 */

__int64 __fastcall MiCreateSystemPageTableTail(__int64 a1, _KPROCESS *a2)
{
  MiFlushTbList((unsigned int *)(*(_QWORD *)(a1 + 168) + 80LL), a2);
  return 0LL;
}
