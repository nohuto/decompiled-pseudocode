/*
 * XREFs of sub_18009ACD0 @ 0x18009ACD0
 * Callers:
 *     sub_180063960 @ 0x180063960 (sub_180063960.c)
 *     sub_1800CB760 @ 0x1800CB760 (sub_1800CB760.c)
 * Callees:
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009ACD0(__int64 a1, int a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int v6; // [rsp+20h] [rbp-18h] BYREF

  if ( !a2 )
  {
    v4 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  v6 = a2;
  sub_180063C48((__int64 *)(a1 + 112), (unsigned int *)&v6);
  return sub_180062590(a1, a2);
}
