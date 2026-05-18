/*
 * XREFs of sub_1800AB57C @ 0x1800AB57C
 * Callers:
 *     sub_1800AF1E0 @ 0x1800AF1E0 (sub_1800AF1E0.c)
 * Callees:
 *     sub_1800ACA04 @ 0x1800ACA04 (sub_1800ACA04.c)
 */

bool __fastcall sub_1800AB57C(_QWORD *a1, _QWORD *a2)
{
  char v2; // bl
  __int64 v3; // r9
  char v5; // [rsp+30h] [rbp+8h]

  v2 = 0;
  v3 = (a2[1] - *a2) / 48LL;
  if ( (a1[1] - *a1) / 48LL == v3 )
  {
    LOBYTE(v3) = v5;
    return (unsigned __int8)sub_1800ACA04(*a1, a1[1], *a2, v3) != 0;
  }
  return v2;
}
