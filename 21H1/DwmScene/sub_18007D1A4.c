/*
 * XREFs of sub_18007D1A4 @ 0x18007D1A4
 * Callers:
 *     sub_18007C9F0 @ 0x18007C9F0 (sub_18007C9F0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_100 @ 0x180011544 (unknown_libname_100.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007D1A4(
        __int64 *a1,
        char *a2,
        char *a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v5; // rsi
  __int64 *v8; // r14
  signed __int64 v9; // rdx
  char *v10; // r15
  __int64 *v11; // rbp
  __int64 *v12; // rbx
  signed __int64 v13; // rdi
  __int64 result; // rax
  signed __int64 v15; // rdi

  v5 = a4;
  v8 = a4;
  if ( a2 != a3 )
  {
    v9 = a2 - (char *)a4;
    do
    {
      *v8 = 0LL;
      v8[1] = 0LL;
      *v8 = *(__int64 *)((char *)v8 + v9);
      v8[1] = *(__int64 *)((char *)v8 + v9 + 8);
      *(__int64 *)((char *)v8 + v9) = 0LL;
      *(__int64 *)((char *)v8 + v9 + 8) = 0LL;
      v8 += 2;
    }
    while ( (char *)v8 + v9 != a3 );
  }
  v10 = a3 - 16;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)a3 - 2, (__int64 *)a2 - 2);
  v11 = v8 - 2;
  v12 = (__int64 *)(a2 - 32);
  do
  {
    while ( 1 )
    {
      v10 -= 16;
      if ( !a5(v11, v12) )
        break;
      std::shared_ptr<__ExceptionPtr>::operator=(v10, v12);
      if ( a1 == v12 )
      {
        result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v10 - 2, v11);
        if ( v11 != v5 )
        {
          v15 = v10 - 16 - (char *)v11;
          do
          {
            v11 -= 2;
            result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v11 + v15), v11);
          }
          while ( v11 != v5 );
        }
        goto LABEL_19;
      }
      v12 -= 2;
    }
    std::shared_ptr<__ExceptionPtr>::operator=(v10, v11);
    v11 -= 2;
  }
  while ( v5 != v11 );
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v10 - 2, v12);
  if ( v12 != a1 )
  {
    v13 = v10 - 16 - (char *)v12;
    do
    {
      v12 -= 2;
      std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v12 + v13), v12);
    }
    while ( v12 != a1 );
  }
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(a1, v5);
LABEL_19:
  while ( v5 != v8 )
  {
    result = unknown_libname_100((__int64)v5, 0);
    v5 += 2;
  }
  return result;
}
