/*
 * XREFs of sub_18007CC5C @ 0x18007CC5C
 * Callers:
 *     sub_18007C73C @ 0x18007C73C (sub_18007C73C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     sub_18007D994 @ 0x18007D994 (sub_18007D994.c)
 */

__int64 __fastcall sub_18007CC5C(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 *v7; // rbx
  __int64 *v9; // rdi
  __int64 v11; // rsi
  __int64 *v12; // r14
  signed __int64 v13; // rcx
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r14
  signed __int64 v17; // rcx
  signed __int64 v18; // r15
  __int64 *v19; // rbx

  v7 = a2;
  v9 = a1;
  if ( !a4 )
    return (__int64)a3;
  if ( !a5 )
    return (__int64)v9;
  if ( a4 <= a5 && a4 <= a7 )
  {
    v11 = (__int64)a6;
    v12 = a6;
    if ( a1 != a2 )
    {
      v13 = (char *)a1 - (char *)a6;
      do
      {
        *v12 = 0LL;
        v12[1] = 0LL;
        *v12 = *(__int64 *)((char *)v12 + v13);
        v12[1] = *(__int64 *)((char *)v12 + v13 + 8);
        *(__int64 *)((char *)v12 + v13) = 0LL;
        *(__int64 *)((char *)v12 + v13 + 8) = 0LL;
        v12 += 2;
      }
      while ( (__int64 *)((char *)v12 + v13) != a2 );
    }
    while ( v7 != a3 )
    {
      std::shared_ptr<__ExceptionPtr>::operator=(v9, v7);
      v9 += 2;
      v7 += 2;
    }
    v14 = a6;
    if ( a6 != v12 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v14 + (char *)v9 - (char *)a6), v14);
        v14 += 2;
      }
      while ( v14 != v12 );
      while ( (__int64 *)v11 != v12 )
      {
        unknown_libname_100(v11, 0);
        v11 += 16LL;
      }
    }
    return (__int64)v9;
  }
  if ( a5 <= a7 )
  {
    v15 = (__int64)a6;
    v16 = a6;
    if ( a2 != a3 )
    {
      v17 = (char *)a2 - (char *)a6;
      do
      {
        *v16 = 0LL;
        v16[1] = 0LL;
        *v16 = *(__int64 *)((char *)v16 + v17);
        v16[1] = *(__int64 *)((char *)v16 + v17 + 8);
        *(__int64 *)((char *)v16 + v17) = 0LL;
        *(__int64 *)((char *)v16 + v17 + 8) = 0LL;
        v16 += 2;
      }
      while ( (__int64 *)((char *)v16 + v17) != a3 );
    }
    if ( a2 != v9 )
    {
      v18 = (char *)a3 - (char *)a2;
      do
      {
        v7 -= 2;
        std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v7 + v18), v7);
      }
      while ( v7 != v9 );
    }
    v19 = a6;
    if ( a6 != v16 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v9, v19);
        v9 += 2;
        v19 += 2;
      }
      while ( v19 != v16 );
      while ( (__int64 *)v15 != v16 )
      {
        unknown_libname_100(v15, 0);
        v15 += 16LL;
      }
    }
    return (__int64)v9;
  }
  return sub_18007D994(a1, a2);
}
