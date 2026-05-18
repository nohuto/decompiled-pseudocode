/*
 * XREFs of sub_180079718 @ 0x180079718
 * Callers:
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 * Callees:
 *     sub_18006156C @ 0x18006156C (sub_18006156C.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_180079020 @ 0x180079020 (sub_180079020.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180079718(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  result = sub_18006156C(a1 + 8, (__int64)&v3);
  if ( !*(_BYTE *)(a1 + 1160) )
  {
    sub_180079020((_QWORD *)a1, 0);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
    *(_BYTE *)(a1 + 1160) = 1;
  }
  if ( BYTE8(v3) )
    return sub_180061A34(v3);
  return result;
}
