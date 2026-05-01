/*
 * XREFs of sub_18001A674 @ 0x18001A674
 * Callers:
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 * Callees:
 *     sub_18000D978 @ 0x18000D978 (sub_18000D978.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1800453CC (memset.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

char *__fastcall sub_18001A674(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  void *v9; // rax
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // r14
  __int64 v14; // rcx
  char *v15; // rcx
  char *v16; // r8
  char *result; // rax

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
LABEL_22:
    sub_18000D978();
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v6 = v5 >> 1;
  if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = v6 + v5;
    if ( v6 + v5 < a2 )
      v7 = a2;
  }
  else
  {
    v7 = a2;
  }
  if ( v7 < 0x1000 )
  {
    if ( v7 )
      v12 = operator new(v7);
    else
      v12 = 0LL;
  }
  else
  {
    v8 = v7 + 39;
    if ( v7 + 39 < v7 )
      v8 = -1LL;
    v9 = operator new(v8);
    if ( !v9 )
    {
LABEL_21:
      o__invalid_parameter_noinfo_noreturn(v11, v10);
      __debugbreak();
      goto LABEL_22;
    }
    v12 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v12 - 1) = v9;
  }
  try
  {
    v13 = (char *)v12 + a2;
    memset((char *)v12 + v4, 0, v13 - ((char *)v12 + v4));
    memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  }
  catch ( ... )
  {
    std::allocator<char>::deallocate(v14, (__int64)v12, v7);
    throw;
  }
  v15 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = *(_QWORD *)(a1 + 16) - (_QWORD)v15;
    if ( v10 < 0x1000 )
    {
LABEL_19:
      j_j__o_free(v15, v10);
      goto LABEL_20;
    }
    v10 += 39LL;
    v16 = (char *)*((_QWORD *)v15 - 1);
    v11 = (char *)(v15 - v16);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v15 = v16;
      goto LABEL_19;
    }
    goto LABEL_21;
  }
LABEL_20:
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = v13;
  result = (char *)v12 + v7;
  *(_QWORD *)(a1 + 16) = (char *)v12 + v7;
  return result;
}
