/*
 * XREFs of sub_18011598C @ 0x18011598C
 * Callers:
 *     sub_18012B0AC @ 0x18012B0AC (sub_18012B0AC.c)
 * Callees:
 *     sub_180068FF4 @ 0x180068FF4 (sub_180068FF4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18011598C(__int64 *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)a1[1];
  if ( v1 )
  {
    sub_180068FF4(a1[1], *a1, *(__int64 **)(*v1 + 8LL));
    return j_j__o_free(*v1);
  }
  return result;
}
