/*
 * XREFs of sub_1800033E4 @ 0x1800033E4
 * Callers:
 *     sub_18000334C @ 0x18000334C (sub_18000334C.c)
 *     sub_180073880 @ 0x180073880 (sub_180073880.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800033E4(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = TpSetTimerEx(a1[168], 0LL, 0LL, 0LL);
  if ( (_DWORD)result )
  {
    v3 = *a1;
    *((_DWORD *)a1 + 338) &= ~8u;
    return (*(__int64 (__fastcall **)(__int64 *))(v3 + 16))(a1);
  }
  return result;
}
