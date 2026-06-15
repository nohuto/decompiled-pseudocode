/*
 * XREFs of sub_180112C60 @ 0x180112C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180111BF0 @ 0x180111BF0 (sub_180111BF0.c)
 *     sub_180112C10 @ 0x180112C10 (sub_180112C10.c)
 */

__int64 __fastcall sub_180112C60(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rax

  v4 = (_QWORD *)(a1 + 16);
  v9 = sub_180111BF0((_QWORD *)(a1 + 16), a2);
  if ( !v9 )
    return 2147943568LL;
  sub_180112C10(v4, v9);
  *a3 = sub_180111BF0(v4, a2) == 0LL;
  *a4 = *(_QWORD *)(a1 + 32) == 0LL;
  return 0LL;
}
