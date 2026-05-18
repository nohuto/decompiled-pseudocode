/*
 * XREFs of sub_18009E8C0 @ 0x18009E8C0
 * Callers:
 *     sub_180014EE0 @ 0x180014EE0 (sub_180014EE0.c)
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18009E8C0(__int64 a1, __int64 a2)
{
  *(_OWORD *)(a1 + 88) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 16);
}
