/*
 * XREFs of sub_1800184BC @ 0x1800184BC
 * Callers:
 *     sub_180016384 @ 0x180016384 (sub_180016384.c)
 * Callees:
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

// Hidden C++ exception states: #try_helpers=1
char *__fastcall sub_1800184BC(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  void *v7; // rax
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  _QWORD *v10; // rbx
  char *v11; // rcx
  char *v12; // r8
  char *result; // rax

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v4 = 2 * a2;
  v5 = 16 * a2;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  if ( v5 < 0x1000 )
  {
    if ( v5 )
      v10 = operator new(v5);
    else
      v10 = 0LL;
  }
  else
  {
    v6 = v5 + 39;
    if ( v5 + 39 < v5 )
      v6 = -1LL;
    v7 = operator new(v6);
    if ( !v7 )
      goto LABEL_17;
    v10 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v10 - 1) = v7;
  }
  memmove(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  v11 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v8 = (*(_QWORD *)(a1 + 16) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v8 < 0x1000 )
    {
LABEL_15:
      j_j__o_free(v11, v8);
      goto LABEL_16;
    }
    v8 += 39LL;
    v12 = (char *)*((_QWORD *)v11 - 1);
    v9 = (char *)(v11 - v12);
    if ( (unsigned __int64)(v9 - 8) <= 0x1F )
    {
      v11 = v12;
      goto LABEL_15;
    }
LABEL_17:
    o__invalid_parameter_noinfo_noreturn(v9, v8);
    __debugbreak();
    JUMPOUT(0x1800185BDLL);
  }
LABEL_16:
  *(_QWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = (char *)v10 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
  result = (char *)&v10[v4];
  *(_QWORD *)(a1 + 16) = &v10[v4];
  return result;
}
