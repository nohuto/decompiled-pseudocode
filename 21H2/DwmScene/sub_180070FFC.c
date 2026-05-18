/*
 * XREFs of sub_180070FFC @ 0x180070FFC
 * Callers:
 *     sub_18006F860 @ 0x18006F860 (sub_18006F860.c)
 *     sub_180079884 @ 0x180079884 (sub_180079884.c)
 * Callees:
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180070FFC(_BYTE *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  result = sub_180066E84((__int64)(a1 + 24), (__int64)&v3);
  if ( !a1[3977] )
  {
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
    a1[3977] = 1;
  }
  if ( BYTE8(v3) )
    return sub_180067304(v3);
  return result;
}
