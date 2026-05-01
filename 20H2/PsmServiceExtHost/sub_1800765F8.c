/*
 * XREFs of sub_1800765F8 @ 0x1800765F8
 * Callers:
 *     sub_1800012D4 @ 0x1800012D4 (sub_1800012D4.c)
 *     sub_180071050 @ 0x180071050 (sub_180071050.c)
 * Callees:
 *     sub_18000138C @ 0x18000138C (sub_18000138C.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 */

char __fastcall sub_1800765F8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _OWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = a2 + 64;
  if ( (*(_BYTE *)(a2 + 836) & 1) != 0 )
  {
    sub_1800093A0(v2, 0);
    *(_QWORD *)(v2 + 648) |= 0x8000000000000uLL;
    sub_18001CC80(v2, 0);
    sub_18000A110(v2);
  }
  else
  {
    *(_DWORD *)(a2 + 1240) |= 2u;
    sub_18000138C(a1, a2, 0);
  }
  v4 = (_OWORD *)(a2 + 1256);
  v5 = *(_QWORD *)(a2 + 1256);
  if ( *(_QWORD *)(v5 + 8) != a2 + 1256 || (v6 = *(_QWORD **)(a2 + 1264), (_OWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  return sub_1800265B0((char *)a2);
}
