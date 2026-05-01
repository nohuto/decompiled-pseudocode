/*
 * XREFs of sub_180084B3C @ 0x180084B3C
 * Callers:
 *     sub_180036520 @ 0x180036520 (sub_180036520.c)
 * Callees:
 *     sub_18003667C @ 0x18003667C (sub_18003667C.c)
 */

char __fastcall sub_180084B3C(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx

  v2 = (_QWORD *)(a1 + 72);
  if ( (_QWORD *)*v2 != v2 )
    LOBYTE(v2) = sub_18003667C((char *)qword_1800B3DB0, a1 + 64, 0);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    TpSetTimer(v3, 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(a1 + 88), 1LL);
    LOBYTE(v2) = TpReleaseTimer(*(_QWORD *)(a1 + 88));
  }
  return (char)v2;
}
