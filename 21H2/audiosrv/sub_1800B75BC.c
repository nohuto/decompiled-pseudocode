/*
 * XREFs of sub_1800B75BC @ 0x1800B75BC
 * Callers:
 *     sub_1800BA2F0 @ 0x1800BA2F0 (sub_1800BA2F0.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 */

__int64 __fastcall sub_1800B75BC(__int64 a1, const WCHAR **a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  _BYTE *v7; // rbp
  HSTRING *v8; // rax
  HSTRING *v9; // r14
  int v10; // ebx
  __int64 v11; // rdi
  signed __int64 v12; // r15
  __int64 v13; // rdx
  const WCHAR *v14; // rcx
  HRESULT String; // eax
  HSTRING *v16; // rsi

  v5 = a4;
  v7 = sub_18006A1B0(saturated_mul(a4, 8uLL));
  v8 = (HSTRING *)sub_18006A1B0(saturated_mul(v5, 8uLL));
  v9 = v8;
  v10 = 0;
  if ( v7 && v8 )
  {
    v11 = 0LL;
    if ( (_DWORD)v5 )
    {
      v12 = v7 - (_BYTE *)a2;
      while ( v10 >= 0 )
      {
        v13 = -1LL;
        *(const WCHAR **)((char *)a2 + v12) = (const WCHAR *)sub_1800B7410;
        v14 = *a2;
        do
          ++v13;
        while ( v14[v13] );
        String = WindowsCreateString(v14, v13, &v9[v11]);
        v11 = (unsigned int)(v11 + 1);
        ++a2;
        v10 = String;
        if ( (unsigned int)v11 >= (unsigned int)v5 )
        {
          if ( String < 0 )
            break;
          goto LABEL_10;
        }
      }
    }
    else
    {
LABEL_10:
      v10 = RoRegisterActivationFactories(v9, v7, (unsigned int)v5, a3);
    }
    if ( (_DWORD)v11 )
    {
      v16 = v9;
      do
      {
        WindowsDeleteString(*v16++);
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    v10 = -2147024882;
  }
  sub_180033A70(v7);
  sub_180033A70(v9);
  return (unsigned int)v10;
}
