/*
 * XREFs of sub_18000D0F8 @ 0x18000D0F8
 * Callers:
 *     sub_18000C840 @ 0x18000C840 (sub_18000C840.c)
 *     sub_18000CB94 @ 0x18000CB94 (sub_18000CB94.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000D5F4 @ 0x18000D5F4 (sub_18000D5F4.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18000D0F8(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx

  v2 = a1[1];
  if ( v2 >= a1[2] && !(unsigned __int8)sub_18000D5F4(a1, v2 + 1) )
    sub_18000A174(-2147024882);
  v5 = *a1 + 32 * v2;
  *(_QWORD *)v5 = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(a2 + 8);
  sub_18000F150(v5 + 16, a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(v5 + 24) = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  ++a1[1];
  return v2;
}
