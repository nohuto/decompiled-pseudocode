/*
 * XREFs of sub_1C00298B4 @ 0x1C00298B4
 * Callers:
 *     sub_1C002D410 @ 0x1C002D410 (sub_1C002D410.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

void __fastcall sub_1C00298B4(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rax

  v3 = sub_1C0016CA0(a1, a2);
  if ( v3 )
    sub_1C000FD80(a1, 8, 1869567096, v3, _InterlockedExchange64((volatile __int64 *)(v3 + 688), 0LL));
}
