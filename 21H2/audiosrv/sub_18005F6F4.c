/*
 * XREFs of sub_18005F6F4 @ 0x18005F6F4
 * Callers:
 *     sub_18005EF08 @ 0x18005EF08 (sub_18005EF08.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_18005F6F4(__int64 a1)
{
  LPOLESTR *v2; // rbx
  HRESULT v3; // ebx
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  size_t v6; // rsi
  size_t v7; // rbp
  char *v8; // rax
  char *v9; // rbx
  unsigned int v10; // eax
  _BYTE *v11; // rdi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 96) )
    goto LABEL_20;
  v2 = (LPOLESTR *)(a1 + 312);
  sub_18002A504((void **)(a1 + 312), 0LL);
  v3 = StringFromCLSID(&stru_18015C850, v2);
  if ( v3 < 0 )
  {
    v13 = 2589;
LABEL_25:
    sub_18004BD84((int)retaddr, v13, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v3);
    return (unsigned int)v3;
  }
  sub_18002A504((void **)(a1 + 376), 0LL);
  v3 = StringFromCLSID(&stru_18015C840, (LPOLESTR *)(a1 + 376));
  if ( v3 < 0 )
  {
    v13 = 2597;
    goto LABEL_25;
  }
  sub_18002A504((void **)(a1 + 344), 0LL);
  v3 = StringFromCLSID(&stru_18015C830, (LPOLESTR *)(a1 + 344));
  if ( v3 < 0 )
  {
    v13 = 2605;
    goto LABEL_25;
  }
  v4 = 0x7FFFFFFFLL;
  v5 = L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}";
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = 2 * (v5 - L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}");
  v7 = v6 + 2;
  v8 = (char *)CoTaskMemAlloc(v6 + 2);
  v9 = v8;
  if ( v8 )
  {
    if ( v6 )
    {
      if ( v7 < v6 )
      {
        memset(v8, 0, v7);
        *(_DWORD *)o__errno(v14) = 34;
        o__invalid_parameter_noinfo(v15);
      }
      else
      {
        memcpy(v8, L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}", v6);
      }
    }
    *(_WORD *)&v9[v6] = 0;
  }
  if ( (char *)(a1 + 280) != &v16 )
  {
    sub_18002A504((void **)(a1 + 280), v9);
    v9 = 0LL;
  }
  if ( v9 )
    CoTaskMemFree(v9);
  if ( !*(_QWORD *)(a1 + 280) )
  {
    v3 = -2147024882;
    v13 = 2610;
    goto LABEL_25;
  }
  sub_18002A504((void **)(a1 + 408), 0LL);
  v3 = StringFromCLSID(&stru_18015C820, (LPOLESTR *)(a1 + 408));
  if ( v3 < 0 )
  {
    v13 = 2618;
    goto LABEL_25;
  }
  sub_18002A504((void **)(a1 + 440), 0LL);
  v3 = StringFromCLSID(&stru_18015C810, (LPOLESTR *)(a1 + 440));
  if ( v3 < 0 )
  {
    v13 = 2626;
    goto LABEL_25;
  }
LABEL_20:
  v10 = 0;
  v11 = (_BYTE *)(a1 + 272);
  do
  {
    ++v10;
    *v11 = 0;
    v11 += 32;
  }
  while ( v10 < 6 );
  return 0LL;
}
