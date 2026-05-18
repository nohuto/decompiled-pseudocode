/*
 * XREFs of sub_1800DC3A0 @ 0x1800DC3A0
 * Callers:
 *     sub_1800DDF78 @ 0x1800DDF78 (sub_1800DDF78.c)
 * Callees:
 *     sub_1800DD57C @ 0x1800DD57C (sub_1800DD57C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DC3A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  volatile signed __int32 *v5; // rbx

  result = sub_1800DD57C();
  v5 = *(volatile signed __int32 **)(a3 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
