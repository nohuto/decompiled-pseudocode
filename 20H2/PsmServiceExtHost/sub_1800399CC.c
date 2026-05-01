/*
 * XREFs of sub_1800399CC @ 0x1800399CC
 * Callers:
 *     sub_18003960C @ 0x18003960C (sub_18003960C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800399CC(__int64 a1, void **a2, unsigned __int64 a3)
{
  char *v4; // rbx
  rsize_t v7; // r9
  char result; // al
  char *v9; // r14
  __int16 *p_Source; // r8
  rsize_t v11; // r9
  rsize_t v12; // rdx
  __int16 Source; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *(_BYTE *)(a1 + 2) == 1 )
  {
    v9 = v4 + 2;
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    p_Source = &Source;
    v11 = 2LL;
    Source = *(_WORD *)(a1 + 4);
    v12 = 2LL;
    goto LABEL_8;
  }
  if ( *(_BYTE *)(a1 + 2) == 2 )
  {
    v9 = v4 + 4;
    if ( (unsigned __int64)(v4 + 4) > a3 )
      return 0;
    v12 = 4LL;
    p_Source = (__int16 *)(a1 + 4);
    v11 = 4LL;
LABEL_8:
    memcpy_s(v4, v12, p_Source, v11);
    v4 = v9;
  }
  if ( !*(_WORD *)a1 )
  {
    if ( (unsigned __int64)(v4 + 2) > a3 )
      return 0;
    memcpy_s(v4, a3 - (_QWORD)v4, (const void *const)(a1 + 8), 2uLL);
    v4 += 2;
  }
  v7 = *(unsigned __int16 *)(a1 + 8);
  if ( (unsigned __int64)&v4[v7] <= a3 )
  {
    memcpy_s(v4, a3 - (_QWORD)v4, *(const void *const *)(a1 + 24), v7);
    result = 1;
    *a2 = &v4[*(unsigned __int16 *)(a1 + 8)];
    return result;
  }
  return 0;
}
