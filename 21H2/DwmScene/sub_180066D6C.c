/*
 * XREFs of sub_180066D6C @ 0x180066D6C
 * Callers:
 *     sub_18001727C @ 0x18001727C (sub_18001727C.c)
 *     sub_18002395C @ 0x18002395C (sub_18002395C.c)
 *     sub_180023BA4 @ 0x180023BA4 (sub_180023BA4.c)
 *     sub_180023DEC @ 0x180023DEC (sub_180023DEC.c)
 *     sub_180024034 @ 0x180024034 (sub_180024034.c)
 *     sub_18002427C @ 0x18002427C (sub_18002427C.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180066D6C(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  v2 = *(volatile signed __int32 **)(a1 + 8);
  if ( v2 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v5 = *(volatile signed __int32 **)(a2 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
