/*
 * XREFs of sub_18010B77C @ 0x18010B77C
 * Callers:
 *     sub_18010BC0C @ 0x18010BC0C (sub_18010BC0C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18010BCA0 @ 0x18010BCA0 (sub_18010BCA0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18010B77C(__int64 *a1, __int64 *a2)
{
  __int64 *v4; // rdi
  __int64 *v5; // r15
  __int64 *v6; // r12
  __int64 *i; // rbx
  __int64 *v8; // rcx
  __int64 *v9; // rbx
  __int64 *j; // r8
  char v11; // al
  __int64 v12; // rbx
  __int128 v14; // [rsp+20h] [rbp-20h] BYREF
  char v15[8]; // [rsp+30h] [rbp-10h] BYREF

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    if ( a1 + 2 != a2 )
    {
      v5 = a1;
      do
      {
        v6 = v4;
        v14 = 0LL;
        *(_QWORD *)&v14 = *v4;
        *((_QWORD *)&v14 + 1) = v5[3];
        *v4 = 0LL;
        v5[3] = 0LL;
        if ( (unsigned __int8)sub_18010BCA0(v15, &v14, a1) )
        {
          for ( i = v4; i != a1; std::shared_ptr<__ExceptionPtr>::operator=(i + 2, i) )
            i -= 2;
          v8 = a1;
        }
        else
        {
          v9 = v5;
          for ( j = v5; ; j = v9 )
          {
            v11 = sub_18010BCA0(v15, &v14, j);
            v8 = v6;
            if ( !v11 )
              break;
            std::shared_ptr<__ExceptionPtr>::operator=(v6, v9);
            v6 = v9;
            v9 -= 2;
          }
        }
        std::shared_ptr<__ExceptionPtr>::operator=(v8, (__int64 *)&v14);
        if ( *((_QWORD *)&v14 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v12 = *((_QWORD *)&v14 + 1);
            (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
          }
        }
        v4 += 2;
        v5 += 2;
      }
      while ( v4 != a2 );
    }
  }
  return a2;
}
