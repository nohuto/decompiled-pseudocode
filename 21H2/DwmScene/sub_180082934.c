/*
 * XREFs of sub_180082934 @ 0x180082934
 * Callers:
 *     sub_1800822C0 @ 0x1800822C0 (sub_1800822C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180082934(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v5; // rbp
  __int64 *v9; // rbx
  char *v10; // rcx
  __int64 *v11; // rsi
  _QWORD *v12; // r15
  __int64 *v13; // rdi
  char *v14; // r14
  __int64 result; // rax
  signed __int64 v16; // r14

  v5 = (__int64)a4;
  v9 = a4;
  if ( a1 != a2 )
  {
    v10 = (char *)((char *)a1 - (char *)a4);
    do
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      *v9 = *(__int64 *)((char *)v9 + (_QWORD)v10);
      v9[1] = *(__int64 *)((char *)v9 + (_QWORD)v10 + 8);
      *(__int64 *)((char *)v9 + (_QWORD)v10) = 0LL;
      *(__int64 *)((char *)v9 + (_QWORD)v10 + 8) = 0LL;
      v9 += 2;
    }
    while ( (__int64 *)((char *)v9 + (_QWORD)v10) != a2 );
  }
  v11 = a4;
  std::shared_ptr<__ExceptionPtr>::operator=(a1, a2);
  v12 = a1 + 2;
  v13 = a2 + 2;
  while ( 1 )
  {
    v14 = (char *)(v12 + 2);
    if ( a5(v13, v11) )
      break;
    std::shared_ptr<__ExceptionPtr>::operator=(v12, v11);
    v11 += 2;
    if ( v11 == v9 - 2 )
    {
      while ( v13 != a3 )
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v14, v13);
        v14 += 16;
        v13 += 2;
      }
      result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v14, v9 - 2);
      goto LABEL_18;
    }
LABEL_12:
    v12 += 2;
  }
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=(v12, v13);
  v13 += 2;
  if ( v13 != a3 )
    goto LABEL_12;
  if ( v11 != v9 )
  {
    v16 = v14 - (char *)v11;
    do
    {
      result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((__int64 *)((char *)v11 + v16), v11);
      v11 += 2;
    }
    while ( v11 != v9 );
  }
LABEL_18:
  while ( (__int64 *)v5 != v9 )
  {
    result = unknown_libname_102(v5, 0);
    v5 += 16LL;
  }
  return result;
}
