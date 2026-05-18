/*
 * XREFs of sub_1800DB77C @ 0x1800DB77C
 * Callers:
 *     sub_1800F2044 @ 0x1800F2044 (sub_1800F2044.c)
 *     sub_1800F366C @ 0x1800F366C (sub_1800F366C.c)
 *     sub_1800F3790 @ 0x1800F3790 (sub_1800F3790.c)
 *     sub_1800F387C @ 0x1800F387C (sub_1800F387C.c)
 *     sub_1800F3F50 @ 0x1800F3F50 (sub_1800F3F50.c)
 *     sub_1800F5F80 @ 0x1800F5F80 (sub_1800F5F80.c)
 *     sub_18010A040 @ 0x18010A040 (sub_18010A040.c)
 *     unknown_libname_79 @ 0x18012F1AB (unknown_libname_79.c)
 *     unknown_libname_155 @ 0x18012FB93 (unknown_libname_155.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DB77C(__int64 a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 24);
  if ( v1 )
  {
    result = (unsigned int)_InterlockedDecrement(v1 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedDecrement(v1 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
