/*
 * XREFs of sub_18001986C @ 0x18001986C
 * Callers:
 *     sub_180018CE0 @ 0x180018CE0 (sub_180018CE0.c)
 *     sub_180018D00 @ 0x180018D00 (sub_180018D00.c)
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18001A7FC @ 0x18001A7FC (sub_18001A7FC.c)
 *     _o__invalid_parameter_noinfo @ 0x18004534E (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x180045C8F (memmove.c)
 */

__int64 __fastcall sub_18001986C(__int64 a1, unsigned int a2, HSTRING a3, char a4)
{
  int v7; // esi
  _DWORD *v8; // r14
  unsigned int v9; // eax
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rdx
  size_t v14; // r8
  void *v15; // rcx
  HSTRING newString; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v7 = WindowsDuplicateString(a3, &newString);
  if ( v7 < 0 )
  {
    newString = 0LL;
    goto LABEL_34;
  }
  v8 = (_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 72) == 1 )
  {
    if ( !*v8 )
      *v8 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  v9 = *(_DWORD *)(a1 + 40);
  if ( a4 )
    a2 = *(_DWORD *)(a1 + 40);
  if ( a2 <= v9 )
  {
    if ( v9 >= 0x7FFFFFFF )
    {
      v7 = -2147024882;
      goto LABEL_28;
    }
    sub_18000DA2C((__int64)&v18);
    v7 = 0;
    v10 = *(_DWORD *)(a1 + 44);
    if ( *(_DWORD *)(a1 + 40) + 1 > v10 )
    {
      v11 = v10 >> 1;
      if ( v10 + 1 > (v10 >> 1) + v10 )
        v11 = 1;
      v7 = sub_18001A7FC(a1, v10 + v11);
      if ( v7 < 0 )
        goto LABEL_28;
    }
    v12 = *(_DWORD *)(a1 + 40);
    if ( a2 < v12 )
    {
      v13 = *(_QWORD *)(a1 + 56);
      v14 = 8LL * (v12 - a2);
      v15 = (void *)(v13 + 8LL * (a2 + 1));
      if ( v14 )
      {
        if ( !v15 || !(v13 + 8LL * a2) )
        {
          *(_DWORD *)o__errno(v15, v13) = 22;
LABEL_24:
          o__invalid_parameter_noinfo();
          v7 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
          goto LABEL_26;
        }
        if ( 8 * (unsigned __int64)(*(_DWORD *)(a1 + 44) - a2 - 1) < v14 )
        {
          *(_DWORD *)o__errno(v15, v13) = 34;
          goto LABEL_24;
        }
        memmove(v15, (const void *)(v13 + 8LL * a2), v14);
      }
    }
LABEL_26:
    if ( v7 >= 0 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2) = newString;
      newString = 0LL;
      ++*(_DWORD *)(a1 + 40);
      ++*(_DWORD *)(a1 + 88);
    }
    goto LABEL_28;
  }
  v7 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_28:
  if ( a1 != -72 )
  {
    if ( *(_DWORD *)(a1 + 72) == 1 )
      *v8 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  }
  if ( v7 >= 0 )
    v7 = sub_18000D958();
LABEL_34:
  WindowsDeleteString(newString);
  return (unsigned int)v7;
}
