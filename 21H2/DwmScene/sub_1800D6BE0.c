/*
 * XREFs of sub_1800D6BE0 @ 0x1800D6BE0
 * Callers:
 *     sub_18006B550 @ 0x18006B550 (sub_18006B550.c)
 * Callees:
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_1800A754C @ 0x1800A754C (sub_1800A754C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     log10f @ 0x18012505A (log10f.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_1800D6BE0(__int64 a1, __int64 a2, char a3)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+280h] [rbp+178h] BYREF

  result = &retaddr;
  if ( (a3 & 1) != 0 || (a3 & 0x7E) != 0 )
  {
    sub_1800703D4(a2);
    sub_18007B2BC();
  }
  return result;
}
