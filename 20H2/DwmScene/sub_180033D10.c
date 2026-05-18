/*
 * XREFs of sub_180033D10 @ 0x180033D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800685C0 @ 0x1800685C0 (sub_1800685C0.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033D10(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = sub_1800685C0();
  v3 = *(_QWORD *)(a1 + 144);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 880LL))(v3);
  return result;
}
