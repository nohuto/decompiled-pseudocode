/*
 * XREFs of sub_180004C18 @ 0x180004C18
 * Callers:
 *     sub_180006478 @ 0x180006478 (sub_180006478.c)
 *     sub_180006E34 @ 0x180006E34 (sub_180006E34.c)
 *     sub_180007894 @ 0x180007894 (sub_180007894.c)
 *     sub_180007D94 @ 0x180007D94 (sub_180007D94.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 *     sub_180004B0C @ 0x180004B0C (sub_180004B0C.c)
 */

char __fastcall sub_180004C18(_QWORD *a1, const void *a2, size_t a3)
{
  size_t v6; // rcx
  unsigned __int64 v7; // rdx
  char result; // al
  char *v9; // rcx

  v6 = a1[2] - *a1;
  if ( a3 + a1[1] - *a1 < v6 )
    goto LABEL_5;
  v7 = a3;
  if ( a3 < 2 * v6 )
    v7 = 2 * v6;
  result = sub_180004B0C((__int64)a1, v7);
  if ( result )
  {
LABEL_5:
    v9 = (char *)a1[1];
    if ( a3 )
    {
      sub_1800018E0(v9, (a1[2] - (_QWORD)v9) & -(__int64)((unsigned __int64)v9 < a1[2]), a2, a3);
      v9 = (char *)a1[1];
    }
    a1[1] = &v9[a3];
    return 1;
  }
  return result;
}
