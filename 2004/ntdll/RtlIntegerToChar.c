/*
 * XREFs of RtlIntegerToChar @ 0x1800163A0
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x1800164A0 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlIntegerToChar(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rax
  const char *v13; // rdx
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v18; // rbx
  char v19; // [rsp+41h] [rbp-27h] BYREF

  v6 = a2;
  if ( !a2 )
  {
    v6 = 10;
    goto LABEL_17;
  }
  if ( a2 != 16 )
  {
    if ( a2 != 10 )
    {
      if ( a2 == 2 )
      {
        v8 = 1;
      }
      else
      {
        if ( a2 != 8 )
          return 3221225485LL;
        v8 = 3;
      }
      goto LABEL_4;
    }
LABEL_17:
    v8 = 0;
    v9 = 0;
    goto LABEL_5;
  }
  v8 = 4;
LABEL_4:
  v9 = (1 << v8) - 1;
LABEL_5:
  v10 = &v19;
  do
  {
    if ( v8 )
    {
      v11 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      v11 = a1 % v6;
      a1 /= v6;
    }
    --v10;
    v12 = v11;
    v13 = "0123456789ABCDEF";
    *v10 = RtlpIntegerChars[v12];
  }
  while ( a1 );
  v15 = (unsigned int)(v14 + 65 - (_DWORD)v10);
  if ( a3 >= 0 )
    goto LABEL_10;
  a3 = -a3;
  v16 = (int)v15 <= a3;
  if ( (int)v15 < a3 )
  {
    v18 = (unsigned int)(a3 - v15);
    LOBYTE(v13) = 48;
    memset(a4, (int)v13, v18);
    a3 = v15;
    a4 += v18;
LABEL_10:
    v16 = (int)v15 <= a3;
  }
  if ( !v16 )
    return 2147483653LL;
  memmove(a4, v10, (unsigned int)v15);
  if ( (int)v15 < a3 )
    a4[v15] = 0;
  return 0LL;
}
