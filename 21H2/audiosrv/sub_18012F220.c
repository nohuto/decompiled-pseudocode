/*
 * XREFs of sub_18012F220 @ 0x18012F220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012F220(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 80);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 64LL))(v1);
  else
    return 2147500033LL;
}
