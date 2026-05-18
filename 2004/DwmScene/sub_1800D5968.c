/*
 * XREFs of sub_1800D5968 @ 0x1800D5968
 * Callers:
 *     sub_1800D5AE4 @ 0x1800D5AE4 (sub_1800D5AE4.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800D5880 @ 0x1800D5880 (sub_1800D5880.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D5968(__int64 *a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 result; // rax
  char *v6; // rbx
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v6 = (char *)(a2 - 16);
    v10 = 0LL;
    v10 = *(_OWORD *)(a2 - 16);
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a2 - 16), a1);
    result = sub_1800D5880((__int64)a1, 0LL, (v6 - (char *)a1) >> 4, (int)&v10, a3);
    v7 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
    if ( *((_QWORD *)&v10 + 1) )
    {
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF);
      v9 = v8 == 1;
      result = (unsigned int)(v8 - 1);
      if ( v9 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedDecrement(v7 + 3);
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
  }
  return result;
}
