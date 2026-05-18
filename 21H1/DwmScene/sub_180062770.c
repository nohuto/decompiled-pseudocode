/*
 * XREFs of sub_180062770 @ 0x180062770
 * Callers:
 *     sub_1800CD5F0 @ 0x1800CD5F0 (sub_1800CD5F0.c)
 * Callees:
 *     sub_180020058 @ 0x180020058 (sub_180020058.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180062770(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 result; // rax

  v1 = a1 + 80;
  v2 = *(_QWORD **)(a1 + 80);
  v3 = (__int64 *)v2[1];
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_180020058(v1, v1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    result = j_j__o_free(v4);
  }
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  *(_QWORD *)(v1 + 8) = 0LL;
  return result;
}
