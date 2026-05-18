/*
 * XREFs of sub_1800A05A0 @ 0x1800A05A0
 * Callers:
 *     sub_180069230 @ 0x180069230 (sub_180069230.c)
 *     sub_1800D1030 @ 0x1800D1030 (sub_1800D1030.c)
 * Callees:
 *     sub_180067E60 @ 0x180067E60 (sub_180067E60.c)
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A05A0(__int64 a1, int a2)
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
  sub_180069518((__int64 *)(a1 + 112), (unsigned int *)&v6);
  return sub_180067E60(a1, a2);
}
