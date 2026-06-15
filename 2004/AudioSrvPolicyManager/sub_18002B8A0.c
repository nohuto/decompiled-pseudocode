/*
 * XREFs of sub_18002B8A0 @ 0x18002B8A0
 * Callers:
 *     sub_180008690 @ 0x180008690 (sub_180008690.c)
 *     sub_180031150 @ 0x180031150 (sub_180031150.c)
 *     sub_180036DF4 @ 0x180036DF4 (sub_180036DF4.c)
 *     sub_180038278 @ 0x180038278 (sub_180038278.c)
 *     sub_1800387CC @ 0x1800387CC (sub_1800387CC.c)
 * Callees:
 *     sub_18002B868 @ 0x18002B868 (sub_18002B868.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 */

_QWORD *__fastcall sub_18002B8A0(_QWORD *a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rbx
  _WORD *v9; // rax
  _WORD *v10; // rdi
  size_t v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = a3;
  if ( !a2 && a3 == -1LL )
  {
    sub_18002B868(retaddr, 3244, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h");
    JUMPOUT(0x18002B9BDLL);
  }
  v6 = a3;
  if ( a2 )
  {
    v7 = 0x7FFFFFFFLL;
    v8 = a2;
    if ( a3 < 0x7FFFFFFF )
      v7 = a3;
    for ( ; v7; --v7 )
    {
      if ( !*(_WORD *)v8 )
        break;
      v8 += 2;
    }
    v6 = (v8 - a2) >> 1;
  }
  if ( a3 == -1LL )
    v3 = v6;
  v9 = CoTaskMemAlloc(2 * v3 + 2);
  v10 = v9;
  if ( v9 )
  {
    if ( a2 )
    {
      v11 = 2 * v6;
      if ( v11 )
      {
        if ( 2 * v3 + 2 < v11 )
        {
          memset(v9, 0, 2 * v3 + 2);
          *(_DWORD *)o__errno(v13, v12) = 34;
          o__invalid_parameter_noinfo();
        }
        else
        {
          memcpy(v9, a2, v11);
        }
      }
      v10[v11 / 2] = 0;
    }
    else
    {
      *v9 = 0;
    }
    v10[v3] = 0;
  }
  result = a1;
  *a1 = v10;
  return result;
}
