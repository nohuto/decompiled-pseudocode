/*
 * XREFs of sub_18008128C @ 0x18008128C
 * Callers:
 *     sub_18008150C @ 0x18008150C (sub_18008150C.c)
 * Callees:
 *     sub_180072A48 @ 0x180072A48 (sub_180072A48.c)
 *     sub_180077B14 @ 0x180077B14 (sub_180077B14.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18008128C(_QWORD *a1)
{
  _QWORD *v1; // rdi
  __int64 *v3; // r14
  __int64 *v4; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  while ( !*((_BYTE *)v3 + 25) )
  {
    sub_180072A48((__int64)a1, (__int64)a1, (__int64 *)v3[2]);
    v4 = v3;
    v3 = (__int64 *)*v3;
    sub_180077B14((__int64)(v4 + 4));
    result = j_j__o_free(v4);
  }
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
