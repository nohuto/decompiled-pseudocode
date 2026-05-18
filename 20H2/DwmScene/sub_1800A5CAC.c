/*
 * XREFs of sub_1800A5CAC @ 0x1800A5CAC
 * Callers:
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 * Callees:
 *     sub_1800A7134 @ 0x1800A7134 (sub_1800A7134.c)
 */

bool __fastcall sub_1800A5CAC(_QWORD *a1, _QWORD *a2)
{
  char v2; // bl
  __int64 v3; // r9
  char v5; // [rsp+30h] [rbp+8h]

  v2 = 0;
  v3 = (a2[1] - *a2) / 48LL;
  if ( (a1[1] - *a1) / 48LL == v3 )
  {
    LOBYTE(v3) = v5;
    return (unsigned __int8)sub_1800A7134(*a1, a1[1], *a2, v3) != 0;
  }
  return v2;
}
