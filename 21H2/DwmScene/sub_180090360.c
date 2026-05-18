/*
 * XREFs of sub_180090360 @ 0x180090360
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_180083F74 @ 0x180083F74 (sub_180083F74.c)
 *     sub_180083FF0 @ 0x180083FF0 (sub_180083FF0.c)
 *     sub_180084098 @ 0x180084098 (sub_180084098.c)
 *     sub_180085248 @ 0x180085248 (sub_180085248.c)
 *     sub_180085444 @ 0x180085444 (sub_180085444.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_1800860A8 @ 0x1800860A8 (sub_1800860A8.c)
 *     sub_180086C14 @ 0x180086C14 (sub_180086C14.c)
 *     sub_180088C78 @ 0x180088C78 (sub_180088C78.c)
 *     sub_18008FF50 @ 0x18008FF50 (sub_18008FF50.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     cosf @ 0x180125036 (cosf.c)
 *     expf @ 0x18012503C (expf.c)
 *     sinf @ 0x180125042 (sinf.c)
 *     tanf @ 0x180125048 (tanf.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180090360(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 2162688LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x210000) == 0x210000 )
  {
    sub_1800F0B14();
    sub_18007B2BC();
  }
  return result;
}
