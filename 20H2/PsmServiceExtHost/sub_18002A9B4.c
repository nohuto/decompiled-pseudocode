/*
 * XREFs of sub_18002A9B4 @ 0x18002A9B4
 * Callers:
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002A9B4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 result; // rax

  v5 = *(_QWORD *)(*(_QWORD *)(a1 - 16) + 40LL);
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v5 + 184))(a3, a2, 0LL);
  if ( (int)result < 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v5 + 184))(a3, a2, 1LL);
  return result;
}
