/*
 * XREFs of sub_1800C41EC @ 0x1800C41EC
 * Callers:
 *     sub_1800C40FC @ 0x1800C40FC (sub_1800C40FC.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 */

_UNKNOWN **__fastcall sub_1800C41EC(__int64 a1)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *i; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // rbx

  result = &off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    result = (_UNKNOWN **)sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0xBu, (__int64)&unk_18016E298);
  }
  v3 = *(_QWORD **)(a1 + 64);
  for ( i = *(_QWORD **)(a1 + 56); i != v3; ++i )
    result = (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 264LL))(*i);
  v5 = *(__int64 **)(a1 + 64);
  v6 = *(__int64 **)(a1 + 56);
  if ( v6 != v5 )
  {
    do
      result = (_UNKNOWN **)sub_18000F708(v6++);
    while ( v6 != v5 );
    v6 = *(__int64 **)(a1 + 56);
  }
  *(_QWORD *)(a1 + 64) = v6;
  return result;
}
