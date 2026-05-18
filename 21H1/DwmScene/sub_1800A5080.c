/*
 * XREFs of sub_1800A5080 @ 0x1800A5080
 * Callers:
 *     sub_18008CCD4 @ 0x18008CCD4 (sub_18008CCD4.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800A5B84 @ 0x1800A5B84 (sub_1800A5B84.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800A5080(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  v4 = a1 + 472;
  sub_1800619A8(a1 + 472);
  sub_1800A5B84(a1 + 480, a2);
  result = sub_180061A34(v4);
  v6 = *(volatile signed __int32 **)(a2 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
