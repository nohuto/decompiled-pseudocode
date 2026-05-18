/*
 * XREFs of sub_180039438 @ 0x180039438
 * Callers:
 *     sub_18003A5A8 @ 0x18003A5A8 (sub_18003A5A8.c)
 *     sub_18003AE4C @ 0x18003AE4C (sub_18003AE4C.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180039438(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  int v8; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+40h] [rbp-18h] BYREF

  v9 = a3;
  v8 = a4;
  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    JUMPOUT(0x1800394D8LL);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *, int *))(*(_QWORD *)v5 + 16LL))(v5, a2, &v9, &v8);
  v7 = *(volatile signed __int32 **)(a2 + 8);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
