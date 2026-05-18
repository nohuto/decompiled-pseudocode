/*
 * XREFs of sub_1800A22DC @ 0x1800A22DC
 * Callers:
 *     sub_1800A2258 @ 0x1800A2258 (sub_1800A2258.c)
 *     sub_1800A22DC @ 0x1800A22DC (sub_1800A22DC.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_18007B8A0 @ 0x18007B8A0 (sub_18007B8A0.c)
 *     sub_1800A22DC @ 0x1800A22DC (sub_1800A22DC.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A22DC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rsi
  __int64 *v6; // rdi
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800A22DC(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_18001FFEC(v6 + 7, (__int64)(v6 + 7));
    sub_18007B8A0(v6 + 5);
  }
  return result;
}
