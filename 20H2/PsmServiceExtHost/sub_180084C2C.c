/*
 * XREFs of sub_180084C2C @ 0x180084C2C
 * Callers:
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 * Callees:
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 */

char __fastcall sub_180084C2C(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( (_QWORD *)a1[9] != a1 + 9 )
    sub_18003667C((char *)qword_1800B3DC0, (__int64)(a1 + 8), 0);
  v2 = a1[18];
  if ( v2 )
  {
    TpSetTimer(v2, 0LL, 0LL, 0LL);
    TpWaitForTimer(a1[18], 1LL);
    TpReleaseTimer(a1[18]);
  }
  if ( (_QWORD *)a1[13] != a1 + 13 )
    sub_18003667C((char *)qword_1800B3E30, (__int64)(a1 + 12), 0);
  v3 = a1 + 16;
  if ( (_QWORD *)*v3 != v3 )
    LOBYTE(v3) = sub_18003667C((char *)qword_1800B3E38, (__int64)(a1 + 15), 0);
  return (char)v3;
}
