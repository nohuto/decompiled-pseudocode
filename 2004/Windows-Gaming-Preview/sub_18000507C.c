/*
 * XREFs of sub_18000507C @ 0x18000507C
 * Callers:
 *     sub_180005508 @ 0x180005508 (sub_180005508.c)
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 */

char __fastcall sub_18000507C(__int16 *a1, const void **a2, unsigned __int64 a3)
{
  char *v4; // r8
  char *v7; // rbp
  unsigned __int16 v8; // ax
  char *v9; // rbp
  char *v10; // rcx
  char result; // al
  unsigned __int16 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *((_BYTE *)a1 + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v4;
    sub_1800018E0(&v12, 2uLL, v4, 2uLL);
    *((_DWORD *)a1 + 1) = v12;
  }
  else
  {
    if ( *((_BYTE *)a1 + 2) != 2 )
      goto LABEL_8;
    v7 = v4 + 4;
    if ( (unsigned __int64)(v4 + 4) > a3 )
      return 0;
    *((_QWORD *)a1 + 2) = v4;
    sub_1800018E0(a1 + 2, 4uLL, v4, 4uLL);
  }
  v4 = v7;
LABEL_8:
  v8 = *a1;
  a1[4] = *a1;
  if ( v8 )
    goto LABEL_11;
  v9 = v4 + 2;
  if ( (unsigned __int64)(v4 + 2) > a3 )
    return 0;
  sub_1800018E0(a1 + 4, 2uLL, v4, 2uLL);
  v8 = a1[4];
  v4 = v9;
LABEL_11:
  v10 = &v4[v8];
  if ( (unsigned __int64)v10 > a3 )
    return 0;
  *((_QWORD *)a1 + 3) = v4;
  result = 1;
  *a2 = v10;
  return result;
}
