/*
 * XREFs of sub_1800AA950 @ 0x1800AA950
 * Callers:
 *     sub_1800925A4 @ 0x1800925A4 (sub_1800925A4.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800AB454 @ 0x1800AB454 (sub_1800AB454.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800AA950(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  v4 = a1 + 472;
  sub_180067278(a1 + 472);
  sub_1800AB454(a1 + 480, a2);
  result = sub_180067304(v4);
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
