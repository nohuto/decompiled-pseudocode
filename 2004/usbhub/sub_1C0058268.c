/*
 * XREFs of sub_1C0058268 @ 0x1C0058268
 * Callers:
 *     sub_1C0036FAC @ 0x1C0036FAC (sub_1C0036FAC.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 * Callees:
 *     sub_1C0003770 @ 0x1C0003770 (sub_1C0003770.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001518C @ 0x1C001518C (sub_1C001518C.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 */

void __fastcall sub_1C0058268(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rax
  _DWORD *v7; // rax

  sub_1C000FD80(a1, 256, 1919968372, a2, a3);
  v5 = sub_1C0011220(a2);
  v6 = sub_1C0016CA0(a1, *((_WORD *)v5 + 714));
  if ( v6 )
  {
    *(_QWORD *)(v6 + 392) = 0LL;
    _InterlockedExchange((volatile __int32 *)(v6 + 428), 0);
    v7 = sub_1C0011220(a2);
    v7[356] &= ~8u;
    sub_1C001518C(a1, a2, -1073741810);
    sub_1C0003770(a1, a2, 0LL, 0x4C415443u);
  }
}
