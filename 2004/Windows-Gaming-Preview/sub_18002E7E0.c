/*
 * XREFs of sub_18002E7E0 @ 0x18002E7E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     sub_18002FF60 @ 0x18002FF60 (sub_18002FF60.c)
 *     sub_180032A0C @ 0x180032A0C (sub_180032A0C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002E7E0(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  *a1 = off_18004D6A0;
  a1[1] = off_18004D680;
  a1[2] = off_18004D648;
  a1[3] = off_18004D600;
  sub_18002FF60(a1, 0LL);
  v4 = (volatile signed __int32 *)a1[22];
  if ( v4 && _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
    j_j__o_free(v4, 4LL);
  sub_180032A0C(a1 + 9);
  sub_18000CDD4((__int64)a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 192LL);
  return a1;
}
