/*
 * XREFs of MiGetNextPageTableTail @ 0x14030B030
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 */

__int64 __fastcall MiGetNextPageTableTail(__int64 a1, _KPROCESS *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    MiFlushTbList(v2, a2);
  return 0LL;
}
