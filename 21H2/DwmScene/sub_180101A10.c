/*
 * XREFs of sub_180101A10 @ 0x180101A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_180083F74 @ 0x180083F74 (sub_180083F74.c)
 *     sub_180085B3C @ 0x180085B3C (sub_180085B3C.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     sub_180101970 @ 0x180101970 (sub_180101970.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180101A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 134283264LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x8010000) == 0x8010000 )
  {
    sub_1800F0B14(a1);
    sub_18007B2BC();
  }
  return result;
}
