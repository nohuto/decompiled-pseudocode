/*
 * XREFs of sub_18006D6E8 @ 0x18006D6E8
 * Callers:
 *     sub_18006CB24 @ 0x18006CB24 (sub_18006CB24.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 */

char __fastcall sub_18006D6E8(__int64 a1, __int64 a2)
{
  char *v2; // rcx
  _OWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx

  v2 = *(char **)(a2 + 64);
  v3 = (_OWORD *)(a2 + 104);
  v4 = *(_QWORD *)(a2 + 104);
  if ( *(_QWORD *)(v4 + 8) != a2 + 104 || (v6 = *(_QWORD **)(a2 + 112), (_OWORD *)*v6 != v3) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v3 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  sub_1800265B0(v2);
  return sub_1800265B0((char *)a2);
}
