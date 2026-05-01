/*
 * XREFs of sub_1800317B0 @ 0x1800317B0
 * Callers:
 *     sub_180031588 @ 0x180031588 (sub_180031588.c)
 * Callees:
 *     sub_180031878 @ 0x180031878 (sub_180031878.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memmove @ 0x18004682E (memmove.c)
 */

char __fastcall sub_1800317B0(char **a1, char *a2, unsigned __int64 a3)
{
  char *v3; // r14
  char *v5; // rcx
  char v8; // r15
  unsigned __int64 v9; // rax
  char *v10; // rbp
  size_t v11; // rbx
  char *v12; // rbx
  void *v13; // rax
  char *v15; // rax
  void *v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)(a1 + 2);
  v5 = *a1;
  v8 = 1;
  if ( v5 == v3 )
    v9 = 7LL;
  else
    v9 = (__int64)(*(_QWORD *)v3 - (_QWORD)v5) >> 1;
  if ( a3 <= v9 )
  {
    if ( v5 != a2 )
    {
      memmove(v5, a2, 2 * a3);
      v5 = *a1;
    }
    v15 = &v5[2 * a3];
    a1[1] = v15;
    *(_WORD *)v15 = 0;
  }
  else
  {
    sub_180031878(a1, v16);
    v10 = (char *)v16[0];
    if ( v16[0] )
    {
      v11 = 2 * a3;
      memcpy(v16[0], a2, v11);
      v12 = &v10[v11];
      *(_WORD *)v12 = 0;
      if ( *a1 != v3 )
        j_j_free(*a1);
      v13 = v16[1];
      *a1 = v10;
      a1[1] = v12;
      *(_QWORD *)v3 = &v10[2 * (_QWORD)v13 - 2];
    }
    else
    {
      return 0;
    }
  }
  return v8;
}
