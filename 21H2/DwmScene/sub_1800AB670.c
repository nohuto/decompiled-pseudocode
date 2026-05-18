/*
 * XREFs of sub_1800AB670 @ 0x1800AB670
 * Callers:
 *     sub_1800AEC10 @ 0x1800AEC10 (sub_1800AEC10.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_1800B3854 @ 0x1800B3854 (sub_1800B3854.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800AB670(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 *v7; // rbp
  char *v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  signed __int64 v11; // rbx
  char *v12; // r14
  char *v13; // rcx
  const void *v14; // rdx
  __int64 *v15; // rbx
  const void *v16; // rdx
  __int64 *i; // rdi

  v4 = a2;
  v6 = ((char *)a3 - (char *)a2) >> 5;
  v7 = *(__int64 **)(a1 + 8);
  v8 = *(char **)a1;
  v9 = ((__int64)v7 - *(_QWORD *)a1) >> 5;
  if ( v6 <= v9 )
  {
    v15 = (__int64 *)&v8[32 * v6];
    if ( a2 != a3 )
    {
      do
      {
        if ( v8 != (char *)v4 )
        {
          v16 = v4;
          if ( v4[3] >= 8 )
            v16 = (const void *)*v4;
          std::wstring::assign(v8, v16, v4[2]);
        }
        v8 += 32;
        v4 += 4;
      }
      while ( v4 != a3 );
      v7 = *(__int64 **)(a1 + 8);
    }
    for ( i = v15; i != v7; i += 4 )
      unknown_libname_103(i);
  }
  else
  {
    if ( v6 > (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v8) >> 5 )
    {
      sub_1800B3854(a1, ((char *)a3 - (char *)a2) >> 5);
      v9 = 0LL;
      v8 = *(char **)a1;
    }
    v10 = (__int64)&v4[4 * v9];
    if ( v4 != (unsigned __int64 *)v10 )
    {
      v11 = (char *)v4 - v8;
      v12 = (char *)(v8 - (char *)v4);
      do
      {
        v13 = (char *)v4 + (_QWORD)v12;
        if ( (unsigned __int64 *)((char *)v4 + (_QWORD)v12) != v4 )
        {
          v14 = v4;
          if ( *(_QWORD *)&v13[v11 + 24] >= 8uLL )
            v14 = (const void *)*v4;
          std::wstring::assign(v13, v14, *(_QWORD *)&v13[v11 + 16]);
        }
        v4 += 4;
      }
      while ( v4 != (unsigned __int64 *)v10 );
    }
    v15 = *(__int64 **)(a1 + 8);
    while ( (unsigned __int64 *)v10 != a3 )
    {
      v15[2] = 0LL;
      v15[3] = 0LL;
      sub_18001277C(v15, v10);
      v15 += 4;
      v10 += 32LL;
    }
  }
  *(_QWORD *)(a1 + 8) = v15;
}
