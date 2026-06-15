/*
 * XREFs of sub_1800581F0 @ 0x1800581F0
 * Callers:
 *     sub_180057E90 @ 0x180057E90 (sub_180057E90.c)
 * Callees:
 *     sub_18005821C @ 0x18005821C (sub_18005821C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800581F0(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 result; // rax
  __int64 v6; // rcx

  v4 = *(__int64 **)(a1 + 8);
  if ( *(__int64 **)(a1 + 16) == v4 )
    return sub_18005821C(a1, v4, a2);
  v6 = *a2;
  *v4 = *a2;
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *(_QWORD *)(a1 + 8) += 8LL;
  return result;
}
