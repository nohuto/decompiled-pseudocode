/*
 * XREFs of sub_18002EB3C @ 0x18002EB3C
 * Callers:
 *     sub_18002DD60 @ 0x18002DD60 (sub_18002DD60.c)
 *     sub_1800C66A4 @ 0x1800C66A4 (sub_1800C66A4.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

char __fastcall sub_18002EB3C(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  void *v8; // rax
  void *v9; // rsi
  const void *v10; // rcx
  size_t v11; // r8
  __int64 v12; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !v5 )
    {
      v5 = v4 >> 1;
      if ( a2 - v4 > v4 >> 1 )
        v5 = a2 - v4;
    }
    if ( a2 < v4 + v5 )
      a2 = v4 + v5;
    v8 = (void *)o_calloc(a2, 8LL);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(const void **)a1;
      v11 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v11 )
      {
        if ( !v10 )
        {
          *(_DWORD *)o__errno(0LL) = 22;
          o__invalid_parameter_noinfo(v12);
          sub_1800B8610(2147942487LL);
        }
        memmove(v8, *(const void **)a1, v11);
        v10 = *(const void **)a1;
      }
      _o_free(v10);
      *(_QWORD *)a1 = v9;
      goto LABEL_6;
    }
  }
  else
  {
    if ( v5 > a2 )
      a2 = v5;
    v6 = o_calloc(a2, 8LL);
    *(_QWORD *)a1 = v6;
    if ( v6 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 16) = a2;
      return 1;
    }
  }
  return 0;
}
