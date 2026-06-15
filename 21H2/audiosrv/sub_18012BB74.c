/*
 * XREFs of sub_18012BB74 @ 0x18012BB74
 * Callers:
 *     sub_180129130 @ 0x180129130 (sub_180129130.c)
 *     sub_18012BBC8 @ 0x18012BBC8 (sub_18012BBC8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012BB74(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10

  v3 = *(_QWORD *)(a1 + 536);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 96LL))(
             v3,
             a1 + 8,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 528) + 48LL))(
             *(_QWORD *)(a1 + 528),
             a2,
             a3,
             a2);
}
