/*
 * XREFs of sub_1800A5B70 @ 0x1800A5B70
 * Callers:
 *     sub_18009272C @ 0x18009272C (sub_18009272C.c)
 *     sub_1800A5084 @ 0x1800A5084 (sub_1800A5084.c)
 *     sub_1800A5D20 @ 0x1800A5D20 (sub_1800A5D20.c)
 *     sub_1800AA22C @ 0x1800AA22C (sub_1800AA22C.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 * Callees:
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 */

__int64 __fastcall sub_1800A5B70(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  sub_1800A754C(a1 + 16, &v4, a2);
  if ( v4 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v4 + 64);
}
