/*
 * XREFs of sub_18010ACD4 @ 0x18010ACD4
 * Callers:
 *     sub_18010B400 @ 0x18010B400 (sub_18010B400.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_18010B5D4 @ 0x18010B5D4 (sub_18010B5D4.c)
 */

void __fastcall sub_18010ACD4(__int64 a1, char *a2, char *a3)
{
  __int64 v3; // rbp
  char *v4; // r14
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rdi
  char *v8; // rsi
  char *v10; // rdi
  signed __int64 v11; // r14
  char *v12; // rbx
  __int64 v13; // rax
  __int64 i; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(char **)a1;
  v5 = (a3 - a2) >> 4;
  v7 = (v3 - *(_QWORD *)a1) >> 4;
  v8 = a2;
  if ( v5 <= v7 )
  {
    v12 = &v4[16 * v5];
    if ( a2 != a3 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v4, v8);
        v4 += 16;
        v8 += 16;
      }
      while ( v8 != a3 );
      v3 = *(_QWORD *)(a1 + 8);
    }
    for ( i = (__int64)v12; i != v3; i += 16LL )
      unknown_libname_102(i, 0);
  }
  else
  {
    if ( v5 > (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 4 )
    {
      sub_18010B5D4(a1, (a3 - a2) >> 4);
      v4 = *(char **)a1;
      v7 = 0LL;
    }
    v10 = &v8[16 * v7];
    if ( v8 != v10 )
    {
      v11 = v4 - v8;
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(&v8[v11], v8);
        v8 += 16;
      }
      while ( v8 != v10 );
    }
    v12 = *(char **)(a1 + 8);
    while ( v10 != a3 )
    {
      *(_QWORD *)v12 = 0LL;
      *((_QWORD *)v12 + 1) = 0LL;
      v13 = *((_QWORD *)v10 + 1);
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      *(_QWORD *)v12 = *(_QWORD *)v10;
      *((_QWORD *)v12 + 1) = *((_QWORD *)v10 + 1);
      v12 += 16;
      v10 += 16;
    }
  }
  *(_QWORD *)(a1 + 8) = v12;
}
