/*
 * XREFs of sub_180111EF0 @ 0x180111EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180100830 @ 0x180100830 (sub_180100830.c)
 */

__int64 __fastcall sub_180111EF0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx

  if ( !*(_QWORD *)(a1 + 32) )
    return 2147943568LL;
  v3 = (__int64 *)sub_180100830((_QWORD *)(a1 + 16));
  v4 = *v3;
  *a2 = *v3;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return 0LL;
}
