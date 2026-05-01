/*
 * XREFs of sub_180004F80 @ 0x180004F80
 * Callers:
 *     sub_1800057C8 @ 0x1800057C8 (sub_1800057C8.c)
 * Callees:
 *     sub_1800018E0 @ 0x1800018E0 (sub_1800018E0.c)
 */

char __fastcall sub_180004F80(__int64 a1, void **a2, unsigned __int64 a3)
{
  char *v4; // rbx
  char *v7; // r14
  __int16 *v8; // r8
  size_t v9; // r9
  size_t v10; // rdx
  __int64 v11; // rcx
  char result; // al
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *(_BYTE *)(a1 + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    v8 = &v13;
    v9 = 2LL;
    v13 = *(_WORD *)(a1 + 4);
    v10 = 2LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 2) != 2 )
      goto LABEL_8;
    v7 = v4 + 4;
    if ( (unsigned __int64)(v4 + 4) > a3 )
      return 0;
    v10 = 4LL;
    v8 = (__int16 *)(a1 + 4);
    v9 = 4LL;
  }
  sub_1800018E0(v4, v10, v8, v9);
  v4 = v7;
LABEL_8:
  if ( *(_WORD *)a1 )
    goto LABEL_11;
  if ( (unsigned __int64)(v4 + 2) > a3 )
    return 0;
  sub_1800018E0(v4, a3 - (_QWORD)v4, (const void *)(a1 + 8), 2uLL);
  v4 += 2;
LABEL_11:
  v11 = *(unsigned __int16 *)(a1 + 8);
  if ( (unsigned __int64)&v4[v11] > a3 )
    return 0;
  if ( *(_WORD *)(a1 + 8) )
  {
    sub_1800018E0(v4, a3 - (_QWORD)v4, *(const void **)(a1 + 24), *(unsigned __int16 *)(a1 + 8));
    LOWORD(v11) = *(_WORD *)(a1 + 8);
  }
  result = 1;
  *a2 = &v4[(unsigned __int16)v11];
  return result;
}
