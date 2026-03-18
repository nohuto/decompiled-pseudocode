/*
 * XREFs of IommuHvFlushTb @ 0x1404D49B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuHvFlushTb(_QWORD *a1, unsigned int a2, __int64 a3)
{
  if ( qword_140C4A458 )
    qword_140C4A458(*(unsigned int *)(*a1 + 16LL), *(unsigned int *)(a1[1] + 16LL), a2, a3);
  return 0LL;
}
