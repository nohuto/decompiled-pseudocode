/*
 * XREFs of sub_180082C38 @ 0x180082C38
 * Callers:
 *     sub_180082BD8 @ 0x180082BD8 (sub_180082BD8.c)
 *     sub_180082FB8 @ 0x180082FB8 (sub_180082FB8.c)
 *     sub_180083328 @ 0x180083328 (sub_180083328.c)
 *     sub_1800DB3B4 @ 0x1800DB3B4 (sub_1800DB3B4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180082C38(__int64 *a1, __int64 *a2, __int64 (__fastcall *a3)(__int128 *, __int64 *))
{
  __int64 *v6; // rdi
  __int64 *v7; // r14
  __int64 *v8; // r15
  __int64 *i; // rbx
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  __int64 *j; // rdx
  char v13; // al
  volatile signed __int32 *v14; // rbx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF

  if ( a1 != a2 )
  {
    v6 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v7 = a1;
      do
      {
        v8 = v6;
        v16 = 0LL;
        *(_QWORD *)&v16 = *v6;
        *((_QWORD *)&v16 + 1) = v7[3];
        *v6 = 0LL;
        v7[3] = 0LL;
        if ( (unsigned __int8)a3(&v16, a1) )
        {
          for ( i = v6; i != a1; std::shared_ptr<__ExceptionPtr>::operator=(i + 2, i) )
            i -= 2;
          v10 = a1;
        }
        else
        {
          v11 = v7;
          for ( j = v7; ; j = v11 )
          {
            v13 = a3(&v16, j);
            v10 = v8;
            if ( !v13 )
              break;
            std::shared_ptr<__ExceptionPtr>::operator=(v8, v11);
            v8 = v11;
            v11 -= 2;
          }
        }
        std::shared_ptr<__ExceptionPtr>::operator=(v10, (__int64 *)&v16);
        v14 = (volatile signed __int32 *)*((_QWORD *)&v16 + 1);
        if ( *((_QWORD *)&v16 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          }
        }
        v6 += 2;
        v7 += 2;
      }
      while ( v6 != a2 );
    }
  }
  return a2;
}
