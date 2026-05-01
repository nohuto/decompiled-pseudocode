/*
 * XREFs of sub_18006FD1C @ 0x18006FD1C
 * Callers:
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall sub_18006FD1C(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 (__fastcall **v4)(); // rsi
  unsigned int i; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = &off_180093EC8;
  for ( i = 0; i < 5; ++i )
  {
    if ( ((1 << i) & *(_DWORD *)(a2 + 164)) != 0 )
      result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64))*(v4 - 1))(a1, a2);
    if ( ((1 << i) & *(_DWORD *)(a2 + 160)) != 0 )
      result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64))*v4)(a1, a2);
    v4 += 5;
  }
  *(_DWORD *)(a2 + 160) = 0;
  *(_DWORD *)(a2 + 164) = 0;
  return result;
}
