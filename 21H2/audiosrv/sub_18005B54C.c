/*
 * XREFs of sub_18005B54C @ 0x18005B54C
 * Callers:
 *     sub_18005B160 @ 0x18005B160 (sub_18005B160.c)
 *     sub_18005B230 @ 0x18005B230 (sub_18005B230.c)
 *     sub_18005B330 @ 0x18005B330 (sub_18005B330.c)
 *     sub_180126CE0 @ 0x180126CE0 (sub_180126CE0.c)
 *     sub_180127180 @ 0x180127180 (sub_180127180.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005B54C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v3 + 96LL))(
             v3,
             a1 + 112,
             0LL,
             a2,
             a3);
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 88) + 48LL))(
             *(_QWORD *)(a1 + 88),
             a2,
             a3,
             a2);
}
