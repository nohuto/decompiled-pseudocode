/*
 * XREFs of sub_1800A754C @ 0x1800A754C
 * Callers:
 *     sub_1800A52D8 @ 0x1800A52D8 (sub_1800A52D8.c)
 *     sub_1800A5B70 @ 0x1800A5B70 (sub_1800A5B70.c)
 *     sub_1800A5BA8 @ 0x1800A5BA8 (sub_1800A5BA8.c)
 *     sub_1800A6074 @ 0x1800A6074 (sub_1800A6074.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800A674C @ 0x1800A674C (sub_1800A674C.c)
 *     sub_1800A6880 @ 0x1800A6880 (sub_1800A6880.c)
 *     sub_1800A690C @ 0x1800A690C (sub_1800A690C.c)
 *     sub_1800D6BE0 @ 0x1800D6BE0 (sub_1800D6BE0.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 * Callees:
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 */

__int64 *__fastcall sub_1800A754C(__int64 *a1, __int64 *a2, size_t *a3)
{
  __int64 v3; // r15
  __int64 *v6; // rax
  __int64 v7; // rbx
  const void *v8; // rdx
  const void *v9; // rcx
  unsigned __int64 v10; // rbp
  size_t v11; // rdi
  size_t v12; // r8
  int v13; // eax
  bool v14; // sf

  v3 = *a1;
  v6 = sub_1800759E4(a1, a3);
  v7 = (__int64)v6;
  if ( v6 == (__int64 *)v3 )
    goto LABEL_13;
  v8 = v6 + 4;
  if ( (unsigned __int64)v6[7] >= 0x10 )
    v8 = (const void *)v6[4];
  v9 = a3;
  if ( a3[3] >= 0x10 )
    v9 = (const void *)*a3;
  v10 = v6[6];
  v11 = a3[2];
  v12 = v11;
  if ( v10 < v11 )
    v12 = v6[6];
  v13 = memcmp(v9, v8, v12);
  v14 = v13 < 0;
  if ( v13 )
  {
LABEL_12:
    if ( v14 )
      goto LABEL_13;
    goto LABEL_14;
  }
  if ( v11 < v10 )
  {
LABEL_13:
    v7 = v3;
    goto LABEL_14;
  }
  if ( v11 <= v10 )
  {
    v14 = 0;
    goto LABEL_12;
  }
LABEL_14:
  *a2 = v7;
  return a2;
}
